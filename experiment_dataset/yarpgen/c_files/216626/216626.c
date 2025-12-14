/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -37;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = -var_7;
                                arr_14 [i_0] [i_1 - 1] [i_2 - 2] [i_3] [i_4] = (max((max(((212 ? -4063094565044157750 : (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1]))), 92)), (arr_0 [i_2])));
                                var_16 = (max((((~1032192) & (~1))), ((max(1, -var_2)))));
                                arr_15 [i_0] [i_0] [i_4] = 21;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_17 = 65535;
                        var_18 = arr_16 [4];
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_19 = (max(var_1, 1));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [0] = (!-48);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_20 = (arr_12 [i_2 + 1] [i_7] [7] [i_7] [i_7]);
                        var_21 = 6;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_22 -= 1;

                        for (int i_9 = 4; i_9 < 11;i_9 += 1)
                        {
                            arr_35 [i_0] [1] [i_0] [i_0] [i_9] = -6955700109750737481;
                            arr_36 [i_1] [7] [i_2] [i_8] [i_9] [i_1] = 1;
                            arr_37 [i_0] [i_1 - 1] [i_2] [i_8] [i_9 - 2] = var_10;
                        }
                        var_23 = (((((arr_11 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2]) <= var_13)) ? ((-(arr_11 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2 - 1]))) : ((27 ? var_0 : var_5))));
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_24 = ((arr_31 [i_0] [i_1] [i_0] [i_1 + 1] [i_1 + 2]) + -9223372036854775803);
                    arr_40 [i_0] [i_1] [i_10 - 1] = 0;
                }
                for (int i_11 = 3; i_11 < 12;i_11 += 1)
                {
                    arr_45 [i_11] [1] [i_0] [i_0] = (max(1, ((-(arr_24 [i_1] [i_1] [i_11 - 2] [3] [i_11 - 3] [1])))));
                    var_25 -= ((~(81 <= 1125891316908032)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    arr_48 [i_0] [i_0] [i_12] = (arr_30 [12] [i_1] [i_1] [i_1] [i_12 + 1]);
                    arr_49 [i_0] [i_0] [i_0] = ((var_9 + (arr_30 [i_0] [i_0] [i_1] [i_1] [i_0])));
                    arr_50 [i_12 + 1] [i_0] = ((((((arr_20 [i_1] [i_1 + 2] [7] [i_0]) ? var_12 : (arr_30 [i_0] [i_0] [i_0] [i_0] [9])))) ? 83 : (((var_10 > (arr_28 [i_12] [i_12] [i_12]))))));
                }

                /* vectorizable */
                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_26 = (21719 ^ 70);
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((arr_13 [i_0] [i_1] [i_1 + 1] [4] [i_14] [i_15] [i_15]) ? ((-7737487030841955201 ? 0 : 59966)) : 25)))));
                                var_28 = (max(var_28, ((((((-(arr_4 [i_0] [2])))) >= ((var_2 ^ (arr_27 [i_15] [i_14] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                {
                    arr_63 [i_0] [i_16] = (max((arr_38 [i_0] [i_1 + 2] [i_0] [1]), ((~(arr_54 [i_1 - 2] [i_1 - 1] [0])))));
                    arr_64 [4] [i_1 + 2] [i_16] = var_1;
                }
                arr_65 [i_0] [i_0] = (!11823);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            {

                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    arr_74 [i_19] = arr_73 [i_17] [i_18] [i_18];
                    var_29 = (max(var_29, (13 - var_0)));
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 19;i_22 += 1)
                        {
                            {
                                var_30 = 37;
                                var_31 = (min(var_31, -9223372036854775803));
                                arr_82 [i_17] [0] [i_21] [0] = ((1 * (arr_78 [i_22] [i_22 + 1] [i_22 - 1] [i_22])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        {
                            arr_89 [i_18] [i_18] [i_18] [19] = var_5;
                            var_32 = (((arr_76 [i_17] [i_17] [i_17] [i_17]) - (arr_80 [i_18] [i_17] [i_18] [i_17] [i_17])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
