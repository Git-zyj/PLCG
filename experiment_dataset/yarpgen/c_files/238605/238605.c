/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_1] = (min(((var_2 ? (arr_1 [i_2]) : (arr_1 [i_0 - 2]))), var_2));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0 - 1] [i_1] [i_1] [i_3] [i_3] [i_0 - 1] = (arr_1 [i_0 - 2]);
                            arr_13 [i_0] [i_1 - 4] [i_1] [i_3] [i_4] = ((~((1136515960 ^ (arr_6 [i_0 + 2] [i_1] [i_1])))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_12 = (min(var_12, (((var_0 ? var_2 : 249)))));
                            var_13 = (min(var_13, ((((arr_8 [i_0 + 2]) ^ (arr_8 [i_0 + 3]))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_19 [i_1] [i_0] [i_2] [i_0] [i_1] = var_0;
                            arr_20 [i_6] [i_1] [i_3] [i_2] [i_1] [i_0] = (((arr_15 [i_0] [i_2] [i_2] [i_6]) == (arr_15 [i_0 + 3] [i_2] [i_3] [i_6])));
                            var_14 |= ((4158412136 ? ((var_3 ? 24149 : 114)) : (arr_3 [i_1 - 2])));
                            var_15 *= ((8318577710467480120 ? 18446744073709551615 : (((var_11 >> (136555181 - 136555166))))));
                            var_16 = (min(var_16, ((((arr_1 [i_0 + 1]) % (arr_1 [i_0 + 3]))))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_3] = 1;
                        arr_22 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_3] = (((arr_18 [i_0 + 3] [i_1] [i_1] [i_0 + 3] [i_1] [i_1] [i_1 + 4]) <= (arr_18 [i_0 - 2] [i_0] [i_1] [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 4])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_17 = ((!(((18446744073709551607 ? var_5 : var_7)))));
                        var_18 = (arr_26 [i_7] [i_7] [i_1] [i_1] [i_2]);
                    }
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    var_19 *= 1;
                    arr_31 [i_0] [i_0] [i_0] [i_1] = (((((arr_23 [i_0 + 3] [i_1] [i_0 + 3] [i_8 - 1]) > (arr_16 [i_8 + 1] [i_1] [i_1 - 2] [i_8 + 1] [i_1]))) ? (var_4 | var_7) : (((((min(var_5, 229))) && var_9)))));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_34 [i_1] = ((min((arr_23 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]), var_8)));
                    var_20 ^= (((arr_0 [i_1]) ? (var_4 - -10) : ((((67108863 ? var_11 : (arr_28 [i_0] [i_1] [i_9])))))));
                }
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    arr_37 [i_0] [i_0] [i_1] [i_10] = var_10;

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_21 += var_6;
                        arr_40 [i_0 - 2] [i_1] [i_0 + 1] [i_0 - 1] = ((((-(~4227858419))) % var_10));
                        var_22 = (1 | var_5);
                    }
                    arr_41 [i_0 + 3] [i_1] [i_1] = (((((((var_6 ? 8 : var_0)) ^ (((min((arr_33 [i_0 + 1] [i_1] [i_10]), var_10))))))) ? ((~(arr_38 [i_0 - 2] [i_0 + 3] [i_1 - 2] [i_1 - 2] [i_10 - 1]))) : (arr_39 [i_0 + 3] [i_0 - 1] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_23 = ((~(arr_2 [i_0 + 2] [i_1])));
                                arr_48 [i_1] [i_0] [i_1] [i_10 - 1] [i_12] [i_13] = (((arr_27 [i_0] [i_0] [i_12] [i_1]) ? var_9 : ((((arr_32 [i_0] [i_10] [i_12] [i_13 - 1]) < (arr_0 [i_13 + 1]))))));
                                arr_49 [i_10] [i_10] [i_10] [i_13 + 1] [i_10] [i_10] [i_1] = 16383;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_52 [i_14] [i_14] [i_1] = (((var_2 & 1) ^ -var_2));
                    var_24 = (arr_17 [i_0] [i_14]);
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_59 [i_0 - 2] [i_1 + 2] [i_1] [i_15] [i_16] [i_1] = 18446744073709551602;
                                var_25 |= ((((((((var_8 ? var_11 : 2080374784))) ? var_4 : ((((arr_57 [i_1] [i_1] [i_15] [i_1] [i_1] [i_1] [i_17]) ? 1 : (arr_51 [i_0] [i_1 - 3] [i_1 - 3]))))))) ? (min((arr_53 [i_15] [i_16] [i_16] [i_16]), (~var_9))) : (arr_1 [i_15])));
                                arr_60 [i_0] [i_1] [i_15] [i_15] |= ((var_9 ? (arr_17 [i_0 + 1] [i_17 - 4]) : ((min((arr_42 [i_0 - 1] [i_0 + 1] [i_0] [i_1 + 2] [i_15]), 193)))));
                            }
                        }
                    }
                    var_26 = (arr_6 [i_0] [i_0] [i_15]);
                }
                arr_61 [i_1] [i_1] = var_6;
            }
        }
    }
    var_27 = -9008;
    var_28 *= var_4;
    #pragma endscop
}
