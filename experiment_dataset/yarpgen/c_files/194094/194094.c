/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((var_3 ? 110 : (~759896915)));
        var_18 *= 1;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [16] [i_1] [i_2] [i_1] = (2993415120980041180 / 34359214080);
                            var_19 = (var_1 || 10324);
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_20 = (max((max((~1464300103), var_11)), 10323));
                            arr_19 [i_1] [i_1] [i_3 - 1] [i_4] [5] [i_6] = (max((((~(max(var_0, var_6))))), (max((max(var_2, var_1)), ((-4323 ? var_14 : var_7))))));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_21 = (((((~(max(391743945342489828, -386475867))))) ? (!var_6) : var_6));
                            arr_24 [i_4] = ((334990958 < (max(140737488355327, 9079256848778919936))));
                            arr_25 [i_2] [i_2] = ((var_9 ? (min((min(var_14, var_5)), (((126 ? -10324 : 6642))))) : (((max((!var_10), -1))))));
                            var_22 = (min((max(var_12, (max(var_1, var_13)))), ((((max(8890, 31))) ? (max(-10324, 391743945342489828)) : ((var_8 ? 13503854054092448455 : var_7))))));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 32762;
                        }
                        var_23 -= (((var_16 ? var_7 : var_6)));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_24 = (min(113, ((~((var_5 ? var_13 : 10323))))));
                            var_25 = ((((min(((var_12 ? var_11 : var_0)), (98 < var_3)))) ? (!var_9) : (max((((18444492273895866368 ? -16 : 2147483647))), var_2))));
                            var_26 = ((var_0 ? var_2 : 32));
                            var_27 &= ((~((min(var_7, 24700)))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_28 = (((var_16 & -10323) + var_15));
                            var_29 *= ((1217 | (2147483647 >= var_6)));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_38 [i_11] [5] [i_3 - 1] [i_2] [i_1] = (!21216);
                            var_30 = var_10;
                            arr_39 [4] [i_8] [i_3] [i_3] [i_11] = var_2;
                        }
                        arr_40 [i_1] [i_1] [16] &= ((~(max((~var_2), (min(var_6, var_2))))));
                    }
                    var_31 |= ((~(((-127 - 1) + 37897))));
                }
            }
        }
    }
    #pragma endscop
}
