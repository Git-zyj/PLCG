/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_19 % var_2);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((4294967273 ? 18446744073709551615 : 123));
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = (arr_1 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_23 = ((~(min(((max(var_0, var_12))), var_15))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] = ((-(((((18446744065119617024 ? var_8 : -9223372036854775807))) ? (min(-4801670568594238187, 3153163254)) : var_8))));

                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_24 = (max(var_24, (((~(~4542083323796646514))))));
                                arr_16 [i_1] [i_2] [i_3] [i_5] = ((+(((arr_10 [i_1 + 1] [i_4 - 2] [i_3 + 3]) ? (arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 2]) : (arr_10 [i_1 - 1] [i_4 - 2] [i_3 + 3])))));
                                arr_17 [i_1] [i_2] [i_2] = ((arr_11 [i_1] [i_2] [i_4] [i_4]) ? (max((max((arr_6 [i_5] [i_4] [i_1]), var_14)), (((32767 ? var_16 : var_5))))) : ((((arr_3 [i_1]) ? (arr_10 [i_1 - 1] [i_3] [i_1 - 1]) : (arr_9 [i_1] [i_3] [i_5])))));
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_21 [i_1] [i_3] [i_6] = var_19;
                                var_25 = min((min((arr_6 [i_1] [0] [i_1]), (((!(arr_10 [i_6] [i_1] [i_1])))))), var_13);
                                arr_22 [i_1 + 2] [i_2] [8] [i_4] [i_6] = (!var_14);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_26 = ((45748 ? 13909371041129443446 : 9223372036854775807));
                                var_27 = (-(41106 || var_8));
                            }
                            var_28 = (arr_1 [6] [i_2]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_29 -= (arr_4 [2] [2]);
                                var_30 = min(var_11, (min(((var_11 ? var_15 : (arr_3 [i_8]))), (arr_30 [i_10 + 3] [i_8] [i_2] [i_1 - 1]))));
                                var_31 = (arr_27 [i_10 + 2] [i_9 - 1] [i_9 - 1] [i_1 + 2]);
                                var_32 = ((((((~2934236351) & ((((arr_12 [i_2] [i_8] [i_9] [i_2]) ? var_6 : var_4)))))) ^ 12585402688522781921));
                            }
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_1] [1] [i_1] = var_16;
                    arr_38 [i_1] [i_1] [i_1] = (arr_29 [i_1] [i_2] [9]);
                    arr_39 [i_1] [i_1] [i_1] = (max(-4527890130283956696, ((14914856883444543555 ? 5389946725149608102 : (min(1164878311, var_8))))));
                    arr_40 [9] [9] [i_1 + 1] = (arr_9 [i_11] [i_2] [i_1]);
                    var_33 = ((-(max((65535 || var_16), (max(4799848309387875471, 18446744073709551610))))));
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    arr_43 [i_12] [i_2] [i_2] [i_1] = ((21805 ? 12616 : 3604574712));
                    var_34 |= (((var_11 ? ((1002900914 ? var_1 : var_18) : (((max((arr_23 [i_2] [i_12]), var_4))))))));
                    var_35 = ((~(((var_6 - var_12) ? (arr_20 [2] [2]) : (((arr_35 [i_1] [i_1 + 2] [i_1]) + 36011204832919552))))));
                }
                for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    arr_47 [i_1] [i_1 + 1] [i_1] = ((((min((arr_14 [i_1] [i_13] [i_1] [i_2] [i_1] [i_1]), var_1))) ? (arr_14 [i_2] [i_2] [i_2] [i_1] [i_13] [11]) : ((var_9 ? (((~(arr_42 [i_2] [i_2] [i_2])))) : (max((arr_19 [i_13] [i_2] [i_2] [i_1]), var_12))))));
                    var_36 = -var_15;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_37 = (max(((max((arr_9 [i_1 - 1] [13] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 - 1] [i_13])))), (min(var_18, (arr_1 [i_1 + 2] [i_1 + 2])))));
                                arr_52 [1] = ((!(!var_2)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_38 = ((~((0 ? var_7 : var_3))));
                        arr_58 [i_1] [i_1] [i_16] [i_17] [i_16] = ((!(arr_42 [i_17] [i_16] [i_17])));
                        var_39 = (arr_50 [i_16] [i_16] [3] [i_16] [i_16]);
                    }
                    var_40 = var_14;
                }
                var_41 = (max((max((arr_9 [i_1] [i_1 + 2] [i_1 + 2]), (arr_19 [i_1 + 2] [i_1 + 1] [i_2] [i_2]))), (((max(281474968322048, 0))))));
            }
        }
    }
    #pragma endscop
}
