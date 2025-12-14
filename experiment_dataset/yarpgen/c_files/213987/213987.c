/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = (((arr_5 [8] [i_1 - 1] [i_2 + 2] [i_0]) & var_7));
                        var_14 = var_9;
                    }
                }
            }
        }
        var_15 += (((arr_5 [i_0] [i_0] [i_0] [8]) != (arr_6 [3] [i_0])));
        var_16 ^= (arr_2 [6]);
        var_17 &= (((var_7 ? (arr_4 [6] [0] [0] [i_0]) : 2604842341)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 += arr_10 [i_0] [i_4 + 3] [i_4 + 3] [i_7] [i_7];
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] [i_0] = (arr_13 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 + 2]);
                                var_19 = var_5;
                                var_20 = (((arr_9 [i_4] [i_5] [i_4] [i_7]) | 2604842341));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_21 = (max(var_21, 18446744073709551610));
                                var_22 = (((1 && 2956830908) && (arr_14 [7] [i_4 + 2] [7] [i_9])));
                                arr_26 [i_0] [i_0] [i_4] [i_0] [i_8] [i_4] [i_9] = (arr_17 [4] [i_4] [i_5] [1] [i_9 - 2]);
                            }
                        }
                    }
                    arr_27 [i_4] [i_0] = -6927;
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 6;i_11 += 1)
                        {
                            {
                                var_23 = 1873019342;
                                var_24 = (2956830902 != var_2);
                                var_25 -= (((arr_8 [i_4 + 3]) ? (arr_4 [i_5] [i_5] [i_10 - 1] [i_11 + 2]) : (12160469155510362337 >= var_7)));
                                var_26 *= (((-344 >= -1) >> (((arr_31 [i_4 - 1] [i_5]) - 1163669641))));
                            }
                        }
                    }

                    for (int i_12 = 4; i_12 < 9;i_12 += 1)
                    {
                        var_27 &= var_11;
                        arr_37 [i_0] [8] [1] [i_0] = (((arr_25 [i_0] [i_4 + 4] [6] [i_5] [i_12] [i_12 + 1]) != ((1873019340 ? -2 : (arr_31 [i_0] [i_0])))));
                        arr_38 [i_0] [i_0] [i_0] [i_12] = (((arr_18 [i_4 + 3] [i_4 + 1] [i_4 + 3] [i_5] [i_5] [i_5] [i_12]) || (arr_18 [i_0] [i_4 + 4] [i_12] [i_12] [i_12] [i_12] [i_12 - 3])));
                        var_28 = (max(var_28, 0));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_29 |= (arr_39 [0]);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    arr_47 [i_13] [i_13] [i_15] [i_15] = (((((((!(arr_46 [i_13] [i_14] [i_14] [i_13])))) >= ((((arr_42 [i_13] [i_13]) && 1873019342))))) ? (((!(0 & 1873019332)))) : (arr_46 [i_13] [i_14] [i_13] [i_13])));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_30 = ((18446744073709551602 ? (arr_40 [i_13]) : ((((65523 || 479227311) && 1)))));
                                var_31 = (max(var_1, var_10));
                                arr_55 [i_13] [i_15] = (i_13 % 2 == 0) ? ((((arr_43 [i_13] [i_14] [i_17]) >> ((((-(arr_39 [i_13]))) - 12566071041770444452))))) : ((((arr_43 [i_13] [i_14] [i_17]) >> ((((((-(arr_39 [i_13]))) - 12566071041770444452)) - 12647306548090485759)))));
                                var_32 *= 1592093315;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_33 ^= ((1 >> (var_12 - 6376)));
                                var_34 = var_5;
                            }
                        }
                    }
                }
            }
        }
        var_35 ^= (!86);
    }
    var_36 = ((((var_4 || (2421947954 || 1056828420))) ? (var_8 || 3576199255059394024) : (((var_5 || var_10) ? var_11 : (max(var_4, var_5))))));
    #pragma endscop
}
