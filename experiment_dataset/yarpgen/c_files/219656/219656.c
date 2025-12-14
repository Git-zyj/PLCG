/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((-20 ? (~var_0) : var_15));
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min((arr_8 [1] [i_0 + 1]), (max((arr_8 [i_0] [i_0 + 3]), (arr_8 [i_0] [i_0 + 4])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_20 &= var_3;
                        var_21 = 38452647;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_13 [8] [i_2] [i_2] [i_4] = (((((var_1 ? 11530835593069082287 : var_10)) - (((1 ? 1 : 1))))));
                        var_22 = ((!(((var_14 ? (((~(arr_4 [i_4] [i_1])))) : (~733824887106612904))))));
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_23 = (arr_11 [i_0] [i_1] [i_2] [i_5]);
                        arr_17 [3] [i_5] [1] [i_2] = (arr_10 [1] [i_2] [i_2] [i_2] [i_0]);

                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((-8128 ? var_1 : ((~(((arr_10 [i_0] [i_1] [i_2] [i_2] [i_6]) ? var_7 : 1))))));
                            var_24 = 1;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_1] [0] [3] [11] = ((max(2031382695, (arr_22 [i_0] [2] [11] [1] [i_7]))));
                            arr_24 [i_0] [i_2] [i_5] [i_2] = (min(((((((18 ? 1 : (arr_9 [i_0] [i_1] [6] [i_7])))) ? (~1) : (arr_12 [4] [i_1] [i_2] [i_5])))), 11));
                            arr_25 [i_0] [i_2] [i_2] [i_7] = (max(18, (-2147483647 - 1)));
                            arr_26 [i_2] [i_7] [8] [i_5] [5] = (((-(arr_0 [1] [i_0 + 1]))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = ((+(((((arr_22 [i_0] [i_1] [i_2] [i_8] [i_1]) ? var_7 : 112)) / var_13))));
                            var_26 -= (max((((-12 ? ((var_16 ? 1 : 1)) : (arr_21 [i_0 + 1] [i_1] [0] [i_1])))), (max(((max((arr_27 [i_0] [i_5] [i_1] [i_2] [i_5] [i_8] [i_8]), var_7))), var_16))));
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_27 = 18446744073709551615;
                        arr_33 [i_2] [i_2] [i_2] = 5491503484315086457;
                        arr_34 [i_0] [i_1] [i_2] [i_2] = (-(arr_8 [i_0 + 2] [i_0 + 4]));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_37 [i_0] [9] [i_2] [i_0] [i_0] [6] = ((1 ? (max((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_0 : (arr_0 [i_1] [i_2]))), (((0 ? (arr_28 [1] [1] [11] [i_10] [i_1] [i_2] [i_2]) : var_5))))) : (((((-(arr_18 [i_0] [i_1]))))))));
                        var_28 = (((((-(18446744073709551615 * var_10)))) ? var_6 : 5793657180654594175));

                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_40 [i_2] [i_10] [i_2] [i_1] [i_2] = 1;
                            var_29 = ((arr_9 [i_10] [9] [i_1] [i_0]) ? ((var_14 ? (arr_14 [i_0 + 2] [1] [i_0] [i_0 + 1] [i_0 + 4] [i_0 + 4]) : (arr_14 [i_0 - 1] [i_0] [0] [i_0 + 4] [i_0 + 1] [i_0 + 4]))) : (max((-2147483647 - 1), (arr_29 [i_0 - 1] [i_2] [i_0 - 1] [1] [i_2] [1]))));
                            arr_41 [i_11] [i_2] [i_2] [i_2] [i_0] = 1;
                            arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] = ((~((max((arr_11 [i_0 + 4] [i_1] [8] [i_10]), (arr_11 [i_0 + 3] [i_1] [i_2] [i_10]))))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_30 = (min(var_30, (max(((0 ? (arr_6 [i_0 + 1] [i_0 + 2]) : (arr_6 [i_0 - 1] [i_0 + 3]))), ((min((arr_6 [i_0 + 3] [i_0 + 3]), (arr_6 [i_0 + 1] [i_0 + 4]))))))));
                            var_31 = (+((0 ? (arr_15 [i_2] [4] [i_10]) : ((max(-125, 1))))));
                            var_32 = (((arr_15 [i_2] [i_1] [i_2]) ? (((!(arr_32 [i_12] [i_10] [8] [i_1])))) : (arr_14 [i_0] [11] [i_0] [i_0] [0] [i_0])));
                            var_33 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
