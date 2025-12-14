/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((((0 | 1) - var_0))) ? 1 : ((16949905272327424155 ? ((52 ? var_6 : -603210914)) : var_1))));
    var_16 *= -51;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((((arr_4 [i_1] [i_1]) < (((39 ? var_2 : 6199))))) ? (((arr_3 [i_0 - 2]) | var_6)) : var_5));

                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = arr_10 [i_4] [i_4] [i_4] [i_4];
                                arr_14 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = -40;
                                var_19 = 108;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_20 = (((arr_13 [i_0] [i_5] [i_5] [i_2] [i_1] [i_0]) ? 3214614619 : ((((((var_8 ? -28 : var_13))) ? 63488 : ((var_11 ? 39 : 52557)))))));
                        arr_17 [i_5] [i_0] [i_0] [i_0] = 39;

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            arr_21 [i_0] [i_5] [i_2] [i_2] [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_0 + 2]);
                            arr_22 [i_0] [i_2] [i_5] [i_0] = 50;
                            arr_23 [i_0] [i_0] [i_2] [i_5] [i_6] = ((252506124 ? (arr_6 [i_0] [i_1]) : var_11));
                            var_21 = ((8671785281321920663 ? var_4 : -793773540386484471));
                        }
                        for (int i_7 = 2; i_7 < 7;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_2]);
                            var_22 = var_3;
                        }
                        for (int i_8 = 3; i_8 < 7;i_8 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_2] [i_5] [i_8] = var_5;
                            var_23 = (((~var_12) ? (arr_16 [i_0] [i_2] [i_0]) : ((var_10 ? ((((arr_11 [i_0] [i_1] [i_0] [i_8]) ? 39 : var_10))) : (arr_2 [i_5] [i_8])))));
                        }

                        for (int i_9 = 4; i_9 < 9;i_9 += 1)
                        {
                            var_24 = var_8;
                            var_25 = 4278190080;
                        }
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 = (((arr_3 [i_1]) || (((30 ? (var_11 - 192) : (var_0 | -51))))));
                        arr_38 [i_0] [i_2] = (arr_37 [i_0]);
                        var_27 = ((((((arr_5 [i_0 + 4] [i_0] [i_2 + 2]) ? (arr_3 [i_0 + 4]) : var_3))) ? (arr_3 [i_0 + 4]) : ((63 & (arr_25 [i_0])))));
                        arr_39 [i_0] = var_6;
                        var_28 -= var_2;
                    }
                    arr_40 [i_0] [i_1] [i_1] [i_0] = (arr_20 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0]);
                    arr_41 [i_0] [i_0] [i_2] [i_2] = (((arr_10 [i_2] [i_1] [i_1] [i_0]) - ((((var_4 && (((25 ? var_7 : var_13)))))))));
                    var_29 |= -51;
                }
                var_30 = (max(var_30, ((((arr_5 [i_0] [i_0] [i_1]) ? 1 : (-9223372036854775807 - 1))))));
            }
        }
    }
    var_31 = 17363429310400756389;
    #pragma endscop
}
