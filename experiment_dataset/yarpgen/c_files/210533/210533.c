/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 *= (max(-1, (min(127, 2047))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3 - 1] [i_0] [i_3] [i_4] [i_3] [i_1] = (((((-(arr_2 [i_3 + 1])))) ? ((-var_4 - (arr_0 [i_4]))) : (((var_1 + 65532) - var_4))));
                                var_11 = (max(var_11, (arr_2 [i_0])));
                                var_12 = (arr_6 [i_0] [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = (((((arr_2 [i_3 - 3]) ? (arr_1 [i_3 - 3]) : -32)) & ((((arr_8 [i_3] [i_3 - 4] [i_3] [i_0] [i_3]) > (arr_1 [i_3 - 3]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((var_5 <= (var_0 < 13815)));
        arr_15 [i_0] = min((((((var_9 / (arr_3 [i_0])))) ? 63488 : 63489)), 6);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] = var_0;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_13 = var_9;
                                var_14 = ((((min(1, 2061))) ? (-127 > var_1) : (min(var_7, var_8))));
                                arr_31 [i_5] [i_5] [i_5] = (((((((-9 ? var_0 : var_6))) && (var_2 && var_4))) || ((min(-10353, (arr_29 [i_6] [i_5] [5] [i_6 + 1] [i_6 + 1] [i_7] [i_9 + 1]))))));
                                arr_32 [i_5] [i_5] [i_5] = 2055;
                            }
                        }
                    }

                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        var_15 *= ((!(((((min(65532, 1))) ^ 65532)))));

                        for (int i_11 = 3; i_11 < 24;i_11 += 1)
                        {
                            var_16 = (+-1);
                            var_17 = (min(var_17, ((-((var_6 ? var_7 : var_3))))));
                            var_18 -= (-(arr_16 [i_7] [i_6 + 1]));
                            var_19 += 48954;
                            arr_38 [i_11] [i_5] [i_7] [i_5] [i_5] = ((~(((((((-127 - 1) > var_6))) != ((((arr_21 [i_5] [i_5]) < var_9))))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            var_20 = (arr_27 [i_5] [i_5] [1] [i_10] [i_12] [i_12] [i_10 + 1]);
                            var_21 = ((10353 ? 53750898 : (arr_40 [i_10 + 1] [i_6 + 1])));
                            var_22 = -10346;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_43 [i_5] [i_7] [i_7] [i_5] [i_13] &= (((((-2521231724717828458 ? 2070 : 2052))) ? ((1 ? var_7 : 1)) : ((0 ? -113 : var_1))));
                            var_23 = ((~(arr_20 [i_5] [i_5])));
                        }
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_24 += (max((var_4 >> var_1), ((71 ? 58199 : 65535))));
                            arr_48 [i_5] [i_6] [i_5] [i_6] [i_15] = ((1 ? -1 : ((((((arr_27 [i_5] [i_6] [i_7] [i_7] [i_15] [i_15] [i_15]) ? var_2 : var_7)) != (!1))))));
                        }
                        var_25 = (i_5 % 2 == zero) ? (((((((arr_47 [i_14] [i_14] [i_7] [i_6] [i_5] [i_5]) || (((3023313724172860403 ? -3023313724172860404 : var_7)))))) + (max((var_3 <= var_4), ((var_4 << (((arr_21 [i_5] [i_5]) + 6409))))))))) : (((((((arr_47 [i_14] [i_14] [i_7] [i_6] [i_5] [i_5]) || (((3023313724172860403 ? -3023313724172860404 : var_7)))))) + (max((var_3 <= var_4), ((var_4 << (((((arr_21 [i_5] [i_5]) + 6409)) + 7684)))))))));
                    }
                }
            }
        }
        var_26 = 597663656;
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_27 *= ((((((2047 + var_6) ? 2949606126 : var_6))) ? ((-(arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) : (((var_4 ? 65535 : var_9)))));
        var_28 = 63510;
        arr_51 [i_16] = 0;
    }
    var_29 = var_0;
    #pragma endscop
}
