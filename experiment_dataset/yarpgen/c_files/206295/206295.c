/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((-(((arr_4 [i_2]) + (arr_0 [i_0]))))) * 0)))));
                                var_19 += (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] = var_12;
                                arr_20 [7] [7] [i_2] [7] [i_6] [i_6] = (~228);
                                var_20 ^= (min(((var_3 ? (arr_1 [i_0] [i_0]) : 1)), ((~((max(var_9, -5377)))))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_1 - 1] [i_1] [i_1] = ((~(min((((var_12 ? var_10 : var_6))), var_13))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_0] [3] [7] [i_0] [i_0] &= (((arr_0 [i_1 - 1]) ? var_14 : var_6));
                        arr_28 [i_0] [17] [i_0] [i_0] [i_7] [i_8] = ((27 ? 1 : 1));

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 -= arr_30 [i_0] [i_1] [4] [i_8] [i_9];
                            arr_33 [i_0] [i_1] [i_7] [i_8] [i_1] [i_9] = arr_32 [i_0] [i_1] [20] [i_1] [i_1] [i_8] [i_9];
                            arr_34 [i_0] [i_0] [i_0] = (arr_24 [i_0] [i_1] [i_8] [i_9]);
                            var_22 = (min(var_22, ((((arr_10 [i_7] [i_7] [i_7] [i_7]) ? -37 : var_11)))));
                        }
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            arr_40 [i_0] [0] [4] [i_10] [i_10] = ((-7197883521017103184 & (~var_0)));
                            var_23 = (~var_12);
                        }
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            var_24 ^= ((508772486 ? (arr_1 [i_1 - 1] [9]) : 14));
                            arr_43 [i_0] [i_0] [i_0] [i_10] [i_0] = var_12;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_25 = ((-100 ? 8 : 16320));
                            var_26 = (max(var_26, ((((arr_12 [i_7] [13] [i_10 - 1] [22] [i_13] [15]) + (arr_42 [8] [8] [i_10 - 1] [i_13] [i_13]))))));
                            arr_48 [i_13] [i_10] [i_0] [i_7] [i_0] [i_10] [i_0] = 2549266621;
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_51 [i_0] [i_10] [i_14] = (~var_17);
                            arr_52 [9] [13] [i_10] [1] [i_14] = (((((var_16 ? var_15 : var_3))) ? (arr_25 [6] [i_1 - 2] [6] [6]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [21] [i_0] [i_0])));
                        }
                        arr_53 [i_10] [i_1 - 3] [i_1] = ((-((var_4 ? var_11 : (arr_9 [i_0] [i_1] [i_1 - 1] [i_7] [i_7] [i_10 + 1] [i_10])))));
                        arr_54 [i_10] [14] [i_10] = var_0;
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_27 = (max(var_27, (((var_14 ? ((var_2 ? var_17 : var_14)) : (~var_17))))));
                        var_28 += ((-(arr_31 [i_0] [i_1 - 1] [i_0] [i_0] [i_0])));
                        var_29 += var_3;
                        var_30 = (min(var_30, (~205)));
                        var_31 = (min(var_31, (!var_14)));
                    }

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        arr_60 [i_1] [i_1] [i_7] [i_1] = (~67108863);

                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            arr_64 [i_17] [10] [i_7] [i_0] [i_0] = -6149;
                            var_32 = 110;
                            arr_65 [i_0] [i_0] [i_7] [i_0] [i_17] = 3030970450393475502;
                            var_33 -= var_7;
                        }
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            arr_68 [22] [i_1] [i_7] [i_16] [14] = (arr_58 [i_0] [i_1] [i_1] [i_7] [i_1] [i_18]);
                            var_34 = (-9223372036854775803 / 255);
                            var_35 ^= var_11;
                            arr_69 [i_0] [i_1] [i_7] [i_18] [i_16] = (((arr_23 [i_0] [i_1 - 2] [i_0] [i_0]) ? var_7 : (arr_23 [i_1] [i_1 - 2] [i_1] [i_1 + 1])));
                        }
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_36 = (max(var_36, var_3));
                        arr_73 [i_0] [i_1] [i_7] [i_1] &= (arr_58 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                        arr_74 [i_0] &= ((~(arr_10 [i_0] [i_1 - 2] [i_7] [i_19])));
                    }
                }
                for (int i_20 = 1; i_20 < 1;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_37 ^= (max(((min(1, 222))), 19170));
                                var_38 = (min(var_38, (((1 ? 1 : 0)))));
                            }
                        }
                    }
                    var_39 *= -1;
                }
                var_40 = var_6;
            }
        }
    }

    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        arr_83 [i_23] [i_23] = ((~((19617 ? 15371 : -26073))));
        arr_84 [i_23] [i_23] = (max((~0), ((~(~var_6)))));
    }
    #pragma endscop
}
