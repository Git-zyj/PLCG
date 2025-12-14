/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(var_10, ((var_11 ? var_10 : var_9)))) == (var_2 / var_1)));
    var_13 = ((var_7 << (var_9 - 2597700131)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 ^= ((~(arr_1 [i_0 - 2])));
        var_15 = (max(var_15, var_2));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (((arr_8 [i_1]) & (arr_0 [7] [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = ((var_1 ? (arr_6 [i_1] [i_4 - 1] [i_3]) : var_10));
                        var_18 = ((~(arr_6 [i_3 + 1] [i_4] [i_3])));
                        var_19 = (((var_5 - (arr_10 [i_1] [4] [13]))) + var_7);

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_20 = arr_5 [i_3 + 2];
                            var_21 = -var_5;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_22 = var_3;
                            arr_17 [i_3] [i_2] [i_3 + 2] [6] [i_6] = ((arr_13 [i_2] [i_4 - 2] [i_3] [7] [i_6] [i_3 - 1] [i_3 + 2]) ? var_0 : (arr_15 [i_4 - 1] [i_4 - 1] [i_3 + 2]));
                            var_23 = var_7;
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_20 [i_1] &= (((((max((arr_8 [i_1]), var_7)))) ? var_10 : ((max(var_6, (arr_15 [i_7 + 2] [i_7 + 2] [i_7 - 1]))))));

            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                var_24 = var_10;
                var_25 = (arr_8 [i_8 - 1]);
            }
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_26 = arr_8 [i_1];
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_27 = var_11;

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_28 = var_5;
                            arr_33 [9] [i_10] [i_9] [i_1] = var_6;
                            arr_34 [6] [i_12] [i_12] [i_11] [i_10] [i_9 + 3] [i_1] = ((!((max((arr_12 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]), (arr_12 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 2]))))));
                            var_29 = (var_1 | var_5);
                        }
                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_30 = (!var_9);
                            var_31 = ((~((((arr_29 [i_9 - 1] [i_9 + 3]) || var_2)))));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_32 = (max(var_9, var_10));
                            var_33 = ((((((arr_25 [i_1]) << ((((arr_21 [i_14] [i_11] [i_10]) || (arr_1 [i_14]))))))) && (~-var_9)));
                            arr_40 [10] [7] [i_10] [i_10] [i_10] = ((~((var_2 >> (((arr_27 [i_1] [i_9] [i_9 + 2]) - 52421))))));
                        }
                    }
                }
            }

            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                var_34 = (min(var_2, var_8));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_35 = ((((((arr_38 [i_17 + 2] [5] [i_15] [i_9 + 1] [i_17]) | (arr_38 [i_17 + 2] [i_9 - 1] [i_15] [i_9 + 1] [i_17])))) ? ((var_3 + (arr_4 [i_17 + 1]))) : (!var_11)));
                            arr_48 [i_16 + 1] [i_17] = var_0;
                        }
                    }
                }
            }
            var_36 = (arr_35 [i_9 - 1] [i_9 + 3]);
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            arr_53 [i_18] = (max((min(var_9, (arr_26 [0] [i_18] [i_18] [i_1])), var_9)));

            for (int i_19 = 3; i_19 < 12;i_19 += 1)
            {
                var_37 = var_7;
                /* LoopNest 2 */
                for (int i_20 = 4; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            var_38 = var_4;
                            var_39 = ((~(((!(arr_13 [i_21] [i_20] [i_20 - 4] [i_19 - 2] [i_19 - 3] [i_18] [i_18]))))));
                        }
                    }
                }
                var_40 = var_11;
            }
        }
        var_41 -= (((var_4 + (arr_50 [i_1]))));
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 12;i_23 += 1)
            {
                {
                    var_42 = ((-((max((arr_13 [i_1] [i_22] [i_22] [i_22 + 1] [i_22] [i_22 + 3] [i_23]), (arr_13 [i_22 - 1] [i_22 + 1] [0] [i_22 - 1] [i_23] [13] [1]))))));
                    var_43 = var_4;
                    var_44 *= (!var_9);
                }
            }
        }
        var_45 = var_9;

        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            var_46 = ((((max(var_2, var_6))) ? (max(var_0, var_4)) : (arr_44 [i_1])));
            var_47 = ((((~(arr_2 [i_24]))) > (arr_59 [i_1] [i_1] [i_24] [i_24])));
        }
        for (int i_25 = 0; i_25 < 14;i_25 += 1)
        {
            arr_74 [i_1] = (((min((!var_1), ((var_8 ? var_3 : var_2)))) <= (var_9 - var_0)));

            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                arr_78 [i_26] [8] [i_26] = (~((~(arr_32 [i_26] [10] [9] [6] [i_1]))));
                var_48 = ((-((var_9 ? (arr_47 [13] [i_26] [i_26] [i_25] [i_1] [i_1]) : (arr_7 [i_25])))));
            }
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 14;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 14;i_28 += 1)
                {
                    {
                        var_49 = (arr_2 [i_28]);
                        var_50 = ((((((-(arr_42 [i_28] [i_27] [i_25]))) + 2147483647)) >> (!var_1)));
                    }
                }
            }
            var_51 = var_11;
        }
        for (int i_29 = 2; i_29 < 13;i_29 += 1)
        {
            var_52 = (~(max(((-(arr_83 [i_29 - 2] [i_29 - 1] [i_1] [i_1] [i_1] [i_1]))), (arr_16 [i_1] [i_1] [i_1] [0] [i_29 + 1]))));
            arr_88 [i_1] = var_4;
            var_53 = (((((!(arr_7 [i_1])))) << (var_1 + 32598)));
            arr_89 [6] [1] = arr_51 [i_1];
        }
        for (int i_30 = 0; i_30 < 14;i_30 += 1)
        {
            var_54 = (!var_1);
            var_55 = (((arr_8 [i_1]) ? (arr_8 [i_1]) : (((arr_8 [i_1]) - (arr_8 [i_1])))));
        }
    }
    for (int i_31 = 0; i_31 < 23;i_31 += 1)
    {
        var_56 = -var_10;
        var_57 = (min((((~var_0) | (var_1 % var_6))), (~var_10)));

        for (int i_32 = 0; i_32 < 23;i_32 += 1)
        {
            var_58 -= (max((arr_95 [i_31] [i_32]), var_0));
            var_59 = (!var_7);
            var_60 = var_7;
        }
    }
    var_61 = var_9;
    #pragma endscop
}
