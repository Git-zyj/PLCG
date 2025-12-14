/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = 13;
                arr_5 [i_1] = 827437262;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] = var_5;
                            var_17 = (min(var_17, (((max((((arr_14 [i_2] [i_4] [i_2] [i_4]) / var_4)), (13 / 1608527299))) != (((arr_8 [i_3 - 2] [i_4 - 1] [i_2 - 1]) ? 164 : (arr_8 [i_3 + 1] [i_4 + 1] [i_2 + 1])))))));
                            var_18 = (max(((var_0 ? (((max((arr_8 [i_5] [i_3 - 2] [i_2]), (arr_7 [i_2]))))) : -13)), (max((((arr_10 [i_5] [i_3]) - -4)), -1571925273))));
                            var_19 = (((((var_6 ? (max((arr_15 [i_5] [i_2] [i_2] [i_5]), 3)) : (arr_9 [i_3] [i_4])))) >= ((-29 ? var_14 : (arr_15 [i_2] [i_3 + 2] [i_4 - 2] [i_5])))));
                            var_20 = ((min(2287788682, 13)));
                        }
                    }
                }
                arr_17 [i_2] [i_3] = (min(((((arr_7 [i_2 + 1]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 1])))), -14));

                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_21 -= (((arr_12 [i_6]) == 0));
                        var_22 = ((((23 == (arr_8 [i_2] [i_2] [i_7 - 1]))) ? (arr_22 [i_2 + 1]) : (9 != -4)));
                    }
                    var_23 = (max(var_23, (min(((-(arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1]))), -1))));
                    arr_23 [i_2] [i_3] [i_6] = ((((((arr_10 [i_2] [i_2 + 1]) < (arr_7 [i_2 - 1])))) % ((((arr_21 [i_2] [i_2] [i_3] [i_2 + 1] [i_6] [i_2]) != (arr_9 [i_2] [i_2 - 1]))))));
                    arr_24 [i_2] [i_3] [i_6] [i_3] = (i_6 % 2 == 0) ? ((min((((((arr_7 [i_3 + 1]) * var_12)) << ((((137438953472 / (arr_19 [i_2] [i_3] [i_6] [i_3 - 1]))) - 121)))), 0))) : ((min((((((arr_7 [i_3 + 1]) * var_12)) << ((((((137438953472 / (arr_19 [i_2] [i_3] [i_6] [i_3 - 1]))) - 121)) + 600)))), 0)));
                    var_24 = (max(var_24, -95));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_25 = (((arr_14 [i_9] [i_9] [i_2 - 1] [i_9]) ? (arr_14 [i_2] [i_3] [i_2 - 1] [i_3]) : 124));
                                arr_34 [i_3] = var_11;
                                var_26 &= (((((27747 <= (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) > (arr_14 [i_2] [i_9] [i_2] [i_10])));
                            }
                        }
                    }
                    var_27 = (max(var_27, (((!(arr_32 [i_3 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_28 = ((((2036608723446867357 << (((arr_9 [i_11] [i_3]) - 3305882271)))) == 4294967295));
                    var_29 = (max(var_29, 15));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_41 [i_2] [i_3] = ((~((var_1 ? 8388607 : 8388607))));
                        var_30 = 30111;
                        var_31 = -65535;
                        var_32 &= (arr_30 [i_12] [i_2 - 1] [i_12] [i_3 + 1] [i_3] [i_2 - 1]);
                    }
                }
                var_33 = (max(var_33, (max(((((arr_11 [i_2 + 1] [i_3 + 1] [i_3 + 3]) || (arr_38 [i_2] [i_2 + 1])))), ((((max(1571925289, (arr_13 [i_2] [i_3])))) ? (0 | 65529) : (((arr_39 [i_3 - 2] [i_3] [i_3] [i_2 - 1] [i_3] [i_2 + 1]) - (arr_26 [i_2] [i_2] [i_3])))))))));
                var_34 = (arr_37 [i_2] [i_2]);
            }
        }
    }
    var_35 = 1187546202;
    var_36 &= -2138411087;
    var_37 = (min(var_11, 0));
    #pragma endscop
}
