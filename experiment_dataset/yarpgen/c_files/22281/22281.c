/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (-25 <= -12);
                        arr_9 [i_0] [i_1] [i_0] = (((var_14 == var_5) << (-30 + 36)));
                        var_17 = 126;
                        var_18 |= var_12;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_19 = (((arr_3 [14] [i_1] [i_0]) ? (arr_6 [i_1]) : -34));
                        arr_12 [4] [13] [5] [i_1] = (((arr_0 [6] [i_1 - 1]) ? (arr_10 [i_1] [i_1] [i_4] [i_4]) : ((-(arr_5 [i_1] [i_2] [i_1])))));
                        arr_13 [i_1] [i_1 - 1] = ((var_12 ? (((var_13 == (arr_2 [i_4])))) : (arr_0 [i_1 + 1] [i_1 - 1])));
                        var_20 = arr_5 [i_1] [0] [i_1 + 1];
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_16 [i_1 + 1] [i_1] [i_1] [i_0] = (((((arr_2 [i_0]) + 2147483647)) << (!29)));
                        arr_17 [i_5] [i_1] [i_1] [i_0] = (((-38 <= -64) ? ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : var_5));
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_21 = var_3;
                            var_22 = ((-((-86 ? var_15 : -120))));
                            var_23 = (min(var_23, ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ? ((-18 ^ (arr_8 [i_0] [i_2]))) : (arr_19 [i_0] [i_0] [i_0] [i_2] [11] [i_7]))))));
                            arr_24 [i_0] [i_1] [i_2] [4] [14] |= -119;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_24 = ((-8 / (arr_0 [i_8] [i_6])));
                            var_25 = (min(var_25, ((((arr_14 [i_1 - 1] [i_1 - 1]) > 0)))));
                            arr_27 [i_0] [13] [i_1] = (((~var_7) ? ((var_8 ? var_13 : (-127 - 1))) : var_9));
                            var_26 = arr_14 [i_6] [i_8];
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_27 = (4 * -30);
                            var_28 *= ((-(arr_11 [i_1 - 1] [i_1 + 1] [14] [i_1] [i_1 - 1] [i_6])));
                        }
                        var_29 ^= (((arr_23 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_23 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    }
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    arr_33 [i_10] [i_1] [1] = (max(((~(arr_21 [i_10 + 1] [i_1] [8] [i_0] [i_0]))), ((~(~var_7)))));
                    arr_34 [i_1] [i_1] [i_1] = (((((120 ? 29 : -20))) ? var_11 : ((((var_15 * (arr_19 [i_10 + 1] [i_10 + 1] [i_10 + 1] [13] [i_1 + 1] [i_0]))) / (-127 - 1)))));
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_30 = var_11;
                    var_31 = 27;
                    var_32 &= (arr_1 [i_1 - 1]);

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_0] [11] [i_11] [i_12] [i_1] = ((var_7 < (var_9 <= -63)));
                            var_33 = 93;
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            var_34 = (((arr_32 [i_1 + 1] [i_1 + 1]) < (arr_19 [i_0] [i_1 - 1] [i_0] [i_0] [i_1 - 1] [i_1])));
                            var_35 = 64;
                            var_36 &= arr_20 [i_0] [i_12];
                        }
                        arr_46 [i_0] [i_1] [i_11] [i_12] &= var_11;

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_37 += (4 * -39);
                            var_38 *= ((!(((var_4 ? var_14 : var_11)))));
                            var_39 &= var_6;
                        }
                        var_40 = (arr_0 [13] [i_1 + 1]);
                    }
                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        arr_51 [i_11] [i_16] [i_16] [i_1] = (((((((arr_19 [i_0] [i_1] [i_1 - 1] [i_11] [i_1] [i_16]) ? -72 : (arr_18 [5] [i_1 + 1]))) + 2147483647)) << (((-63 + 71) - 8))));
                        arr_52 [i_0] [8] [14] [i_1] = arr_32 [i_1 - 1] [i_0];

                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            var_41 = 122;
                            var_42 = arr_15 [i_1];
                            var_43 = ((-63 ? var_5 : ((53 & (arr_26 [i_0] [i_0] [i_0] [i_0] [14] [1])))));
                            var_44 &= var_15;
                        }
                    }
                    for (int i_18 = 3; i_18 < 14;i_18 += 1)
                    {
                        arr_59 [i_0] [i_1] [i_1] [i_18] = arr_23 [i_0] [i_0] [i_1 - 1] [i_18 - 2] [i_18 - 3] [i_18 - 1] [i_18 - 3];
                        var_45 = (38 ^ 107);
                        arr_60 [i_1] [i_1 - 1] [i_1] = (((arr_30 [i_1 + 1] [i_1] [i_18] [i_11] [i_1 + 1] [i_1] [14]) ? var_1 : (arr_1 [i_1 + 1])));
                    }
                }
            }
        }
    }
    var_46 = (max(var_46, ((((((max(-67, var_13)))) / ((-84 ? 13 : 19)))))));
    var_47 = var_12;
    #pragma endscop
}
