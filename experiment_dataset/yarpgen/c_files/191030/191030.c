/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? ((max(var_8, (((32755 ? -32759 : var_5)))))) : (max(var_2, var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_3 [i_1]) ^ var_15)) != ((((var_1 > (arr_6 [i_2] [i_2] [i_0] [i_0]))))))) ? (max(((max((arr_7 [i_0] [i_1] [i_0] [7]), (arr_7 [i_0] [4] [i_0] [i_0])))), (max((arr_7 [i_0] [i_1] [i_1] [i_2]), var_13)))) : ((((var_9 == (((((arr_5 [i_0] [i_1]) != var_10)))))))));
                    arr_8 [i_0] [4] [10] [12] &= arr_3 [12];
                    var_18 = (max((arr_3 [i_1]), (max(47047, 2047))));
                }
            }
        }
    }
    #pragma endscop
}
