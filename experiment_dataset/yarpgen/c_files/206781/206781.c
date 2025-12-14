/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((min(var_3, var_6)) - (var_11 - 119)))) ? var_2 : ((((var_7 ? var_13 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] = ((((max((arr_6 [i_0] [i_0] [i_0] [i_0]), -var_8))) || (arr_4 [i_1] [i_1])));
                    arr_10 [i_0] [i_1] [i_2] = (((arr_3 [13] [i_0]) ? (arr_8 [i_2] [2]) : (arr_6 [i_2] [i_1] [i_1] [i_0])));
                    var_17 = ((!((max((arr_0 [i_2]), 131064)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_3] [i_3] [i_1] [i_2] [i_1] [i_1] = var_2;
                                arr_18 [i_1] = ((((((((12978260485482056575 ? 0 : var_9))) ? var_6 : (-1 || 5468483588227495041)))) ? (arr_11 [i_1]) : ((var_13 ? var_15 : (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                    arr_19 [i_1] = (max((arr_2 [14] [14]), ((!(arr_2 [i_2] [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 *= (arr_0 [i_0]);
                    var_19 = (min(var_19, (((arr_11 [i_1]) ? -25 : var_6))));
                    var_20 = (arr_15 [i_0] [i_1] [i_1] [i_5] [i_5]);
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_21 = (min(var_21, -var_15));
                            arr_27 [i_1] = (-(((arr_12 [i_1] [i_6 - 2] [i_1] [i_6 - 1] [i_6 - 1] [i_6 + 1]) * var_6)));
                            var_22 ^= (max(((-848 & ((4040228628 | (arr_24 [i_0] [i_0]))))), (~var_15)));
                            arr_28 [i_0] [i_1] [i_7] = (((var_11 | var_1) - (!12978260485482056575)));
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_23 = (!1);

        /* vectorizable */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_24 += 254738667;

            for (int i_10 = 4; i_10 < 13;i_10 += 1)
            {
                var_25 -= (((arr_30 [i_8]) ? (arr_26 [i_9 - 1] [i_10] [i_10] [i_10 - 4]) : ((-5185 ? var_6 : -255977636))));
                var_26 = 3284197406205571890;
                var_27 |= ((1 ? var_4 : 30213));
            }
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                arr_41 [i_8] [i_8] = 0;
                var_28 -= (var_7 > 1);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_29 = (((!(arr_32 [i_8] [i_9]))));
                            arr_50 [i_8] [i_12] [i_11 + 1] [i_9] [i_8] = (((-45295843453150138 * -117) || (((~(arr_8 [i_9] [i_12]))))));
                        }
                    }
                }
                var_30 = (arr_12 [i_11 + 1] [1] [i_9] [i_9] [i_8] [i_8]);
                arr_51 [i_11] [i_8] [i_8] [i_8] = (((arr_14 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_9 + 4]) & var_15));
            }
            var_31 = (-117 ? var_14 : (arr_48 [i_9 - 1] [i_9 + 4] [i_9 - 1] [i_9 + 4] [i_9] [i_9 + 3]));
            var_32 = (((arr_31 [i_8] [i_9 + 4]) >> var_10));
        }

        /* vectorizable */
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            var_33 = (((arr_25 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 2]) > (arr_25 [i_14 + 1] [i_14 - 2] [i_14 - 2] [2] [i_14])));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    {
                        var_34 = (arr_59 [i_14 - 1] [i_8] [i_8] [i_8]);
                        var_35 = var_15;

                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            var_36 = var_8;
                            arr_63 [i_8] [i_17] [i_15] [7] [i_17] = (var_5 - (arr_58 [i_15 - 1]));
                            var_37 = (((var_12 + (arr_33 [i_8]))));
                        }
                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            var_38 = ((((((-9223372036854775807 - 1) / 3593604950859226997))) ? (arr_64 [11] [11] [i_14 + 1] [i_8]) : 2919632675));
                            var_39 = var_1;
                        }
                        for (int i_19 = 1; i_19 < 13;i_19 += 1)
                        {
                            var_40 = (((arr_47 [i_14 - 2] [i_14 - 2] [i_14 - 2]) >> (((arr_16 [i_14 - 2] [i_19 + 1] [i_19] [i_19] [i_19 + 1]) + 129398128471343428))));
                            var_41 = (!-117);
                            var_42 = (((arr_49 [i_8] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_8]) / (arr_49 [i_8] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 + 1])));
                        }
                        var_43 = 0;
                    }
                }
            }
            var_44 = ((var_15 | (arr_46 [i_14 - 2] [i_14 + 1] [8] [i_14 - 1])));
        }
        /* vectorizable */
        for (int i_20 = 2; i_20 < 12;i_20 += 1)
        {
            var_45 &= (-1 - var_12);
            arr_73 [i_8] [i_8] = (((arr_70 [i_20] [i_20] [i_20] [i_20 - 1] [i_20 - 2] [i_20 - 1] [9]) ? (arr_70 [i_20] [10] [13] [i_20] [i_20 - 2] [i_20 - 1] [i_20 - 1]) : (arr_70 [1] [8] [i_20] [2] [i_20 - 2] [i_20 - 1] [i_20])));
        }
        var_46 = min(var_14, ((-(arr_11 [i_8]))));
        var_47 = (arr_49 [i_8] [i_8] [i_8] [12] [i_8] [i_8]);
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 12;i_21 += 1)
    {
        arr_76 [i_21] = (((arr_49 [4] [i_21] [i_21] [i_21] [i_21] [i_21]) ? (arr_53 [i_21] [i_21 - 1]) : var_4));
        var_48 = (arr_29 [i_21] [i_21]);
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 19;i_22 += 1)
    {
        var_49 = var_13;
        arr_80 [i_22] [i_22] = (((arr_79 [i_22]) || var_0));
    }
    #pragma endscop
}
