/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((21888 ? var_7 : var_2))));
    var_12 = var_10;
    var_13 = ((-var_9 ? ((((max(var_8, var_9))) ? (((min(var_6, 1)))) : (max(-3606, var_0)))) : var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_4 ? var_1 : var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, -2122250824));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [2] = ((var_6 ? var_9 : var_10));
                            var_15 = (min(var_15, (((var_4 ? 3599 : (arr_9 [i_0 - 1] [i_4 + 2] [i_4 + 2] [i_1]))))));
                            arr_13 [i_0] [i_3] [i_2] [i_0] = (((arr_7 [i_4 + 2] [i_3] [i_2 + 2]) ? (arr_7 [i_4 + 2] [i_3] [i_2 - 2]) : (arr_7 [i_4 + 1] [i_4] [i_2 + 1])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_0 - 1] [i_1] [i_1] [i_3] [i_0] = (arr_10 [i_2] [i_2] [i_2] [5] [i_2] [i_2]);
                            arr_19 [i_0] [i_1] [i_2 + 2] [i_5] = (!var_8);
                            var_16 = var_1;
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_22 [i_0] = (~1);

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_26 [i_0] [i_6] [11] [i_6] = 1;
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_10));
                            arr_31 [i_9] [i_8] [i_0] [i_6] [i_0 - 1] = (arr_1 [i_0 - 1]);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((arr_11 [i_8] [i_8 - 3] [i_8 - 3] [i_8 + 4] [i_8 - 3] [i_8] [i_8 + 3]) ? var_7 : (arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8 + 3] [i_8 + 3])));
                            arr_33 [i_0] [i_6] [i_7] [i_0] = (var_2 | 1);
                            arr_34 [i_0] [i_6] [5] [i_8] [i_0] [i_0] = (137 + var_9);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_39 [24] [i_0] [i_0] [8] = var_3;
                arr_40 [i_0] [i_0] [15] = -var_0;
                arr_41 [i_0 - 1] [i_6] [i_0] = var_8;
            }
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                var_18 = (min(var_18, var_10));
                var_19 = (var_1 <= (((arr_16 [i_0] [i_6] [i_0] [i_11 + 2] [i_0]) - var_9)));
            }
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                var_20 -= var_4;
                var_21 -= ((var_5 ? (arr_23 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 - 3]) : var_7));
                var_22 = var_4;
                var_23 &= (var_5 > var_5);
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    var_24 = ((!(((arr_50 [i_0 - 1] [17] [i_14]) || 1))));
                    var_25 = (max(var_25, 60329));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 24;i_16 += 1)
                        {
                            {
                                arr_59 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [1] [i_0 - 1] = (!var_6);
                                arr_60 [i_13] [i_0] [20] [i_13] [i_13] [i_13] [i_13] = var_7;
                                var_26 = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_27 = ((var_8 ? var_5 : var_8));
                                var_28 = var_10;
                            }
                        }
                    }
                }
            }
        }
        arr_67 [i_0] = (arr_16 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]);
    }
    for (int i_19 = 1; i_19 < 1;i_19 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 24;i_22 += 1)
                {
                    {
                        var_29 -= ((min((arr_16 [i_19] [i_19 - 1] [i_19 - 1] [i_22 - 1] [i_20]), (~var_4))));
                        arr_78 [i_19] [i_19] = (((((~(7386259207827544576 && 1)))) & (((arr_70 [i_19] [i_19 - 1]) ? var_4 : (max((arr_24 [i_20] [i_21] [i_19]), var_2))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 25;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 22;i_24 += 1)
            {
                {

                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        var_30 = (min((min(((max(-2081689911, var_4))), var_5)), var_0));

                        for (int i_26 = 1; i_26 < 23;i_26 += 1)
                        {
                            var_31 = (min(var_31, ((((min(17, (var_6 | var_2)))) != var_5))));
                            var_32 = (max((((var_8 ? var_9 : (max(var_0, var_7))))), ((((min(var_10, var_10))) ? 70231305224192 : (((2 ? var_9 : var_4)))))));
                            var_33 = (min(var_33, (((1 ? var_4 : var_1)))));
                            arr_88 [i_19 - 1] [i_19] [i_19 - 1] [1] [i_19 - 1] = (max(var_10, var_4));
                        }
                        arr_89 [i_19] [i_19] [i_19 - 1] [i_19] [i_19 - 1] = min(((var_4 ? 1329889348 : (arr_11 [i_19] [15] [i_19 - 1] [6] [i_19 - 1] [i_24 - 1] [15]))), (max(var_8, (13 && var_8))));
                        var_34 = (max(((((arr_81 [i_19 - 1] [i_19 - 1] [i_19 - 1]) ? (((max(var_9, (arr_50 [i_19] [i_19] [i_24 + 2]))))) : ((11060484865882007045 ? var_7 : (arr_20 [i_19] [i_23] [i_25])))))), (max((arr_74 [i_19 - 1] [i_19 - 1] [i_25]), var_3))));
                        arr_90 [i_19] = (max((var_7 > var_7), 1956837374490853864));
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 2; i_27 < 24;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 25;i_28 += 1)
                        {
                            {
                                var_35 = (max(var_35, 244));
                                var_36 = 1;
                                var_37 = var_10;
                            }
                        }
                    }
                }
            }
        }

        for (int i_29 = 3; i_29 < 23;i_29 += 1)
        {
            arr_98 [i_19] [i_29 + 2] = (min((127 * var_6), (((arr_49 [i_29 - 3] [i_19 - 1]) ? var_7 : (arr_49 [i_29 - 2] [i_19 - 1])))));
            var_38 = (min(var_38, var_10));
        }
        arr_99 [i_19] [i_19] = ((((-(arr_75 [i_19 - 1] [i_19 - 1] [i_19]))) == ((((max(var_1, var_1))) ? (arr_51 [i_19] [i_19 - 1] [i_19]) : ((max(var_2, (arr_70 [i_19] [i_19]))))))));
    }
    /* LoopNest 3 */
    for (int i_30 = 2; i_30 < 24;i_30 += 1)
    {
        for (int i_31 = 0; i_31 < 25;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 25;i_33 += 1)
                    {
                        for (int i_34 = 0; i_34 < 25;i_34 += 1)
                        {
                            {
                                arr_117 [i_34] [i_30] [i_30 - 1] = (1 < ((((var_10 / 65408) > ((var_3 ? var_0 : 15942914997709135482))))));
                                var_39 -= ((127 <= ((((max(var_4, 1))) / (arr_7 [i_30 + 1] [i_30 - 2] [4])))));
                                var_40 -= (min(var_9, (max((max(var_0, -67)), (!var_1)))));
                                var_41 = ((var_3 ? (min((var_10 * var_0), ((max(var_1, var_2))))) : var_1));
                                arr_118 [19] [i_30] [i_32] [i_31] [i_34] = (min(var_1, (max(var_1, var_6))));
                            }
                        }
                    }

                    for (int i_35 = 0; i_35 < 25;i_35 += 1)
                    {
                        var_42 = var_8;
                        arr_121 [i_30] [i_30] [i_30] [i_35] = (max((((arr_20 [i_30 + 1] [i_30 + 1] [i_30 - 1]) & (arr_20 [i_30 - 1] [i_30 - 2] [i_30 + 1]))), 1));
                        var_43 = max((max((arr_8 [14] [i_30 - 1] [i_30 - 2]), var_5)), (((var_8 ? 24576 : var_2))));
                    }
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_44 = ((-2147483632 ? (arr_91 [i_30 - 2] [14] [i_32] [i_36] [6] [i_36]) : var_6));
                        var_45 -= (min(((~(((arr_51 [1] [i_31] [4]) ? 8017868665190866635 : var_7)))), (((251834244442583695 ? (arr_119 [i_30 - 1] [i_30 - 1] [24] [i_36]) : var_0)))));
                        var_46 = 11;
                        arr_124 [13] [i_31] [i_32] [i_30] = (min((max(var_5, (((32768 ? var_7 : var_8))))), ((max(((var_10 ? var_4 : 0)), var_1)))));
                    }
                    for (int i_37 = 0; i_37 < 25;i_37 += 1) /* same iter space */
                    {
                        var_47 = (min(((max(var_5, var_10))), (var_9 > 1)));
                        arr_129 [i_30] [i_31] [i_31] [i_31] = (((arr_37 [7] [i_31] [i_31] [9]) == ((var_3 / (arr_16 [i_30] [1] [i_30 - 1] [i_30 + 1] [i_30])))));
                        arr_130 [i_30 - 2] [i_30] [i_32] [i_37] = ((((min((arr_110 [i_30] [i_30] [i_30 + 1]), (arr_110 [19] [i_30] [i_30 + 1])))) | ((-8192 ? var_8 : 485156830))));

                        for (int i_38 = 0; i_38 < 25;i_38 += 1)
                        {
                            arr_134 [i_30] [i_32] [i_32] [i_30] [i_30] = ((~(min((arr_74 [i_30] [i_30 - 1] [i_30 - 1]), (var_0 | var_4)))));
                            var_48 = (~var_0);
                        }
                        var_49 = ((~(((arr_109 [i_30 - 1] [i_30] [i_30 + 1] [13]) ? var_6 : ((min(var_4, (arr_46 [i_30] [i_31] [i_32] [i_37]))))))));
                    }
                    /* vectorizable */
                    for (int i_39 = 0; i_39 < 25;i_39 += 1) /* same iter space */
                    {
                        var_50 = var_3;
                        arr_137 [i_30] = ((65535 ? var_10 : ((-(arr_37 [i_30] [i_31] [i_32] [18])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
