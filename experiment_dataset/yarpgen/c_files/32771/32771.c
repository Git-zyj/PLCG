/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((1270238092 ? var_1 : 57519)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = 70;
                            var_19 = (((min((arr_10 [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_7 [i_2 + 1] [i_0] [i_2 - 1] [i_3]))) - var_16));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_20 = (max(var_20, (arr_0 [i_4] [i_4])));
                    var_21 = (arr_9 [i_4]);
                    var_22 = (max(var_22, ((((var_1 | 186) / (((arr_11 [8] [i_1] [i_4] [i_4]) | (arr_6 [i_0] [i_0] [0]))))))));
                    var_23 = (max(var_23, (((((((((arr_6 [i_0] [11] [i_4]) | (arr_1 [i_1])))))) * (arr_3 [2]))))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_24 = (arr_12 [i_0] [i_5 - 1]);
                    var_25 = var_16;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_26 = ((((((var_4 & (arr_1 [i_0]))) / ((var_3 + (arr_19 [i_0])))))));
                                var_27 = (((((arr_10 [7] [i_0] [i_5 - 1] [i_5 - 1] [7]) + (min((arr_2 [i_0]), (arr_12 [i_0] [i_0]))))) > (((((max((arr_0 [i_0] [9]), (arr_16 [i_0] [i_5] [i_0] [i_7])))) ? ((57519 >> (170 - 163))) : (80 ^ var_7))))));
                            }
                        }
                    }
                }
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    var_28 = ((max(var_3, (arr_8 [i_0] [i_0] [i_0] [i_8 - 3]))));

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        var_29 = (min(var_29, 2366656499));
                        var_30 = 35537;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_31 = (min(var_31, (arr_26 [i_0] [i_0] [i_1] [i_8 - 1] [i_10])));
                        var_32 = (min(((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]) : 4294967295))) ? var_6 : (var_13 * 29998))), var_4));
                        var_33 = (arr_11 [0] [i_1] [i_0] [i_10]);
                        var_34 = (arr_21 [i_8 + 1] [i_8 - 1] [i_8 - 1]);
                        var_35 = ((((((arr_22 [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 + 1] [i_8 - 3]) * (arr_22 [i_8 - 2] [i_8 - 2] [10] [i_8 + 1] [i_8 - 2])))) ? ((min((arr_22 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [13]), (arr_22 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1])))) : (min(var_4, (arr_22 [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 2])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_36 = ((3431733612799308770 ? (var_7 == 29984) : 0));
                        var_37 = (arr_27 [i_8] [i_0] [i_8 - 3] [i_0]);
                        var_38 = var_15;
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_39 = var_0;
                            var_40 = (max(var_40, (((-32056 ? 30004 : 1)))));
                            var_41 |= ((0 + (arr_0 [i_12] [i_8 - 2])));
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_42 &= ((((var_6 * (arr_25 [i_0] [i_0] [i_0] [i_12] [i_8 - 1] [0]))) > (arr_9 [i_1])));
                            var_43 = (min(var_43, ((max(var_0, -var_0)))));
                            var_44 = (((((arr_3 [i_12]) - ((((arr_33 [i_14] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [3] [3] [i_0] [i_12]) : 2139095040))))) * ((max((var_11 ^ 0), (arr_39 [i_0] [i_0] [i_0] [i_12] [i_14]))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_45 = 1181413123;
                            var_46 = arr_28 [14] [i_8 - 1] [i_0] [10];
                            var_47 = var_7;
                        }
                        var_48 = (arr_18 [5] [i_12] [i_0] [7] [i_0] [i_0] [i_0]);
                    }
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    var_49 = (max(var_49, (((arr_25 [i_1] [i_1] [4] [4] [i_1] [12]) < var_4))));
                    var_50 = (!var_7);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_51 = (min(var_51, ((((0 != 1447997287) == (((arr_12 [i_0] [i_18]) ? ((var_4 ? (arr_34 [i_17] [i_17] [i_18] [i_17]) : (arr_28 [i_1] [i_16] [i_18] [i_16]))) : ((30 / (arr_5 [i_0] [i_1]))))))))));
                                var_52 = (arr_32 [i_1] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_53 = (max((0 * 207), ((((var_15 ? var_12 : var_5)) / 1))));
            }
        }
    }
    #pragma endscop
}
