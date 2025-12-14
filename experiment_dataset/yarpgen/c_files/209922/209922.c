/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max(var_11, var_1));
        var_12 ^= (arr_0 [i_0] [8]);
        arr_2 [i_0] = 42610011;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = var_5;

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, var_6));
                        arr_14 [i_1] [i_3] [10] [i_4] = ((~(((arr_10 [i_1] [i_3] [i_4]) ? (arr_3 [i_2]) : (arr_10 [i_1] [i_3] [i_3])))));
                    }
                }
            }
            var_15 |= (arr_12 [i_1]);

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_16 = (min(var_16, (arr_10 [i_1] [6] [i_1])));
                var_17 &= ((var_8 ? 1099511627776 : (((arr_6 [i_2]) - 3674781633457319798))));
            }
            var_18 = (((((8344 - ((0 ? 0 : var_0))))) ? 53896 : ((-(~var_0)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_6] [8] = ((~(~1552851395990101689)));
            arr_20 [i_1] [i_6] [i_1] = ((((((-var_4 + 2147483647) >> ((((~(arr_13 [i_1] [i_1] [9] [i_1]))) + 89))))) ? ((((arr_5 [i_1] [i_1]) ? 3 : var_6))) : (min(var_7, var_9))));
            arr_21 [i_1] = ((~(((arr_17 [3] [i_6] [i_6]) ^ (arr_15 [i_1] [i_1] [i_1] [i_1])))));
            var_19 = (((((arr_16 [i_1] [i_6]) / var_8)) < (((max((arr_16 [i_1] [i_6]), (arr_16 [i_1] [i_1])))))));
        }
        var_20 = (((max((arr_10 [i_1] [6] [i_1]), (arr_1 [i_1])))) ? var_5 : var_3);
        arr_22 [8] = (arr_11 [10] [i_1] [10]);
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_21 = (((!(arr_10 [i_7 - 3] [i_8] [i_7]))));
                    var_22 = (max(((3141761641264514071 ? (max(var_1, var_9)) : (((var_9 ? 2 : -4))))), ((((arr_18 [i_7]) ^ 35470)))));

                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_23 -= ((arr_16 [i_7 + 1] [i_8 + 3]) ? ((2 ? 252 : (44 && 30065))) : (arr_18 [i_8]));
                        arr_34 [i_7] [i_8] [i_10] = var_2;
                        arr_35 [i_8] [i_9] = (arr_7 [i_10 + 1]);
                        var_24 = (((min((arr_24 [i_8 + 2] [i_10 - 1]), var_8))) ? (arr_5 [1] [4]) : (((!(arr_25 [i_7 - 3])))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_25 |= ((((((arr_1 [i_7]) ? (arr_24 [i_8 + 3] [8]) : var_8))) ? (arr_36 [1] [i_8]) : var_3));
                    arr_39 [i_8] [i_8 + 3] [i_8] = ((var_1 ? var_1 : 30054));
                    var_26 = (var_1 >= var_8);
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 13;i_14 += 1)
                            {
                                var_27 = (arr_7 [i_12 - 3]);
                                var_28 = var_4;
                                arr_47 [i_7 + 1] [i_8] [i_8] [i_8] [i_7] = var_3;
                                var_29 = (!125);
                            }
                            for (int i_15 = 0; i_15 < 13;i_15 += 1)
                            {
                                var_30 = ((((((min(0, 175))) ? var_2 : var_4)) & ((((min(var_7, 30054))) | -55))));
                                arr_52 [i_7] [i_8] = 0;
                                var_31 = (min((arr_27 [3] [i_8]), (arr_26 [i_7])));
                                arr_53 [0] [i_8] [0] [i_13] [i_8] = (((((((min(var_8, var_2))) ? var_5 : (!var_3)))) ? (((var_7 == (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((((-127 - 1) + 180)) - 52))))))) : (((arr_50 [i_7 - 2] [i_8] [i_12 + 1] [i_13] [i_8]) ? (arr_24 [i_7 - 3] [0]) : var_1))));
                            }

                            for (int i_16 = 0; i_16 < 13;i_16 += 1)
                            {
                                arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] = (max(((min(30065, 1)), var_9)));
                                var_32 -= ((var_7 ? (arr_43 [i_7] [1] [i_8] [9] [6] [1]) : (max(-35470, (arr_6 [i_7 + 2])))));
                                var_33 = ((((((arr_16 [i_8 - 2] [i_12 - 1]) ? (arr_16 [i_8 - 2] [i_12 - 1]) : var_9))) ? (((arr_12 [i_8 - 3]) << (arr_28 [i_16]))) : (arr_18 [i_7])));
                                var_34 = arr_25 [i_12 - 3];
                            }
                        }
                    }
                }
                var_35 = (-127 - 1);
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_36 |= ((((((arr_10 [i_7] [6] [i_17]) | (arr_59 [0] [i_8] [i_8 + 1] [1])))) ? var_6 : (arr_16 [i_18] [i_18])));
                                arr_67 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_8] = ((-(arr_11 [i_18] [11] [i_18 + 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
