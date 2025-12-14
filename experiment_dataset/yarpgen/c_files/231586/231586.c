/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_6;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [1] [i_1] &= ((32752 ? (arr_1 [i_0 - 1]) : (arr_6 [i_0 + 1])));
            var_17 = (max(var_17, var_5));
            arr_8 [i_1] [i_0] [i_0] &= (((arr_5 [1] [i_1] [i_0 - 1]) ? (((var_5 || (arr_4 [1] [i_1] [i_1])))) : ((~(arr_4 [0] [0] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_18 = (((((var_3 ? var_7 : ((32752 ? var_6 : -30146))))) ? ((+(((arr_4 [i_0] [i_2 - 1] [1]) / 32767)))) : 4));
            arr_11 [i_0 + 1] [i_2] [i_2] = (arr_4 [i_2 - 1] [i_0 - 2] [i_0]);
            arr_12 [1] = (arr_3 [i_0]);
        }
    }
    #pragma endscop
}
