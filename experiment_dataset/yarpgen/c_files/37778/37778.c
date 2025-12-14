/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = 65535;
                                arr_14 [i_1] [i_1] [i_4] [i_3 + 1] [i_0] [18] = -var_2;
                                var_14 = ((-((var_12 ? 0 : (arr_7 [9] [i_1] [i_2 - 1] [i_0])))));
                                var_15 = (((arr_9 [i_0]) ? (arr_9 [i_0]) : 1));
                            }
                        }
                    }
                    var_16 = (max(var_16, 1));
                    arr_15 [i_0] = ((var_3 ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]) : (arr_6 [i_2 - 1] [i_2] [i_2])));
                    var_17 = ((var_3 * (arr_1 [i_0] [i_0])));
                }
            }
        }
        arr_16 [i_0] = ((103 ? ((var_3 ? var_3 : var_3)) : (var_10 / var_10)));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_18 ^= var_11;
        var_19 = (min(var_19, (((var_2 ? (1 + 1) : ((var_2 ? 860849668 : var_7)))))));
    }
    var_20 = (((var_9 ? (var_8 / var_7) : (var_1 - var_6))));
    var_21 *= var_0;
    var_22 = 250;
    #pragma endscop
}
