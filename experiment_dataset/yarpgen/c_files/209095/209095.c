/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, var_2));
        arr_4 [i_0] = (arr_1 [i_0]);
        var_15 = -var_2;
    }
    var_16 = var_3;
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_1] = (((arr_14 [i_1] [i_2 + 2] [i_1]) <= 31));
                        var_18 = (!6);
                        var_19 = -60;
                        var_20 = (((arr_11 [i_1 + 2]) ^ (arr_11 [i_1 + 2])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 -= (-606925384 / var_9);
                        var_22 = (!-606925390);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_27 [3] [i_1] [3] [i_6] [4] = -606925364;
                                var_23 = 4;
                            }
                        }
                    }
                    var_24 = (arr_20 [i_2] [i_2 + 3] [9]);
                }
                var_25 = (((((arr_7 [i_2 + 1]) + 606925383)) ^ (((arr_7 [i_2 + 2]) + 606925400))));

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    arr_31 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = 0;
                    arr_32 [i_8] = (((((-606925361 ? 4214 : 87))) ? 14452 : var_4));
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_26 = (arr_30 [i_1] [i_1] [i_9] [i_2]);
                    arr_35 [i_1] = var_9;
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_27 -= 10959068154315355681;

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_28 = (arr_9 [i_2] [9] [i_11]);
                        var_29 = -9;
                        arr_44 [i_10] = var_2;
                        var_30 = -109;
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_31 &= ((127 ? ((-var_2 - (arr_9 [i_2 - 1] [i_1 - 1] [i_1 + 1]))) : (606925383 < 1)));
                        var_32 = (min((arr_16 [i_1 + 2] [i_1 + 2] [i_10 - 1] [i_12]), (((arr_16 [i_1] [i_10 - 1] [i_10] [i_12]) ? 1 : (arr_16 [i_1] [i_1] [i_1 + 1] [i_1 - 1])))));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            arr_49 [21] [i_2] [i_10] [i_2] [19] [i_13] [i_1] = (arr_37 [i_1 + 2]);
                            var_33 = (min(var_33, ((((-20597180 ? -2 : var_12))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_34 = (~var_9);
                            var_35 = (((var_1 + (arr_30 [i_14] [i_12] [i_10] [i_2]))) | ((-606925361 ? (-127 - 1) : -10)));
                            arr_54 [i_1] [i_1] [i_10] [i_10] [i_12] [i_14] = var_6;
                            var_36 = (-127 - 1);
                        }
                        for (int i_15 = 1; i_15 < 20;i_15 += 1)
                        {
                            var_37 = ((((max((arr_56 [i_1 + 1] [i_1] [i_1 + 1] [i_10 - 1] [i_1]), var_9))) || ((((arr_43 [i_10] [i_2 + 3] [i_1 + 2] [i_10]) ? 1 : (arr_56 [i_1] [i_1] [i_1 + 1] [i_10 - 1] [14]))))));
                            var_38 = (min(var_38, ((((((((arr_47 [i_15 + 2]) >= (arr_47 [i_1 + 1]))))) / 2847485490)))));
                            var_39 = 9;
                        }
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                    {
                        var_40 = -2;
                        arr_61 [i_1] [i_10] [i_10] [1] [i_10 - 1] [i_10] = ((((arr_23 [i_1 - 1] [i_2 + 1]) - (arr_23 [i_1 + 2] [i_2 + 2]))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            {
                                var_41 = (max(var_41, var_8));
                                arr_68 [i_10] = (max(65530, 63));
                                arr_69 [i_10] [i_2 + 1] [i_10 - 1] [i_17] [i_18] = var_4;
                                var_42 = (arr_5 [7] [i_2]);
                            }
                        }
                    }
                }
                for (int i_19 = 3; i_19 < 21;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 19;i_21 += 1)
                        {
                            {
                                var_43 = (max(var_43, (((max(var_7, (arr_51 [i_20] [i_1 + 1] [i_1 - 1] [14] [i_1 + 1])))))));
                                var_44 = (max(var_44, (((((5015878400617270734 <= (arr_41 [i_21] [i_2] [i_19] [i_19 - 3] [i_2] [i_1]))) ? (((((32 ? (arr_21 [i_1] [i_1] [i_1] [i_1]) : var_1))))) : (arr_41 [i_1 + 2] [i_2] [i_19 - 1] [14] [i_21] [i_21]))))));
                                var_45 = (min(var_45, -var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        for (int i_23 = 1; i_23 < 1;i_23 += 1)
                        {
                            {
                                var_46 = var_5;
                                var_47 = (max(var_47, (((+(max((arr_60 [i_23 - 1] [i_22] [i_22] [10] [i_2 - 1] [i_1 + 2]), 69)))))));
                                arr_83 [i_1 - 1] [i_19] [i_19] = ((((min((arr_70 [i_23 - 1]), (arr_70 [i_23 - 1])))) - -var_11));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 2; i_24 < 19;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 22;i_25 += 1)
                        {
                            {
                                var_48 = ((~(-2147483647 - 1)));
                                var_49 *= ((!(-121 >= 218)));
                                arr_89 [i_1] [i_2] [i_19] [i_24] [i_2] = (min(1, (-127 - 1)));
                            }
                        }
                    }
                    var_50 = (63 ^ 2147483624);
                }
                /* LoopNest 2 */
                for (int i_26 = 2; i_26 < 21;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            var_51 = (max((((-((-15 ? -29 : 41195))))), (min(11422309902747262229, 20260))));

                            for (int i_28 = 1; i_28 < 19;i_28 += 1) /* same iter space */
                            {
                                var_52 = 2;
                                var_53 = var_4;
                            }
                            /* vectorizable */
                            for (int i_29 = 1; i_29 < 19;i_29 += 1) /* same iter space */
                            {
                                var_54 = (!121);
                                var_55 = 180;
                                arr_99 [i_29] [i_2] [i_26] [i_27] [i_29] [i_2] [i_29] = var_6;
                                arr_100 [i_1] [i_29] [i_26] [i_27] [i_29] = (var_1 ^ -33);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
