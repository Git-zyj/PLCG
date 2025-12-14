/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(var_11, var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 = (((-(-31374 + var_4))));
                        var_13 -= ((!((max(-1, var_2)))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_14 &= (arr_1 [i_0]);
                        arr_15 [i_4] = (min((((~var_9) & (arr_11 [i_2] [i_2] [7] [i_2]))), var_8));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_5] [5] [14] [i_1] [i_0] = (max(5743592003325111515, 7));
                            arr_20 [i_0] [i_0] = var_9;
                            arr_21 [i_0] [i_1] [i_1] [11] [i_2] [14] [i_5] = var_3;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [i_0] = var_7;
                            var_15 = (min(var_15, ((((arr_1 [i_6]) ? (!-5743592003325111517) : (~39))))));
                        }
                        arr_26 [i_0] [i_2] [i_2] [i_4] [i_4] = (max(var_8, (((((~(arr_17 [i_4])))) ? -918781525 : ((max(103, (arr_11 [i_0] [i_1] [2] [i_4]))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_16 = (arr_4 [i_1] [i_1] [i_1]);
                        var_17 = var_8;
                        var_18 = (max(var_18, (((!(arr_14 [6] [i_0 - 3]))))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = 255;
                            arr_32 [4] [5] [4] [i_2] [i_8] [4] [i_8] = arr_17 [i_1];
                            arr_33 [i_0] [13] [i_2] [i_8] [13] [i_8] = (((1921 * -1) != (40760 <= 16352)));
                        }
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            var_20 = (min(var_20, (!-1899)));
                            arr_36 [i_2] [i_2] [i_2] [i_2] = (((arr_5 [i_9 - 2] [0]) <= (arr_5 [i_9 - 1] [i_0])));
                            var_21 = (((((-(arr_35 [i_0] [12] [9] [i_7] [i_9])))) && (((var_6 ? 22649 : var_4)))));
                        }
                        var_22 = var_10;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_23 += (max((~var_6), (arr_34 [i_0] [5])));

                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            arr_43 [i_10] = (min(37293, var_0));
                            arr_44 [i_2] [1] [i_2] [i_10] [i_2] [i_2] = ((-(((((var_9 || (arr_30 [i_2] [i_10] [i_11 + 1])))) * ((((arr_4 [9] [i_2] [i_2]) >= (arr_7 [i_1] [i_1] [i_10]))))))));
                            var_24 = ((((max(15427, 345876334))) ? ((~(arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 + 1]))) : ((max((arr_28 [i_0] [i_1] [8] [i_10]), (arr_17 [i_0]))))));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_25 = ((((((arr_29 [i_0 + 2] [i_0] [i_1] [i_2] [i_0] [i_10] [i_12]) ? 32768 : 7))) ? (arr_39 [i_0 - 3] [i_0 + 2] [i_0 - 1]) : (48 || 794985947)));
                            arr_47 [i_0] [10] [i_0] [i_0] [i_1] |= var_6;
                            arr_48 [i_10] [i_10] [7] [i_10] [i_10] = ((~(((arr_11 [i_0] [i_0] [4] [i_0 + 1]) ? var_1 : (arr_11 [i_0] [3] [i_0] [i_0 + 1])))));
                            var_26 = min((arr_29 [i_0] [12] [i_2] [i_2] [3] [i_0] [i_0]), 3221225472);
                            arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] = (arr_45 [8] [i_1] [i_10] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_27 = var_2;
                            arr_52 [i_1] [i_10] = var_10;
                            arr_53 [i_10] [i_1] = ((((1 ^ (arr_35 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]))) | 39));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_28 = (((((((((arr_35 [i_14] [i_1] [i_2] [i_1] [i_1]) ^ var_0))) ? var_0 : ((((arr_45 [i_0] [i_0] [i_14] [i_14]) ^ 524286)))))) || ((((arr_2 [i_0 + 1]) / (arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 2]))))));
                                var_29 = (min(var_29, 67));
                                arr_59 [i_0] [12] [12] [12] [i_15] = (((((((var_4 ? 62534 : 4))) ? ((((arr_4 [i_0] [i_0] [i_0]) ? (-9223372036854775807 - 1) : var_4))) : (min((arr_58 [i_15] [i_14] [i_2] [i_1] [i_0] [i_1] [i_0]), var_2)))) << (((((32481 ? 528482304 : 74))) ? ((var_8 ? (arr_28 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : var_0)) : ((((arr_3 [i_0] [i_1]) << (4092 - 4072))))))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] = (((((-(min((arr_5 [i_2] [i_2]), 5110314861143920950))))) && (((var_2 ? (arr_4 [i_0] [i_0] [i_0]) : var_6)))));
                                var_30 += var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = max(var_5, (min(var_5, var_10)));
    var_32 = ((~(var_6 | var_2)));
    #pragma endscop
}
