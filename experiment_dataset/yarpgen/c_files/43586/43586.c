/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_8);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (var_8 ? (103 > 4471) : (14336 - 1));
        var_13 &= (((var_6 ? (arr_0 [i_0]) : ((var_4 ? (arr_1 [i_0] [i_0]) : var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = ((var_2 & ((-(~var_6)))));
                    var_15 = (((arr_4 [i_0] [i_0] [i_1]) >= (arr_0 [i_2 - 3])));
                    var_16 &= var_11;
                    var_17 += var_11;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = var_9;
        arr_11 [i_3 - 3] = (var_6 ? var_11 : (arr_8 [i_3 - 3]));
    }
    #pragma endscop
}
