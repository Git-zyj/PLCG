/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 ^= ((var_0 - (max(var_0, ((0 ? var_3 : var_13))))));
    var_16 = (max((((max(var_6, 1)) ? -1 : ((max(var_3, 127))))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 ^= (max(((max((arr_6 [i_3]), (arr_7 [i_0] [i_2] [18])))), (max(((0 ? (arr_2 [i_2]) : (arr_3 [i_1] [i_1 - 1] [i_1 - 1]))), ((max((arr_0 [i_0]), var_2)))))));
                            var_18 = (((((arr_4 [i_1] [i_1 + 1]) && (arr_4 [i_1] [i_1 + 1]))) ? (((var_0 < var_13) * ((((arr_1 [i_0]) != var_4))))) : ((-16 ? var_1 : 1))));
                            var_19 |= (((arr_4 [i_3] [i_1 - 1]) * var_0));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 = arr_7 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6] = (((!var_7) * (127 / 72)));
                                var_21 = (max(var_21, ((((arr_10 [i_5]) ? var_1 : (arr_4 [i_5] [i_5]))))));
                            }
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    var_22 = (min(var_22, ((max((95 + 105), (max(((-(arr_7 [i_0] [i_7] [i_7]))), ((max(var_4, (arr_20 [i_0] [i_1 - 1] [i_7 - 2])))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_23 ^= var_11;
                                arr_29 [i_1] [i_8] [i_7] [i_0] [i_1] = var_4;
                            }
                        }
                    }
                    arr_30 [i_0] [i_0] [i_1] = (((arr_26 [i_1] [8] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? ((((max(var_10, var_3))) ? ((max(var_5, (arr_27 [i_0])))) : (((arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [14]) ? (arr_24 [i_1]) : var_7)))) : var_13));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_24 ^= (((arr_12 [i_1 - 1] [i_7] [i_1 - 1] [i_11 + 1]) <= (var_3 + 77)));
                                arr_38 [i_0] [i_1] = (max(220, ((((255 + var_11) && ((((arr_9 [i_7] [i_7]) | var_5))))))));
                            }
                        }
                    }
                }
                for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [12] [i_1] = (arr_0 [i_1]);

                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_25 = (max(var_25, ((((arr_13 [i_13] [i_1] [i_13] [i_13] [i_13] [i_1 + 1]) * (!var_7))))));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_48 [i_13] [i_13] [i_14] |= (arr_0 [21]);
                            arr_49 [i_0] [i_1] [i_12 - 3] [i_1] [i_0] = (((arr_23 [i_1] [i_12 - 2]) ? (arr_23 [i_1] [i_12 - 2]) : (arr_35 [i_12 + 1] [i_12 + 1] [i_12 + 2])));
                            var_26 = ((-(((arr_25 [i_1] [i_13] [14]) - (arr_8 [i_0] [0] [i_0] [i_0] [i_1])))));
                            var_27 = (min(var_27, (arr_21 [i_0] [i_13] [i_12 + 3])));
                        }
                    }
                }
                for (int i_15 = 3; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_28 = (max((arr_0 [i_15 + 1]), (((arr_45 [i_0] [i_0] [22] [i_0]) + (((arr_7 [i_0] [i_1] [i_0]) ? (arr_26 [i_0] [i_0] [5] [i_15] [i_15]) : 166))))));

                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_55 [i_1] [i_1 + 1] [i_15] [i_15] = ((((arr_3 [i_1 - 1] [i_15 + 1] [i_15 - 3]) ? (arr_3 [i_1 + 1] [i_15 - 2] [i_15 - 1]) : (arr_23 [i_1] [i_15 + 3]))));
                        var_29 = ((var_13 ? ((var_11 ? (arr_5 [i_1 - 1] [i_1]) : (arr_5 [i_1 + 1] [i_1]))) : (arr_45 [i_1 - 1] [i_1 - 1] [i_15 + 1] [i_15 - 2])));
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_30 = ((-(((arr_33 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_33 [i_1] [i_1 - 1] [i_1 + 1] [0]) : (arr_44 [i_1] [i_1 - 1])))));

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            var_31 |= (arr_56 [i_0] [i_1 - 1] [i_1] [i_15 + 2] [i_15]);
                            var_32 = (((arr_53 [i_1 - 1] [i_15 - 3] [2] [13] [i_15] [i_17]) ? (arr_10 [i_1]) : (arr_4 [i_1] [i_1])));
                            var_33 ^= (arr_26 [i_15 - 3] [i_17] [i_15 - 3] [4] [i_0]);
                        }
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            var_34 ^= (arr_31 [i_19] [i_15 - 3] [i_1] [i_15] [i_1 + 1] [i_1]);
                            var_35 = (max(var_35, (((((max((arr_51 [i_17]), (arr_51 [i_17])))) ? ((max(var_5, var_11))) : (var_10 - var_4))))));
                            var_36 = (max(((max(255, -72))), (((((arr_46 [i_0] [i_1 + 1] [i_15 + 1] [i_1 + 1] [i_0]) ? (arr_45 [i_0] [8] [i_0] [i_0]) : var_6)) & var_5))));
                        }
                        var_37 = (!var_0);
                        var_38 = (max(var_38, (68 | var_7)));
                        arr_65 [i_1] [i_15] [i_17] = max((max(191, var_1)), (arr_33 [i_0] [i_0] [i_0] [i_17]));
                    }
                    for (int i_20 = 3; i_20 < 20;i_20 += 1)
                    {
                        arr_68 [i_1] [i_1] [i_0] [i_20] = (!var_6);
                        var_39 = (max((arr_32 [i_0]), (((arr_58 [i_1] [i_15] [i_15 + 2] [i_15 - 3] [i_20 - 1] [i_20]) ? (arr_58 [i_1] [i_0] [i_1] [i_15 - 3] [i_20 + 1] [i_20 + 1]) : -45))));
                        var_40 = (min(var_40, ((((!var_10) ? var_7 : (arr_52 [i_15 - 1] [i_15 - 1] [i_1 - 1] [i_0]))))));
                    }
                    for (int i_21 = 3; i_21 < 19;i_21 += 1)
                    {
                        var_41 = (arr_34 [i_1 - 1] [i_21 + 4]);
                        var_42 = (((max(-123, (arr_28 [i_21 - 3] [i_1] [i_15] [i_21])))) - (max(-var_7, ((max(145, 36))))));
                        var_43 |= ((((max((~var_2), ((max((arr_43 [0]), var_1)))))) ? (65535 < 194) : var_2));
                    }
                }
            }
        }
    }
    var_44 ^= (var_1 / var_13);
    #pragma endscop
}
