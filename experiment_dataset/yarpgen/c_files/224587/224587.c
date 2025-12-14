/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = ((var_10 ? (((var_2 ? var_12 : 104))) : -80));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (arr_7 [i_0] [i_0]);
                        arr_11 [i_0 + 2] [7] [i_3] [7] [i_0] = (arr_0 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        arr_14 [i_2 + 3] [i_4 - 1] [i_4 - 1] [i_2 + 3] = (var_3 - -var_0);
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((var_4 ? (((((var_3 ? (arr_1 [i_0]) : (arr_4 [i_0])))))) : ((~(arr_2 [i_2])))));
                        var_21 = var_8;
                    }
                    arr_16 [i_0] [i_1] [i_1] = (min((((~(arr_2 [i_0 + 1])))), var_14));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = (max(((var_9 ? (var_10 + var_12) : var_11)), (((~var_16) ? 57187 : (var_2 & 111)))));
                                var_23 = (max(var_23, ((-(var_8 - var_10)))));
                                var_24 = ((-((var_16 ? -99 : -var_0))));
                                var_25 &= (((((((var_12 ? 113 : (arr_4 [i_6])))) * (arr_12 [i_0] [i_0] [i_2] [i_0]))) / var_10));
                                var_26 += (arr_17 [i_0 + 2] [i_2 + 1] [i_5 + 2] [i_5 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                arr_26 [i_8] [i_8] [i_7] = (((--443461682) * var_9));
                var_27 += (max((((!(arr_24 [i_7] [i_8])))), var_9));
                var_28 = (arr_21 [i_8]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_39 [i_9] [i_9] [i_9] [i_9] &= ((var_6 - (arr_35 [i_9] [i_9] [6])));
                            arr_40 [i_9] [i_10] [i_9] [i_9] [i_13] = ((var_3 ? (arr_34 [i_9] [i_10] [i_10] [i_12 - 1] [i_10]) : var_7));
                            arr_41 [i_9] [i_9] [i_9] [0] [0] = (((((var_9 ? var_2 : -1945))) ? var_11 : (~-9309)));
                            var_29 = ((var_14 << (var_16 - 1842865701)));
                            arr_42 [i_12] [8] [i_12] [i_12] [8] = (((arr_19 [i_10] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1]) ? -19972 : (arr_19 [i_10] [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1])));
                        }
                        arr_43 [i_9] [i_10] [i_10] [0] [i_12 + 1] = (var_4 < var_1);
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        arr_47 [i_9] [i_10] = (~6589);
                        var_30 = ((-3689626390 ? var_5 : (arr_6 [i_14 - 2] [i_10] [i_11])));
                    }
                    var_31 = ((-(((~var_0) ? (var_7 | var_10) : (arr_8 [i_9] [6] [i_9])))));

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_32 = ((+((((var_0 ? (arr_4 [i_15]) : 8191)) - 55191))));
                        var_33 = 127;

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_34 -= (~var_6);
                            var_35 = ((-(arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                            var_36 = -63;
                        }
                        for (int i_17 = 2; i_17 < 8;i_17 += 1)
                        {
                            var_37 = (((-((8348 ? var_0 : 85)))));
                            arr_57 [i_9] [i_17 + 1] = (((-1713372250 ? ((-311914272 ? var_10 : var_9) : var_12))));
                            var_38 = (min(var_38, (((var_8 == ((-(arr_34 [i_15] [i_17 + 1] [i_17 + 1] [i_17] [i_17]))))))));
                        }
                    }
                    for (int i_18 = 4; i_18 < 6;i_18 += 1)
                    {
                        arr_61 [i_18 - 4] [2] [i_11] [i_10] [2] = (((((var_9 ? ((19793 ? 653011952 : -112)) : (arr_34 [i_18 - 4] [2] [i_18] [i_18] [i_18 - 3])))) ? -123 : var_5));
                        var_39 = (((((((-(arr_53 [i_10] [i_18]))) * (((var_1 ? var_4 : var_12)))))) * (max(-var_17, ((3042396512 ? (arr_55 [i_18] [i_10] [i_18] [i_18]) : var_13))))));
                        var_40 = (max((((((arr_51 [i_18] [i_18] [i_10] [i_18] [i_18 - 2] [i_9]) + 2147483647)) << (((arr_1 [i_9]) - 3642975129)))), (~var_5)));
                        var_41 = ((!((!((max(var_9, var_2)))))));
                    }
                }
            }
        }
    }
    var_42 -= var_14;
    #pragma endscop
}
