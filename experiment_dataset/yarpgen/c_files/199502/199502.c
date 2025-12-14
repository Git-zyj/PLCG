/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (max((min(253, 1605039611)), ((~((1130688114 ? var_5 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_16 ^= ((var_4 ? (((var_1 | (arr_9 [i_0] [16] [i_2 + 2] [i_0] [16])))) : var_10));
                                var_17 = (max(var_17, (arr_5 [i_0] [i_0])));
                                arr_11 [2] [8] [i_2] [13] [i_2 - 1] [i_2] = ((!(arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_18 = (((arr_13 [i_1 + 1] [i_5]) | (arr_4 [i_0] [i_0] [i_0 + 1] [i_0])));
                                var_19 = ((-(((arr_5 [i_0] [i_0 - 1]) ? (1 | 251) : 85702711))));
                            }
                            for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                arr_18 [1] [i_3 + 3] [i_6] [i_6] [1] [i_0] = (-(((arr_14 [i_0] [13] [13] [13] [i_0 - 3] [i_0]) * var_8)));
                                var_20 += 1879048192;
                                var_21 = 4226168190;
                                var_22 = (max(var_22, (arr_6 [6] [i_1] [i_1 + 1])));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                            {
                                var_23 += (~18446744073709551615);
                                arr_22 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_7 + 2] = (-(arr_8 [i_0] [i_1 + 1] [i_3 + 3] [i_0]));
                                var_24 = ((((((arr_20 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_2 + 2] [i_0 + 1]) + (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (arr_0 [i_0 - 1]) : (arr_19 [i_0 - 2] [18] [i_0] [i_0 - 4] [i_0] [i_0 - 4])));
                                var_25 -= (-85702711 ? var_13 : 487509919);
                            }
                            var_26 ^= arr_8 [i_1 - 1] [i_2 + 1] [i_3] [i_3 - 1];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_27 = (arr_6 [i_1] [i_8 - 1] [i_9]);
                            var_28 = (max(var_28, 0));

                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                var_29 = (arr_24 [i_10] [1] [i_10]);
                                var_30 += 63;
                                arr_33 [i_9] [i_9] [i_8] [i_8] [i_8 + 1] = (((0 ^ 1) ^ (((~(arr_28 [0] [i_0 - 3] [i_9] [i_9]))))));
                            }
                            for (int i_11 = 2; i_11 < 16;i_11 += 1)
                            {
                                var_31 = (max(var_31, (((-(max(-1, 1)))))));
                                var_32 ^= (((max((arr_10 [9] [i_1] [9] [i_9] [10]), 253)) >> ((((-(arr_27 [i_0] [i_11]))) + 76))));
                                var_33 += (arr_35 [1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                var_34 ^= (arr_36 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]);
                                var_35 = (((min((((var_11 ? 1 : (arr_9 [i_0] [i_1 - 1] [i_8] [i_9] [i_11])))), (max((arr_0 [i_0 - 2]), var_11))))) ? var_5 : (609274926 ^ var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 7;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 6;i_16 += 1)
                        {
                            {
                                var_36 = -var_8;
                                arr_50 [i_15] [i_14] = (arr_44 [i_13 + 3] [i_15] [i_13 + 3] [i_12]);
                                arr_51 [i_15] [i_13] [i_13] [i_13 + 1] [i_13 + 3] = ((+(((arr_6 [i_12] [i_15] [i_16]) ? -85702712 : (arr_6 [i_12] [i_12] [i_12])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 7;i_18 += 1)
                        {
                            {
                                var_37 = (max(var_37, var_6));
                                var_38 = (((((var_3 || (arr_47 [i_12] [i_13] [i_17]))) ? ((-(arr_1 [i_12]))) : (69 && var_2))) == (((-((1 >> (166 - 138)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
