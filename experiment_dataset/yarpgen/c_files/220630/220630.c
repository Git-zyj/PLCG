/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min(2165769917, 1)));

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] [i_2] [i_2] [i_2] [i_3] [i_2] [i_4] = (((((((max(1, 41)))) - (((arr_0 [i_1] [i_1]) ? var_0 : var_8)))) - (arr_7 [19] [i_1] [i_0])));
                            var_12 = (((arr_3 [i_1] [i_1]) - ((((!(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0])))))));
                            var_13 = (max(var_13, (((38629 ? 31801 : 1)))));
                        }
                        var_14 = var_6;
                    }
                    var_15 += (max((min(((min((arr_1 [i_0 + 1]), var_9))), var_7)), (29641 % 69)));
                    arr_16 [i_2] [i_2] = (arr_1 [21]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((-((var_1 ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0]) : 78))))))));
                                arr_25 [i_0] [i_0] [7] [i_2] [i_2] [i_6] = (max((118 | var_1), ((~(arr_19 [i_0 + 2] [i_2 - 2] [i_2 - 1] [i_5 - 1])))));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_17 = 186;
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [10] [i_9] [i_10] = ((-var_8 ? ((-46 + ((max((arr_27 [i_0] [i_1] [i_1] [i_0]), var_6))))) : (arr_33 [i_0 - 1] [i_1])));
                                var_18 = (min(26, -44));
                                arr_38 [18] [i_1] [18] [i_9] [i_10] = (((~var_7) == ((((((arr_8 [i_0] [i_7] [i_7]) ? (arr_23 [i_7] [i_1] [12] [6] [i_7]) : var_2)) == (max(var_10, (arr_28 [i_7] [i_7] [i_7] [18]))))))));
                            }
                        }
                    }
                    arr_39 [i_1] = 15586463112611158687;
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_19 ^= ((((186 * 0) == (206 - 8917395167055980841))) || (arr_2 [i_11 + 1] [i_1] [i_11 + 1]));

                            /* vectorizable */
                            for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, (((58086 ? 59937 : 1)))));
                                arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] = (((arr_1 [i_11]) <= (arr_23 [i_0] [i_0 + 1] [i_12] [i_12 + 3] [8])));
                                var_21 += ((var_0 ? (((arr_26 [i_0]) ? var_1 : (arr_6 [i_0] [i_1] [19]))) : 2695242260));
                                arr_50 [i_13] [i_12] [i_11] [i_12] [i_0] = ((65103 ? 1 : (arr_1 [i_11 + 1])));
                                var_22 = var_8;
                            }
                            for (int i_14 = 1; i_14 < 21;i_14 += 1) /* same iter space */
                            {
                                var_23 = (arr_14 [i_0] [i_0] [i_11] [i_1] [i_14] [i_0] [i_12]);
                                arr_53 [i_14] [i_12] [i_12] [i_12] [i_1] [i_0] [i_0] = ((~(var_6 & 43)));
                                var_24 -= (((-(arr_52 [i_14 - 1] [0] [i_11 + 1] [0] [i_0]))));
                            }
                            for (int i_15 = 1; i_15 < 21;i_15 += 1) /* same iter space */
                            {
                                var_25 = (max(((-60 ? ((((arr_42 [i_0] [i_0] [i_0] [i_0]) ? 1 : var_6))) : (arr_14 [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 + 1]))), (((!var_7) ? (((~(arr_8 [i_12] [21] [i_1])))) : (min((arr_21 [i_15] [i_12] [i_11] [i_1] [8]), (arr_0 [i_12] [i_0])))))));
                                var_26 = (((((~(arr_48 [15] [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_15 - 1] [i_15])))) ? ((~(arr_45 [i_1] [19] [i_15] [i_12 + 3] [i_15 + 1]))) : ((((((arr_32 [i_0] [i_0] [i_0]) | (arr_29 [i_0] [i_0] [i_12] [i_12]))))))));
                                var_27 = (max(var_27, (~44)));
                            }
                            for (int i_16 = 0; i_16 < 22;i_16 += 1)
                            {
                                var_28 = ((!(((((arr_58 [i_0] [i_0] [1] [i_12] [i_16] [i_12] [i_0]) * 1))))));
                                var_29 |= (arr_35 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] [i_11]);
                            }

                            for (int i_17 = 0; i_17 < 1;i_17 += 1)
                            {
                                var_30 = var_7;
                                var_31 = (arr_27 [i_1] [i_1] [i_11] [i_17]);
                            }
                            for (int i_18 = 0; i_18 < 22;i_18 += 1)
                            {
                                arr_65 [i_0] [i_0] [i_0] [i_12] [i_0] [4] [i_0] = -44;
                                var_32 |= (((((max(1, 42369)))) ? (((arr_21 [i_18] [i_12] [i_11] [i_1] [i_0]) ? (arr_9 [21] [i_1] [i_11] [i_12]) : (arr_34 [i_18]))) : 186));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = ((((min((var_0 || var_4), (min(var_1, var_10))))) ? (var_9 / var_6) : var_9));
    #pragma endscop
}
