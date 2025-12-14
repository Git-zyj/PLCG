/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_2] [i_2] = 91;
                    arr_9 [i_2] [i_1] [i_2 + 1] = -2092580919;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (arr_4 [i_2 - 2] [i_2] [i_2 + 1]);
                        arr_12 [i_2] = arr_3 [i_3] [i_1];
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_15 = (arr_1 [i_0]);
                            var_16 = (arr_17 [i_0] [i_2 - 2] [i_2 - 2]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_17 *= (((arr_18 [i_0] [i_0] [1] [i_0]) ? (arr_4 [i_2 - 1] [i_2] [i_4 - 1]) : (arr_15 [i_0] [i_1])));
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_4 + 1] = ((255 ? 175 : (arr_2 [i_0])));
                            var_18 = (((arr_20 [i_2] [i_1] [i_4 + 1] [i_2 + 1] [i_4 + 1] [8] [i_6]) % (arr_4 [i_4 + 2] [i_1] [i_2 - 2])));
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_2] = (arr_2 [i_0]);
                    }
                    arr_23 [i_0] [i_2] [i_2] = 21;
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [10] [i_1] = (arr_11 [i_7 - 2] [i_1] [i_7 - 2] [i_1]);
                    var_19 = (min((min(((((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [12] [i_1]) + (arr_4 [i_0] [i_0] [i_7])))), 7826526789932605358)), (((~(min(-2092580919, (arr_27 [i_0] [i_0] [i_0]))))))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_31 [i_8] [i_7] [i_1] [i_8] = 3656898478;
                        var_20 = (arr_0 [8]);
                        arr_32 [i_0] [i_8] [i_7 + 1] [i_8] = ((((arr_25 [i_7 - 1] [i_7 - 2] [i_7 - 1]) ? (arr_25 [i_7 + 1] [i_7 - 2] [i_7 - 1]) : -2092580943)));
                        var_21 ^= arr_13 [i_0] [i_8] [i_7] [9];

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_22 = (arr_7 [i_9 - 2] [i_8]);
                            arr_36 [i_0] [i_8] [i_7] [i_8] [i_8] [i_9] = 229;
                            arr_37 [i_0] [i_0] [i_8] [i_0] [1] = 6717874192641093778;
                        }
                        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_23 = (91 ^ 6717874192641093795);
                            var_24 = var_1;
                        }
                        for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_25 = max((arr_18 [i_0] [i_1] [i_7 - 1] [i_8]), ((max((arr_18 [i_0] [i_1] [i_7 - 1] [i_8]), (arr_34 [i_0] [i_1] [i_8] [i_0] [i_11])))));
                            arr_44 [i_0] [i_1] [i_11] [i_8] [i_8] = (max(((-559507179686590235 ^ (18446744073709551615 * 1))), 0));
                            var_26 = 4294967287;
                            var_27 = 9223372036854775807;
                        }
                    }
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        arr_47 [i_0] [i_12] [4] = (min((max((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]), 6144)), -32));
                        arr_48 [7] [i_7] [i_7] [4] [i_12] [i_12] = ((91 * (arr_18 [i_0] [i_1] [i_0] [i_12 + 1])));
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    var_28 = (var_2 % 255);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_57 [i_13] [i_13] [i_13 - 2] [i_14] [7] = ((~(arr_40 [i_0] [i_14] [11] [i_14] [i_15 + 1])));
                                var_29 = (arr_49 [i_0]);
                            }
                        }
                    }

                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_30 = (min(var_30, ((((~(arr_13 [i_13] [i_13] [i_13 - 2] [i_13 - 2])))))));
                        arr_60 [i_0] [i_16] [i_13] = 9223372036854775807;
                        var_31 = (max(var_31, ((((arr_33 [i_13 + 1] [i_1] [i_13] [i_16] [i_1] [i_13] [4]) ? 32768 : 8)))));
                        var_32 = (arr_5 [i_13 - 2] [i_13 - 2] [i_0] [i_13 - 1]);
                    }
                    arr_61 [i_0] [i_1] = ((((6150 ? var_2 : (arr_50 [1] [i_1] [i_13 - 1]))) & (arr_3 [i_0] [i_13 - 2])));
                }
                arr_62 [i_0] [i_0] &= (arr_35 [i_0] [i_0] [6] [i_1] [i_0] [6] [6]);
                var_33 = -19;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            {

                /* vectorizable */
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_34 ^= 6717874192641093795;
                    var_35 *= ((8 ? (arr_64 [i_17 + 2] [2]) : (arr_64 [i_17 - 3] [1])));
                    var_36 = (!0);
                    arr_70 [3] [18] [i_17] [12] = (((arr_64 [i_17] [i_17]) ? (arr_66 [i_17] [i_17 - 2]) : 239));
                    var_37 = ((-(arr_66 [i_17] [1])));
                }
                arr_71 [i_17] [i_18] [i_17] = (max((arr_69 [i_17 + 1] [i_18]), ((max(1, 55)))));
            }
        }
    }
    #pragma endscop
}
