/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((var_0 ? 0 : var_9))) / var_8)), (((var_3 ? 1 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 ^= (26 - 24);
                    arr_8 [i_1] [i_2] [i_0] = (((((-(arr_6 [i_0] [i_1] [i_2])))) ? ((((((var_6 ? (arr_2 [i_0]) : 11489))) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_2]) : ((1 ? var_3 : var_4))))) : var_8));
                    arr_9 [i_1] [i_0] = ((1 ? 0 : -13787));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_12 = ((((arr_15 [i_4] [i_4] [i_4] [i_4 + 1]) + 1)));
                                var_13 = (max(var_13, (arr_0 [i_0])));
                            }
                        }
                    }
                    var_14 = var_9;
                    arr_18 [i_0] [i_3] [i_3] [i_1] = (min(((((arr_14 [i_3] [i_3] [i_3] [i_3]) != (arr_11 [i_0] [i_0])))), (min((arr_17 [i_0] [i_0]), ((min((arr_14 [i_1] [i_1] [i_3] [i_0]), var_9)))))));
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_15 ^= var_5;
                    var_16 = (min(2251782633816064, -3937238521450264566));
                    var_17 ^= ((~(((arr_12 [i_0 - 2] [i_6]) ^ (arr_12 [i_0 - 2] [i_0])))));
                    var_18 = (max(var_18, (arr_4 [i_1])));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (((4294967292 ? (((arr_0 [i_0 - 3]) ? var_5 : (arr_0 [i_0 - 1]))) : 15029)))));
                    var_20 = var_2;
                    var_21 = (16861686899510801058 <= 0);

                    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                    {
                        var_22 = 2251799679467520;
                        arr_27 [i_7] [i_7] [i_7] [i_7] [i_0] [i_7] = 14442697163931716816;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_7] [i_9] = ((~((1 ? 5785656471833621574 : 9809))));
                        arr_32 [i_0] [i_1] [i_0] = 511;
                        var_23 = var_7;
                        var_24 = (max(var_24, (~-15215)));
                    }
                }
                for (int i_10 = 4; i_10 < 17;i_10 += 1)
                {
                    arr_37 [i_0] [i_0] = 7141189409931271431;
                    var_25 *= ((arr_36 [i_0 - 3]) || var_1);
                    var_26 = (min((min((arr_35 [i_0] [i_0 - 3]), (var_4 + var_6))), ((max(((0 / (arr_19 [i_0] [i_1]))), ((-1385760099461464125 ? 4090 : var_4)))))));
                    var_27 = ((-(arr_16 [i_10] [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_28 *= 1;
                    var_29 = (~(arr_23 [i_0 - 2]));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_47 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = ((+(((arr_20 [i_0] [i_12] [i_13]) + 0))));
                            arr_48 [i_0] = (((((((arr_43 [i_13] [i_12] [i_1] [i_0 + 1]) ? 0 : -1)))) ? (!10903) : (((~31) ? var_4 : (arr_46 [i_0] [i_1] [i_12] [i_1] [i_0])))));
                            var_30 = (arr_17 [i_0] [i_1]);

                            for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                            {
                                var_31 &= var_3;
                                var_32 = (min(27489, 11305554663778280176));
                                arr_52 [i_0] [i_1] = ((!((min(185, 2251782633816044)))));
                                var_33 |= 0;
                            }
                            for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                            {
                                var_34 = ((!((min(1, -5785656471833621549)))));
                                var_35 ^= 2773085997;
                                arr_57 [i_0] [i_0] [i_12] [i_0] [i_15] = (arr_38 [i_0] [i_0] [i_13] [i_15]);
                            }
                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                            {
                                arr_60 [i_0] [i_1] [i_12] [i_0] [i_16] = (((arr_24 [i_0] [i_0 + 1] [i_12]) / var_0));
                                var_36 ^= (((arr_42 [i_0 - 2] [i_1] [i_0 + 1] [i_13]) ? (arr_42 [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_42 [i_0] [i_1] [i_0 + 1] [i_13])));
                                var_37 = var_3;
                                var_38 = ((var_4 ? (((arr_49 [i_0 - 3] [i_13] [i_0 - 3] [i_13] [i_0 - 3] [i_16]) ? (arr_0 [i_12]) : (arr_46 [i_16] [i_13] [i_12] [i_0] [i_0]))) : var_7));
                            }
                            for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                            {
                                var_39 = ((min((arr_42 [i_0 - 1] [i_0 - 1] [i_13] [i_17]), (arr_42 [i_0 + 1] [i_13] [i_17] [i_17]))));
                                arr_64 [i_0] = (min((arr_13 [i_0] [i_0] [i_1] [i_12] [i_13] [i_17]), (arr_36 [i_12])));
                                var_40 = ((~(((((~(arr_16 [i_1] [i_17])))) ? (((arr_24 [i_0 + 1] [i_1] [i_17]) | 41876)) : (-1758552847 | 1)))));
                            }
                            arr_65 [i_0 + 1] [i_1] [i_12] [i_0] = (((((-(arr_5 [i_0] [i_0 + 1] [i_0 + 1])))) ? ((var_2 ? (arr_5 [i_0] [i_0 - 2] [i_0]) : (arr_5 [i_0] [i_0 - 2] [i_12]))) : ((0 ? (arr_17 [i_0] [i_0 - 1]) : -27748))));
                        }
                    }
                }

                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    arr_70 [i_0] [i_0] [i_18] = (((var_1 / (arr_41 [i_18] [i_1] [i_0 - 2]))));
                    var_41 = (((-(arr_36 [i_18]))));
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    var_42 |= ((~(((arr_15 [i_0] [i_1] [i_1] [i_19]) | var_4))));
                    var_43 |= ((-(arr_53 [i_0] [i_0] [i_0] [i_0 - 1])));
                    var_44 = (var_9 * var_4);
                }
            }
        }
    }
    var_45 = var_9;
    #pragma endscop
}
