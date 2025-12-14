/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? (((((min(var_14, var_9))) || (~0)))) : (((!((min(5996, 0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_18 = ((4138089922 ? (arr_0 [i_0] [i_1 - 1]) : var_13));
                    var_19 = 5996;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((~(!18446744073709551615)));
                        var_20 = (arr_9 [6] [i_3] [i_2 + 3] [i_2] [i_2] [i_1 - 1]);

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_21 ^= ((146 ? 1 : (arr_9 [i_0] [i_4] [i_3] [i_2 - 1] [i_0] [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [1] [i_2 + 3] = (((arr_2 [i_0]) >> (((arr_2 [i_4 + 2]) - 105954962758282312))));
                            var_22 = (arr_11 [i_0] [i_1] [i_1] [i_0]);
                            var_23 = (!1);
                            var_24 = (arr_11 [i_1 + 1] [i_2] [i_3] [i_0]);
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_25 *= ((((arr_19 [2] [i_1] [i_1] [i_1] [i_1 - 1]) ? (arr_18 [i_3] [i_1]) : 208911334)));
                            arr_20 [i_0] [i_0] [7] [i_3] [i_5] = (arr_19 [i_2] [i_2] [5] [i_3] [i_3]);
                            var_26 = (min(var_26, (-345716252 == 2016)));
                        }
                        var_27 ^= 2551176074;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_28 = (((((arr_10 [i_0] [i_0] [i_0] [7] [i_6]) + 2147483647)) >> ((((~(arr_6 [i_6] [i_6] [8]))) + 16757))));

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_29 *= 5996;
                            arr_26 [3] [i_1 + 1] [i_2] [i_1] [i_0] = (arr_24 [i_0] [1] [6] [1] [6] [7] [i_0]);
                        }
                        var_30 = ((~((255 >> (214 - 213)))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_31 = (arr_0 [i_0] [i_0]);

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_32 = (arr_9 [i_0] [10] [i_1] [i_2] [i_8] [i_8]);
                            var_33 = (arr_7 [0] [i_0] [0]);
                            var_34 = (arr_21 [i_1] [i_1 + 1] [i_1] [i_0]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_35 = ((58155 ? 1 : 0));
                        var_36 = (arr_3 [i_0] [i_1 - 1]);
                        var_37 = 16384;
                        var_38 = (arr_32 [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                        var_39 = (arr_25 [5] [i_1] [i_2] [0] [i_0]);
                    }
                    arr_35 [i_0] [i_0] [i_0] [9] = ((((((arr_24 [i_2] [i_2] [i_2] [i_1 - 1] [i_2 - 1] [i_2] [i_0]) ? var_0 : 0))) ^ 2525542652));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_39 [i_0] [9] [1] [i_11] = (((var_5 | (arr_32 [i_0] [10] [i_0] [i_0]))));
                        arr_40 [i_0] [1] [i_11] [i_11] = (arr_31 [i_11] [i_0] [i_2 + 1] [1] [4] [i_1] [i_0]);
                    }
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        var_40 += ((var_10 * (arr_34 [i_2 - 1] [i_2] [i_1 - 1] [i_1])));
                        var_41 = (((10761649416278316253 > var_4) ? (((((arr_21 [i_0] [i_0] [i_0] [i_0]) && (arr_42 [i_0]))))) : (arr_41 [6] [i_1] [i_1] [i_1 - 1])));
                        var_42 = ((!((!(arr_42 [i_1])))));
                    }
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_43 = (max(var_43, 63520));
                            var_44 ^= (~29937);
                        }
                        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                        {
                            var_45 = 3433278062811575590;
                            var_46 = (arr_17 [i_1 - 1] [i_0] [i_2 + 2] [i_2 + 2] [i_13 + 1]);
                            var_47 = ((((((-(arr_31 [8] [8] [i_0] [i_13] [i_13] [i_0] [i_15]))) + 2147483647)) << (var_6 - 57980)));
                            var_48 -= (((arr_46 [i_15]) ? (arr_46 [i_15]) : (arr_46 [i_15])));
                        }
                        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_0] = ((~(~0)));
                            arr_54 [i_0] [i_0] [6] [i_0] [i_0] = (((var_0 & 0) != (((((arr_7 [i_0] [i_0] [i_16]) == (arr_44 [i_0] [i_1] [i_2 + 3] [i_2 + 3])))))));
                            var_49 = (arr_52 [i_13 + 1] [i_13 + 1] [i_0] [i_0] [i_1] [i_1]);
                            arr_55 [i_0] [i_0] = 0;
                            var_50 = (((7381 % 1) == (3931 ^ 0)));
                        }
                        var_51 = (arr_32 [i_0] [i_1 + 1] [i_13 + 1] [i_2 + 2]);
                    }
                }
                arr_56 [i_0] = 1073741824;
            }
        }
    }
    #pragma endscop
}
