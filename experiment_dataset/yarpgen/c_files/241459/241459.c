/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 = ((((!((min(-91, var_1))))) ? (((min(var_10, (arr_2 [i_0]))) - 511)) : (~-91)));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((849661332842615383 >> (((arr_10 [i_0] [i_1] [i_2] [i_1]) - 2950799255495532144))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        var_12 = ((arr_7 [i_0] [i_0] [i_2]) / var_1);
                        arr_16 [i_0] [10] [i_0] = (((arr_12 [i_4 - 1] [i_0 + 1] [i_2] [11]) / (arr_12 [i_4 - 3] [i_0 - 2] [i_2] [10])));
                    }
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_13 = (!var_10);
                            var_14 -= ((max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_1]))));
                            var_15 = ((((min(var_10, var_2)) > 94)) ? (arr_11 [i_6] [0] [i_2] [10] [i_0]) : (((((arr_1 [i_0]) - 9205357638345293824)) - (var_1 / var_0))));
                            arr_23 [1] [3] [i_0] = (((18446744073709551615 ? (108 > var_1) : (arr_5 [i_5 + 2] [i_0 - 2]))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_28 [7] [i_1] [i_2] [i_5] [i_0] [i_5] [i_7] = (arr_20 [i_5] [i_5] [10] [i_5] [i_5 - 1] [i_7] [i_0]);
                            var_16 -= -var_0;
                            var_17 ^= (((arr_11 [i_7] [i_0 - 1] [i_5 + 1] [i_0 + 3] [i_0 - 1]) ? (arr_11 [i_7] [i_5] [i_5 + 2] [i_0 + 3] [i_0 + 3]) : (arr_11 [i_7] [i_7] [i_5 + 3] [i_0 - 1] [i_0 - 2])));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_0] [1] [i_2] [i_5]);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_18 = (arr_10 [i_0] [i_1] [i_2] [i_0 + 2]);
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = (((((((var_2 ? var_1 : (arr_6 [i_0]))) >> (var_1 < var_10)))) ? (((((var_10 ? var_9 : 849661332842615383))) ? (arr_19 [i_0] [i_1] [6] [i_5] [i_8]) : ((var_1 ? (arr_14 [i_0] [i_1]) : var_8)))) : (((arr_2 [i_0]) ? (arr_27 [i_8] [i_5] [i_2] [1] [i_0]) : (min((arr_12 [3] [i_1] [8] [i_8]), var_5))))));
                        }
                        arr_33 [i_0] [i_1] [i_2] [i_5] [9] = (min((arr_24 [i_0] [6] [i_2] [i_5 - 3] [i_1]), (((-(arr_9 [i_0 + 3] [i_5 + 1] [i_0]))))));
                        var_19 *= (((max((arr_9 [i_0 + 4] [i_2] [i_5]), (arr_10 [i_0 + 1] [i_1] [i_2] [i_5 - 3]))) / ((-(arr_10 [i_5 + 2] [i_2] [i_1] [i_0 + 3])))));
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_41 [i_0] = var_5;
                                arr_42 [i_0] [i_1] [i_0] [1] [2] = var_7;
                                var_20 = (max(var_20, ((min((((arr_8 [2] [1] [i_1]) ? (arr_37 [i_0] [i_0 + 4] [i_0] [i_0] [i_0] [i_0]) : ((var_10 ? 12085928790902328535 : var_8)))), (arr_26 [6]))))));
                                arr_43 [i_0] = 12085928790902328535;
                                var_21 = (arr_36 [i_0] [i_0] [0] [i_0] [i_10]);
                            }
                        }
                    }
                    var_22 = (min((((((min(var_9, -25163))) ? (arr_31 [i_0]) : ((min(var_6, var_2)))))), var_8));
                }
            }
        }
    }
    var_23 = 365468234524344561;
    var_24 = var_5;
    var_25 = ((((((var_6 != var_10) ^ ((var_7 ? var_4 : var_0))))) >= 0));
    var_26 = (min(((var_3 ? ((var_10 ? var_5 : var_7)) : var_10)), ((var_2 ? ((var_5 ? var_8 : var_2)) : (~var_10)))));
    #pragma endscop
}
