/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [18] |= -var_0;
                var_13 = ((((max(16549585473306227670, (arr_3 [i_0] [i_1 + 2] [i_1])))) ? (arr_3 [i_1] [i_1 + 2] [i_1]) : (((arr_3 [i_1] [i_1 + 2] [i_1]) ? (arr_3 [i_0] [i_1 + 2] [i_1]) : 65517))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 = min((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 - 2]))), (arr_7 [i_0] [i_1] [i_2] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 *= ((18 ? (arr_13 [i_2] [i_1] [i_2] [i_3] [i_4]) : 18));
                                var_16 = ((((arr_8 [i_0] [i_0] [i_2] [i_0]) ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_0]) : (arr_8 [i_0] [i_0] [i_2] [i_3]))));
                                var_17 = (min((min((arr_3 [i_1 - 2] [10] [i_1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1]))), (var_5 && var_11)));
                            }
                        }
                    }
                    var_18 = 133;

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((var_11 ^ (arr_8 [10] [i_5 - 2] [i_5 - 3] [i_5]))))));
                        var_20 = 65535;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] = ((-(arr_10 [i_0] [i_0] [i_0])));
                            arr_23 [i_0] [i_0] [i_0] [i_6] [i_2] [i_1] |= 162;
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_21 = 162;
                            var_22 ^= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = 9223372036854775807;
                            var_24 = -15979;
                        }
                        arr_27 [i_0] [i_1] [i_1] [i_5 - 3] = (((var_1 / var_3) ? (arr_13 [i_2] [i_1] [i_2] [i_5 - 3] [i_5]) : (arr_3 [i_0] [i_5 - 2] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, var_9));
                        var_26 = (((arr_10 [i_8 + 1] [i_1] [i_1 + 1]) / (arr_10 [i_8 + 1] [i_8 + 1] [i_1 + 1])));
                        var_27 = (min(var_27, (arr_19 [i_1 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_1] = (-3348621251426145778 ? 149 : ((37490 ? var_9 : 38356)));
                        var_28 -= var_0;
                        var_29 = var_4;
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_30 = (min(var_30, (((-((((min(-27903, 18))) ? (max((arr_11 [i_1]), 18446744073709551593)) : (arr_17 [i_2]))))))));

                        for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [2] [i_2] [i_0] [i_0] |= var_5;
                            var_31 += ((var_7 ? 9223372036854775807 : (arr_15 [i_1 - 2] [9] [i_1 + 1] [i_10 + 3] [i_11 + 1])));
                            var_32 = ((var_4 ? (((((18446744073709551593 ? 3348621251426145779 : var_9))) ? var_5 : var_1)) : (min((((arr_0 [i_0]) % 64653)), -7090873106044314347))));
                            arr_40 [i_0] [i_1] [i_2] [i_10] [i_10] [i_11] = (max((min((arr_29 [i_1] [i_2] [i_10 + 2]), 13978110947552082732)), (((65535 ? (arr_37 [i_0] [i_1] [i_0] [i_10] [i_1] [i_0]) : 93)))));
                        }
                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_33 = (((((~(min(153, -1521162621))))) ? ((max(245, (arr_24 [i_12 + 1] [i_12 + 1] [10] [i_12 + 1] [i_12] [21])))) : ((min(-7090873106044314336, 178)))));
                            var_34 = (arr_3 [i_0] [i_2] [i_1]);
                            var_35 = var_0;
                        }
                        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_36 = (max(var_36, var_4));
                            arr_46 [i_13] &= ((((((!2147483647) ? var_3 : (max(var_2, var_5))))) ? 28046 : (arr_15 [i_0] [i_1] [i_2] [i_10] [i_13])));
                            var_37 = ((((var_6 ? (arr_28 [i_13 - 2] [i_1 - 1] [i_1] [i_10 + 1]) : 46))) ? ((((arr_21 [i_13 - 2] [i_1 - 1] [i_2] [i_10 + 1] [i_13]) ? 1521162621 : (arr_28 [i_13 - 1] [i_1 - 2] [i_1] [i_10 + 3])))) : ((var_6 ? (arr_21 [i_13 + 1] [i_1 + 1] [i_2] [i_10 - 1] [i_13 + 1]) : 63)));
                        }
                    }
                    var_38 += ((1527822416 ? (arr_25 [i_1] [i_1 + 1] [i_1] [i_2] [i_2]) : (arr_36 [i_0] [i_0] [i_1] [i_1 - 1] [0] [i_2])));
                }
                var_39 = ((!(arr_41 [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
