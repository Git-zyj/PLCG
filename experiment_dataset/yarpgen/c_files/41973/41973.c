/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [6] [i_1 - 1] &= arr_1 [5];

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_11 [i_2 + 3] [6] &= var_7;

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_10 = ((~(((arr_4 [i_3] [i_0] [i_0]) & (arr_4 [0] [i_0] [i_2 + 1])))));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_11 = (arr_15 [i_0] [i_0] [2] [i_3] [i_3]);
                            var_12 = var_3;
                            arr_17 [6] [1] [i_2 + 2] [1] [i_0] = ((((((arr_14 [i_0]) ? 7 : (arr_14 [i_0])))) ? ((((arr_14 [i_0]) ? var_0 : (arr_14 [i_0])))) : 11151936051603930274));
                        }
                    }
                    var_13 = (min(var_13, ((max(-127, 110)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [3] [i_2] [i_2] [i_0] [i_2] = ((((max((arr_19 [i_0] [1]), ((var_5 ? (arr_15 [i_6] [i_5 - 1] [i_2] [i_1] [6]) : (arr_3 [i_0] [i_1 + 2] [i_1 - 1])))))) ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) : (min((arr_20 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_0]), (arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_6 - 2] [i_6])))));
                                var_14 = (((((var_6 ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))) : ((min((arr_5 [i_0]), (arr_5 [i_0]))))));
                            }
                        }
                    }

                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        var_15 = (~var_0);
                        arr_28 [i_0] [i_1] [i_1] [6] [i_1] [i_0] = -var_6;
                        arr_29 [i_0] [i_1] [i_2] [8] [8] [i_2] = (max((max((arr_2 [i_0]), (max(var_9, 1)))), (((!(arr_26 [i_1 + 1] [2] [1] [i_7 - 3]))))));

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_16 = (~0);
                            var_17 = (arr_10 [i_0] [i_7] [i_0] [i_0]);
                        }
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_7 - 1] [i_9] = 0;
                            var_18 = (min(var_18, (((~((~(arr_22 [i_1 - 1] [1] [i_9 - 2]))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_19 = ((var_0 / (arr_18 [i_0] [6] [6] [i_10])));
                        arr_38 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10] [i_0] = var_1;
                        var_20 ^= 0;
                        var_21 &= ((var_8 ? (arr_30 [i_0] [i_1]) : (arr_14 [8])));
                    }
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {
                    var_22 = (max(var_22, ((((((arr_41 [i_11 - 2] [1] [7]) ? (arr_12 [i_11] [i_1] [i_1] [10]) : var_7)) > (arr_21 [i_0] [i_0] [1] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_49 [i_0] [i_1] [i_11 + 1] [i_1] [i_0] = 1;
                                arr_50 [i_0] [i_0] [i_0] [i_12 - 1] [i_13 - 1] [i_0] [i_12] = (arr_45 [i_12] [i_12] [i_1]);
                            }
                        }
                    }
                    arr_51 [i_11] [i_0] [i_0] [i_0] = ((var_5 ? (arr_40 [i_0] [i_0]) : 152));
                }
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_23 = var_7;
                                var_24 *= ((1 ? 1 : 141));
                            }
                        }
                    }

                    for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
                    {
                        var_25 ^= (((arr_3 [6] [1] [6]) ? (((arr_26 [i_1 + 2] [i_14 - 3] [10] [i_17]) ? var_2 : (arr_26 [i_1 + 1] [i_14 - 3] [i_17] [i_17]))) : ((((min(-17366, 1)))))));
                        var_26 = ((!(((arr_32 [i_1 - 1] [i_0]) == (arr_32 [i_1 - 1] [i_0])))));
                    }
                    for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
                    {
                        arr_66 [i_0] [1] [i_0] [i_0] [i_0] = (((arr_43 [i_0] [i_0] [i_18]) ? (((arr_4 [i_0] [i_0] [i_0]) & (((min(1, (arr_37 [i_0] [i_1] [i_14] [0] [i_18 + 1]))))))) : (arr_45 [i_0] [i_1] [i_14 - 2])));
                        arr_67 [i_0] [i_1] [i_1 + 1] [i_0] [i_18 + 1] [i_18 + 1] = ((!(min((arr_63 [i_1 + 2]), (arr_63 [i_1 + 3])))));
                    }
                    for (int i_19 = 0; i_19 < 0;i_19 += 1) /* same iter space */
                    {
                        var_27 = (max(8836434026878164023, 36590));
                        var_28 = var_0;
                        var_29 = arr_42 [i_1] [i_14] [i_0];
                        var_30 ^= (max((arr_42 [10] [i_1] [10]), (arr_14 [2])));
                        var_31 ^= (arr_39 [9] [i_0] [i_0]);
                    }
                }
                for (int i_20 = 4; i_20 < 11;i_20 += 1)
                {
                    var_32 -= 1;
                    var_33 *= var_2;
                    /* LoopNest 2 */
                    for (int i_21 = 4; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 9;i_22 += 1)
                        {
                            {
                                var_34 += 2256217860094968229;
                                var_35 = (arr_32 [i_1 + 3] [i_0]);
                                var_36 *= (!(((1 ? 1 : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 4; i_23 < 10;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 10;i_24 += 1)
                        {
                            {
                                var_37 = ((~((~(arr_44 [i_0] [0] [i_20] [4] [i_0])))));
                                var_38 = (min(var_38, (((((arr_59 [i_24] [i_24 - 1] [i_23] [i_23 + 1] [i_23] [i_23] [9]) % (arr_59 [1] [i_24 - 1] [2] [i_23 + 1] [i_23] [1] [1]))) == (arr_59 [i_24] [i_24 - 1] [i_23 - 1] [i_23 + 1] [i_23 + 1] [i_23 - 1] [i_20])))));
                            }
                        }
                    }
                    var_39 = (min(var_39, (!6080398958792378115)));
                }

                for (int i_25 = 1; i_25 < 12;i_25 += 1)
                {
                    var_40 -= (arr_86 [6] [8] [i_1] [i_25 - 1]);
                    /* LoopNest 2 */
                    for (int i_26 = 2; i_26 < 12;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 0;i_27 += 1)
                        {
                            {
                                var_41 = (min(((((arr_20 [i_0] [6] [i_1] [i_25] [i_26] [i_0]) | (~732406845)))), (min((min(var_1, var_0)), 4471158888832914227))));
                                var_42 += -67;
                                var_43 = -var_5;
                            }
                        }
                    }
                    var_44 *= (min(var_1, (arr_79 [6] [6] [6] [6] [i_0])));
                    var_45 = ((~(((arr_22 [i_0] [i_0] [i_0]) ^ (var_1 ^ var_2)))));
                }
                /* LoopNest 3 */
                for (int i_28 = 2; i_28 < 11;i_28 += 1)
                {
                    for (int i_29 = 1; i_29 < 9;i_29 += 1)
                    {
                        for (int i_30 = 1; i_30 < 1;i_30 += 1)
                        {
                            {
                                arr_103 [i_0] [i_0] [i_28] [i_29] [i_28] [i_0] [i_28] |= (((arr_9 [i_30] [i_28] [i_28]) ? (arr_101 [i_28] [i_28] [i_28 - 2] [i_28] [i_0]) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_28] [i_0])));
                                var_46 &= var_0;
                                var_47 = (max((arr_24 [i_0] [i_0] [i_0]), (arr_100 [i_30] [i_29 + 4] [12] [i_1] [i_1] [i_0] [i_0])));
                                var_48 = (arr_19 [i_0] [i_1]);
                            }
                        }
                    }
                }
                var_49 -= ((!(((arr_42 [i_1] [i_1 + 3] [10]) == (arr_42 [i_1] [i_1 + 2] [12])))));
            }
        }
    }
    var_50 = (min(var_50, ((min(var_2, var_9)))));
    #pragma endscop
}
