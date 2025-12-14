/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [12] [i_1 + 2] [i_2] = (!var_6);
                    arr_7 [13] [i_1 - 2] = ((+(((((arr_4 [i_1 + 2] [i_1 - 1] [i_0 - 1] [i_0]) + 2147483647)) >> (((arr_4 [i_1 + 1] [i_1 + 1] [i_0 - 2] [i_0]) + 12132))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = (((((arr_4 [i_0] [i_1] [i_2] [i_0]) ? (((~(arr_0 [i_1] [i_2 + 2])))) : (min((arr_0 [i_2] [i_0]), (arr_5 [i_0] [i_1] [i_1] [i_2]))))) / (min((min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_0)), (((var_7 ? var_7 : (arr_1 [i_2] [9]))))))));
                    var_12 = (18446744073709551610 & 281406257233920);
                }
            }
        }
    }
    var_13 = ((var_8 ? ((var_5 ? (var_0 % var_8) : ((min(var_0, var_7))))) : var_8));
    #pragma endscop
}
