/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -2790954760384441748;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max((arr_4 [i_0] [i_1] [i_1]), var_0));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] = ((-((((max((arr_5 [i_2] [i_1] [i_1] [i_0]), 55))) / ((-864549039 - (arr_5 [i_0] [i_1] [i_0] [i_0])))))));
                    var_18 = var_6;
                    var_19 = (-((125 + (arr_1 [i_0] [i_0]))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        arr_14 [i_0] [i_3] = -52;
                        var_20 ^= (max((((arr_5 [i_4 + 1] [i_1 - 2] [i_1] [i_0 + 1]) ? (arr_6 [i_0 + 1]) : (arr_8 [i_0 - 1]))), (arr_5 [i_4 + 1] [i_1 - 2] [i_0] [i_0 + 1])));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = 3;
                        var_21 = -1866350969;
                    }
                    arr_16 [i_3] [i_0] [i_0] = (arr_6 [i_1]);
                }

                for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_5] = (-6675014602350457936 ? ((var_7 - (arr_11 [i_0 + 1] [i_1] [i_1] [i_5 + 1]))) : (arr_11 [i_5] [i_1] [6] [i_0]));
                    var_22 -= (arr_1 [i_0] [i_0]);
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, 7433));
                    var_24 = (min(var_24, (!210)));
                    var_25 = (arr_4 [i_0] [i_1] [i_6]);
                    arr_22 [i_6] = 1958733850;
                    var_26 = (((min(var_13, (arr_1 [i_1 + 1] [i_1 + 2]))) & (((!(arr_12 [i_0] [i_1] [i_6] [i_6]))))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_27 = (min(-1959563540, (0 || -5679842060901187583)));
                        arr_30 [i_0] [i_0] [i_7] [i_8] [i_7] [i_0] = arr_8 [i_0];
                        arr_31 [i_0] [i_0] = (max(((255 ? (max(2906866444260060222, -11)) : ((max((arr_24 [i_8] [i_7] [i_1] [10]), -34))))), -4442));
                    }
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        var_28 -= (arr_32 [i_9 + 1] [i_1] [i_7] [i_1] [i_1] [i_0]);

                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            var_29 = arr_26 [i_0] [i_9];
                            var_30 = (arr_32 [i_10] [i_7] [i_9 + 3] [i_7] [i_1 + 2] [i_0]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_31 = (max((max(177, ((max((arr_23 [i_1] [i_7] [i_1] [i_12]), 0))))), ((((-1603785751 ? 108 : var_11)) + 6860584850131996641))));
                                var_32 = (((!(arr_3 [i_0] [i_0 + 1] [i_0]))));
                                var_33 = (max(var_33, ((max((max(var_3, (((~(arr_12 [i_0] [i_0] [i_0] [i_0])))))), 47178)))));
                                var_34 *= min((!-16842), var_4);
                            }
                        }
                    }
                    var_35 = ((~(~-2290534539192965892)));
                    var_36 = -12;

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_37 = (max(var_37, ((min((arr_27 [i_1 + 2] [i_1 - 1]), (((arr_37 [i_0] [i_1] [i_7] [i_0] [i_0] [i_13]) ? ((var_5 ? (arr_39 [i_0] [i_7] [i_0] [i_1 - 2] [i_0]) : (arr_17 [i_0] [i_1] [i_7] [i_13]))) : var_0)))))));
                        var_38 = (max(var_38, (max((((((arr_23 [i_0] [11] [i_7] [i_13]) ? 111 : 140)))), var_1))));
                    }
                }
                var_39 |= (min((max(239704951, (arr_41 [i_1 + 2] [i_1] [i_1] [i_0 + 1] [i_1]))), (((arr_41 [i_1 + 1] [i_0] [22] [i_0 - 1] [i_0]) / (arr_41 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [0])))));
            }
        }
    }
    var_40 = (max(((1217818299 ? ((var_10 ? var_3 : 3461170266)) : -32)), ((min((!6073142293148326031), var_15)))));

    for (int i_14 = 2; i_14 < 22;i_14 += 1)
    {
        var_41 = -63;
        var_42 -= (min(81, (((arr_8 [i_14]) ? (arr_13 [i_14] [i_14] [i_14] [i_14 - 2]) : (arr_38 [i_14] [i_14] [i_14 + 1] [i_14])))));
        var_43 *= -26;
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        arr_54 [i_15] = (((((arr_36 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) * (arr_36 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))) / (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15])));
        arr_55 [i_15] [i_15] = (min(-9223372036854775806, (arr_0 [i_15])));
    }
    #pragma endscop
}
