/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((max(((var_9 ? var_7 : var_4)), (((arr_3 [i_0]) ? (arr_2 [i_0]) : var_3))))) ? (((min(var_3, var_11)))) : ((-(arr_4 [i_0] [i_1])))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_16 = (1 << 0);
                    var_17 = (max(var_17, ((min((~var_0), (((var_4 + 1) ? (var_11 * var_6) : ((1 ? 1 : 1)))))))));
                    arr_7 [i_2] [i_2] [i_0] = 1;
                    var_18 = min(1, 1);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_10 [i_0] = arr_0 [i_0] [i_1];
                    var_19 -= arr_5 [i_0] [1] [i_0 + 1];
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_5] = (max(((((arr_4 [i_0] [i_0 + 1]) <= 1))), (min(((var_9 ? 1 : 1)), (((arr_14 [i_0] [i_1]) ^ (arr_9 [i_1])))))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_6] [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = var_0;
                            var_20 &= (min((((min(var_13, var_0)) ? (arr_3 [i_0]) : var_3)), (((max(1, var_12)) ? (1 || 1) : ((min(1, var_12)))))));
                            arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (((((-((1 ? 1 : 1))))) ? ((1 ? ((max(1, 1))) : (((arr_9 [i_6]) + var_9)))) : (((1 ^ 1) ? var_12 : var_14))));
                            arr_21 [i_5] [i_0] = ((((min(1, (1 <= var_4)))) ^ ((0 ? (((arr_17 [i_0] [i_5] [1]) >> var_3)) : var_0))));
                            arr_22 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = 0;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_0] [i_7] = (var_12 || var_2);
                            var_21 = var_3;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_0] [1] [i_8] = ((1 - ((1 ? var_2 : -0))));
                            arr_30 [i_0] [i_4] [i_0] [i_0] [1] = (((min(var_6, (arr_28 [i_0] [1] [i_0] [1] [i_0 + 1])))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_5] = (((min((arr_12 [i_0] [i_0] [i_0]), var_3))) != ((0 ? var_7 : var_7)));
                            var_22 = 1;
                            var_23 = (((arr_6 [1] [i_4] [1]) ? (((((1 ? 1 : (arr_8 [i_0] [i_5] [i_5])))) ? (arr_24 [i_0] [i_0] [i_4] [i_5] [1]) : ((min(var_14, 1))))) : (max(var_13, (((arr_4 [i_0] [i_1]) << 1))))));
                            var_24 = (min((((~var_12) ? ((0 ? (arr_0 [1] [i_1]) : var_12)) : ((min(var_5, (arr_1 [1])))))), var_12));
                        }

                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_25 = (min((max((arr_16 [i_0] [i_0] [1] [1] [1]), ((1 ? (arr_27 [i_0] [i_4] [i_5] [i_10]) : var_6)))), (((arr_35 [i_0 + 1] [1] [i_4] [i_10 + 1] [i_0]) - 1))));
                            arr_36 [i_1] [i_1] [i_0] [i_0] [i_5] = 0;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_26 = (~1);
                            var_27 = arr_1 [i_1];
                            var_28 -= 0;
                            var_29 = 1;
                            var_30 = var_8;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_31 = ((0 ? 1 : 1));
                            arr_41 [i_0] [i_1] [i_0] [i_0] [i_12] = 1;
                            arr_42 [i_0] [i_0] [i_0] = (min((1 * var_12), (arr_17 [i_0] [i_0 + 1] [i_0 + 1])));
                        }
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_32 = ((arr_16 [i_13] [i_0] [i_4] [i_0] [i_0]) && ((min((((arr_3 [i_0]) ? (arr_27 [i_0] [i_0] [i_4] [i_13]) : 1)), ((max(var_4, var_6)))))));
                        arr_46 [i_0] [i_0] [i_4] [1] = (max(((((var_11 ? (arr_34 [i_0] [1] [i_4] [i_13]) : (arr_6 [i_0] [i_0] [i_13]))) << (((1 == (arr_12 [i_0] [i_0] [i_13])))))), (((var_1 == (arr_1 [i_0 + 1]))))));
                        var_33 += ((1 ? 0 : 1));
                        arr_47 [1] [1] [i_4] &= 0;
                    }
                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_34 = ((1 ? (((((arr_8 [i_0] [1] [i_0]) ? 1 : 1)) << (((~1) + 11)))) : (((min(0, var_14)) ? ((min((arr_8 [i_0] [i_1] [i_4]), var_6))) : (((arr_48 [i_0] [1] [1] [1]) + var_6))))));
                        var_35 = (max(var_35, (min(1, (!1)))));
                        arr_50 [1] [i_1] [i_0] = 1;
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_36 = (~var_3);
                            arr_57 [i_0] [i_1] = 1;
                            arr_58 [1] [1] [i_0] [i_15] [i_16] = ((-((min(1, (min(0, var_1)))))));
                        }
                        arr_59 [i_0] [i_15 - 1] = ((var_14 ? (arr_3 [i_4]) : var_5));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_64 [i_0] [i_1] = arr_63 [i_0] [i_0] [i_0] [i_0] [i_0];
                        arr_65 [i_0] [i_0] [i_0] [i_17] = ((((((1 ? 1 : 1)))) ? ((((var_3 || (arr_18 [i_0] [i_0] [1] [1] [1]))))) : ((max(0, 1)))));
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    var_37 = (((((~var_10) + 2147483647)) << ((((min(var_2, 1))) - 1))));
                    var_38 = (min((((~var_5) ? 1 : ((min(1, (arr_3 [i_18])))))), (1 * var_11)));

                    for (int i_19 = 0; i_19 < 0;i_19 += 1)
                    {
                        var_39 = (max(var_39, (((var_9 << (((1 * 0) ? (1 > 0) : 0)))))));
                        arr_70 [i_0] [i_1] [i_0] [i_19 + 1] = var_4;
                        var_40 = (max(var_40, (arr_69 [i_0] [i_0] [i_0] [1])));
                        var_41 = (min((((arr_23 [1] [i_0 + 1] [i_0] [1] [1]) + var_4)), ((min((arr_35 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), var_10)))));
                    }
                    for (int i_20 = 0; i_20 < 0;i_20 += 1)
                    {
                        var_42 |= (max(((~(arr_62 [i_0 + 1] [1] [i_0 + 1] [i_0] [i_0 + 1]))), (((arr_62 [i_0 + 1] [0] [i_0 + 1] [i_0] [i_0 + 1]) ? var_0 : (arr_62 [i_0 + 1] [1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                        var_43 ^= 1;
                        var_44 = (min(var_44, (arr_8 [1] [1] [i_18])));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_45 = (min((((arr_13 [i_0 + 1] [1] [i_0] [i_22]) ? 1 : (arr_8 [i_0] [i_18] [i_0]))), var_3));
                                arr_77 [i_0] [i_0] [i_0] [i_0] [i_22] [i_22] [i_0] = (min(1, (max(((var_11 * (arr_71 [i_0] [i_1] [i_18] [i_0] [i_18]))), ((var_10 ? (arr_0 [i_18] [i_18]) : 1))))));
                            }
                        }
                    }
                }
                for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                {

                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        var_46 = arr_8 [i_0] [i_0] [i_0];

                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            arr_86 [i_0] = arr_63 [i_0 + 1] [i_1] [i_23] [i_1] [i_25];
                            var_47 = (max(var_47, (((var_9 ? var_0 : 1)))));
                        }
                        /* vectorizable */
                        for (int i_26 = 1; i_26 < 1;i_26 += 1) /* same iter space */
                        {
                            var_48 &= 1;
                            var_49 = (~1);
                        }
                        for (int i_27 = 1; i_27 < 1;i_27 += 1) /* same iter space */
                        {
                            var_50 -= (1 - 1);
                            var_51 = ((-((min((arr_90 [i_27 - 1] [i_1] [1] [i_24] [i_27]), (arr_90 [i_27 - 1] [i_1] [i_27 - 1] [i_27 - 1] [i_27]))))));
                            var_52 = arr_83 [i_0] [i_1] [i_1];
                        }
                        for (int i_28 = 1; i_28 < 1;i_28 += 1) /* same iter space */
                        {
                            arr_93 [1] [i_1] [i_0] [i_1] = (((((~(arr_82 [i_0] [i_0 + 1] [i_23] [i_28 - 1] [i_28] [i_28])))) ? (arr_82 [i_0] [i_0 + 1] [i_28] [i_28 - 1] [i_0 + 1] [1]) : ((0 ? var_9 : (arr_82 [i_0] [i_0 + 1] [i_0] [i_28 - 1] [i_0] [i_28])))));
                            var_53 |= (1 < 1);
                            var_54 = (~1);
                        }
                    }
                    /* vectorizable */
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        var_55 = (!(arr_0 [i_0 + 1] [i_0 + 1]));
                        var_56 = ((~(~var_14)));
                    }
                    arr_97 [i_0] [1] |= ((1 % ((~((~(arr_6 [1] [i_1] [i_0])))))));
                    arr_98 [i_0 + 1] [0] [i_0 + 1] [i_0] = var_9;
                    arr_99 [1] [i_0] [1] = (min(var_2, (((max(var_4, var_8)) ? -0 : (arr_79 [i_0] [i_0 + 1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 1;i_31 += 1)
                        {
                            {
                                var_57 = (min(var_57, (((var_11 ? (min(((min(var_4, 1))), ((var_14 ? var_14 : 0)))) : var_3)))));
                                var_58 = arr_72 [i_0 + 1] [i_30] [i_31];
                            }
                        }
                    }
                }
            }
        }
    }
    var_59 = var_5;
    var_60 = var_6;
    var_61 ^= var_0;
    #pragma endscop
}
