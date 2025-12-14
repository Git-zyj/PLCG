/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 ^= (max(5, (+-11)));
                arr_4 [i_0] [i_0] [0] = (((((128 < ((5469 ? (arr_2 [i_0] [1] [i_0]) : 0))))) % (min(var_12, (((arr_2 [i_0] [1] [i_1]) ? -15 : (arr_3 [i_1] [i_1] [i_0])))))));
                arr_5 [i_1] = var_7;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [7] = ((((((var_13 <= (arr_2 [i_0] [i_1] [i_2]))))) ? (((((((arr_1 [18]) >= (arr_0 [i_0]))))) & (arr_0 [i_1]))) : 123));
                    var_17 = 136;
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_3] &= var_5;
                            var_18 ^= (((arr_13 [i_1] [8] [i_3]) - (arr_13 [i_0] [i_0] [i_0])));
                        }
                        arr_20 [i_0] [i_0] [i_0] = ((-(arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_6] [i_4] [21] [i_3] [i_0] [i_0] [i_0] = ((((-11 * (arr_13 [i_0] [i_1] [i_6]))) != ((((arr_2 [i_1] [13] [i_6]) && var_6)))));
                            var_19 = (min(var_19, (arr_3 [i_1] [i_1] [i_0])));
                            var_20 -= ((1 ? ((576460752303423487 ? (arr_3 [i_0] [i_4] [i_0]) : (arr_14 [i_0] [i_0] [i_3] [i_4] [i_6] [14]))) : 8));
                            arr_24 [i_0] = (arr_11 [i_1] [i_4] [i_1]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_3] [i_7] [i_7] = ((-(arr_16 [i_7] [i_3] [10] [i_0] [i_0])));
                        arr_28 [i_0] [i_1] [i_0] |= ((((-(arr_10 [i_0] [i_3] [1])))) ? 2 : ((-125 ? var_13 : 48930)));
                    }
                    var_21 -= (((arr_15 [i_0] [i_1] [1]) ? (arr_13 [i_1] [i_1] [i_0]) : (arr_13 [i_0] [i_0] [i_3])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_22 = ((-((1 + (arr_2 [6] [i_1] [i_1])))));
                                var_23 |= (((arr_11 [i_9] [i_8] [i_0]) ? (arr_11 [i_0] [i_0] [i_0]) : 54539));
                                arr_34 [i_9] [i_1] [i_3] [i_8] [i_9] = (arr_33 [i_0] [i_0] [i_3] [i_8] [i_8] [i_9] [i_9]);
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (arr_7 [i_1])));
                        var_25 ^= -var_11;
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_1] [i_0] = (arr_2 [i_0] [i_1] [15]);
                        var_26 *= (((!1) != 16606));
                    }
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_12] [i_0] = ((((3 ? 10871282599525954169 : -12))));
                        arr_45 [i_0] [5] [i_1] [i_1] [i_12] [i_1] = (((((((((arr_26 [i_0]) ? var_11 : -5661831303811594187))) ? (arr_40 [i_0] [i_12] [i_12] [i_1]) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_29 [12]) : (arr_21 [i_0] [i_1] [i_12] [i_13] [i_13] [i_13])))))) - (((((var_3 ? var_9 : 2147483647))) | var_3))));
                        var_27 *= (((((((((arr_29 [i_0]) ? 16605 : (arr_14 [i_0] [i_0] [i_12] [i_12] [i_0] [i_0]))) != (!1))))) > (((arr_18 [i_0] [i_0] [i_0]) ? -5661831303811594199 : ((min(var_2, -2044722567)))))));
                        arr_46 [i_1] [i_12] = ((((!-5661831303811594193) <= ((((-2147483647 - 1) || (arr_42 [i_1])))))));

                        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                        {
                            var_28 = -6;
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (1 << 15);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_0] [i_1] [i_12] [i_0] [i_0] = ((var_5 ? 90 : 0));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_31 [i_0] [i_1] [i_1]);
                            arr_56 [i_0] [i_1] [i_15] [11] [i_1] = (((-(arr_11 [14] [14] [i_15]))));
                        }
                    }

                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        var_29 = (!15);
                        arr_59 [i_0] [i_1] [i_16] [i_16] = (min(-51, -1958479217));
                        arr_60 [i_16] [i_16] = ((((((arr_47 [i_1] [i_1] [10] [i_16] [i_0]) ^ (arr_29 [i_0])))) - ((~(arr_18 [i_0] [1] [i_16])))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_30 -= ((-(arr_57 [i_1])));
                        arr_63 [i_12] [i_17] = (((arr_22 [i_0] [i_1] [i_12] [i_1] [i_17]) || (arr_35 [i_17] [i_12] [i_1] [i_0])));
                        arr_64 [i_0] [i_0] [i_0] [6] [i_17] = (((arr_40 [i_0] [i_1] [i_12] [i_17]) ? var_4 : (var_1 && -104)));
                        var_31 ^= (arr_8 [i_0] [i_0] [i_0]);
                    }
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                {
                    arr_67 [i_0] [21] [i_1] [i_18] = ((((!((((arr_47 [i_0] [i_0] [i_1] [i_18] [i_18]) ? var_11 : (arr_53 [i_18] [i_18] [i_1] [i_0])))))) ? (((21 ? ((-8 ? -2147483647 : 13)) : -8))) : (min((var_0 / -21559), (-60 + var_14)))));
                    var_32 -= (max(-10570, ((0 ? 1034133559 : (arr_48 [i_0] [i_1] [8])))));
                }
            }
        }
    }
    var_33 -= var_8;
    #pragma endscop
}
