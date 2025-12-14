/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((124 ? (arr_2 [i_0]) : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((!(((var_6 + (((arr_10 [i_2] [i_1] [i_3 - 1]) / var_2))))))))));
                                var_17 *= (((arr_11 [i_3 - 1] [i_1] [i_0 - 1] [i_0] [i_0 - 1]) ? (((arr_3 [i_0 - 1] [i_0] [i_0 + 1]) | (arr_3 [i_0 + 1] [i_0] [i_0 + 1]))) : (((arr_5 [i_2] [i_0 + 1] [i_2]) * (arr_5 [i_2] [i_0 - 1] [i_2])))));
                                var_18 *= (arr_4 [i_2] [i_3]);
                                var_19 = (!var_11);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (min(var_20, var_4));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_7 - 2] [i_8] [i_9] = ((((((~(arr_22 [i_6 + 1] [i_6 + 1] [i_7 + 2]))) + 2147483647)) >> (arr_22 [i_6 + 1] [4] [i_7 + 2])));
                                var_21 &= (((1 - ((var_11 ? var_1 : var_0)))));
                            }
                        }
                    }

                    for (int i_10 = 4; i_10 < 16;i_10 += 1)
                    {
                        var_22 = (max(var_22, ((max((var_5 * var_4), ((((arr_25 [i_10 - 1] [i_10 + 2] [8] [i_10 - 3] [i_10]) | (arr_25 [i_7] [i_10 + 2] [i_7] [i_7] [i_7])))))))));
                        var_23 = (min(var_23, (((arr_26 [i_6 + 1] [i_6]) != ((((((arr_30 [i_10] [i_7] [i_6] [i_5]) * var_9))) / (max(var_0, var_3))))))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_24 -= (~171);
                        arr_34 [i_5] [i_6] [i_11] = var_4;
                        var_25 = (max(var_25, var_6));
                    }
                    arr_35 [i_7] = ((((((arr_31 [i_7 - 1] [i_6 - 3] [i_6 - 3]) - (arr_27 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 2])))) && (arr_21 [i_6 - 2] [i_6 - 2] [i_7 - 2])));
                }
            }
        }

        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_26 += var_3;
                            arr_46 [i_5] [i_12 - 1] [i_13] [i_12 - 1] [i_13] |= (arr_43 [i_13] [i_5] [i_13] [i_5] [i_5]);
                        }
                        for (int i_16 = 2; i_16 < 16;i_16 += 1)
                        {
                            var_27 = var_0;
                            var_28 = (min(var_28, (((var_11 ? (((((((var_1 >> (((arr_42 [i_5] [i_5] [i_14] [i_14]) + 146))))) != var_6)))) : var_7)))));
                            arr_49 [i_16] [17] [i_13] [i_16] = ((~((((((arr_26 [i_5] [i_12]) ? var_6 : 877728592))) ? (3417238703 & 0) : var_7))));
                            arr_50 [i_5] [1] [i_16] [i_5] [i_16 + 2] = 4294967283;
                            var_29 = (max(var_29, ((((1 & 1) / (min((arr_43 [1] [i_14] [i_13] [i_12] [i_5]), (min(var_1, var_7)))))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            arr_53 [7] [i_17] [i_14] [i_17] = ((575111807 ? 1 : 117));
                            arr_54 [i_5] [i_12 - 1] [6] [i_14] [i_17] = (~var_3);
                        }

                        for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, (arr_41 [i_5] [i_5] [i_12] [i_13] [i_14] [i_18])));
                            var_31 -= arr_23 [i_12 - 1] [i_12] [i_12 - 1];
                            var_32 -= 877728592;
                            var_33 = (min(var_33, (!var_5)));
                        }
                        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                        {
                            arr_60 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_28 [i_5] [i_5] [i_5] [i_5] [1]);
                            var_34 -= (arr_51 [1] [i_5] [i_13] [i_12 - 1] [i_5]);
                            arr_61 [i_5] [i_5] [i_13] [i_14] [10] = ((9873259148231837970 << (-91 + 132)));
                            arr_62 [i_5] [i_5] [i_13] [i_12] [i_5] = var_10;
                        }
                    }
                }
            }
            arr_63 [i_5] = ((~(0 + 2147483647)));
            arr_64 [i_12] [i_5] [i_5] = ((+(((arr_23 [i_12 - 1] [i_12 - 1] [i_12 - 1]) >> (arr_23 [i_12 - 1] [i_12] [i_12 - 1])))));
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            arr_68 [i_5] [i_20] [i_5] = ((((var_10 ? (arr_19 [i_5] [i_20]) : (arr_39 [i_5] [10] [i_5] [i_5]))) == (((((877728571 && (-9223372036854775807 - 1))) ? var_8 : (arr_40 [i_20] [i_20] [i_5]))))));
            var_35 = (max(var_35, var_9));
        }
        arr_69 [i_5] [i_5] = (2163023157 | 54636);
    }
    #pragma endscop
}
