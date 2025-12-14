/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_13 -= var_2;
        arr_2 [i_0] = ((((var_5 ? (0 || var_12) : ((var_12 & (arr_1 [i_0]))))) >> ((0 ? 6891437803355990079 : (57 / -4838)))));
        var_14 *= ((-(((arr_1 [i_0 - 4]) << ((0 ? 9365125510877319030 : 13))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_15 = (((arr_4 [i_1]) ? (((((var_0 ? var_3 : var_5))) ? (1 % 1) : ((var_3 ? (arr_3 [i_1]) : var_11)))) : (((((!var_4) == ((-(arr_12 [3] [3] [i_1])))))))));
                                var_16 = (arr_3 [i_3]);
                                var_17 ^= var_12;
                            }
                        }
                    }
                    arr_16 [i_1] [8] = (((((var_7 * (!var_9)))) ? ((min((arr_9 [i_1] [i_2]), (-670573136 % 68)))) : ((var_3 + (arr_3 [i_1])))));
                    var_18 = (!1);
                    arr_17 [i_1] [i_2] [i_3] [i_3] = (min(-965894752, 1));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((var_8 & (max(-13747402377365677412, var_5)))))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_20 = (arr_3 [i_7 + 2]);
                            arr_23 [i_7] [1] [1] [1] [1] = ((-55 >= (arr_18 [i_6] [i_6] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_21 = (((arr_0 [i_1]) ? (arr_8 [i_1]) : (arr_13 [i_1] [i_2] [1] [i_2])));
                            var_22 = var_6;
                            var_23 = ((1 ? -65 : -21347));
                            var_24 = var_6;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_1] [i_1] [1] [i_6] [i_1] [i_6] [1] = var_9;
                            arr_30 [i_1] [i_2] [i_3] [i_6] [i_2] = ((0 ? 48 : -49));
                            arr_31 [13] [i_2] [i_2] [i_3] [i_3] [i_9] = (var_3 >= (arr_11 [i_2] [i_3] [i_2] [i_9]));
                            var_25 = var_6;
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_26 = (((44193 / -1) / ((((((arr_28 [i_1] [i_2] [i_3] [i_6] [i_10]) ? 199 : 942191492))) | var_0))));
                            var_27 = ((1 ? -6594181166140761652 : 190));
                        }
                        var_28 = (min(var_28, (~1)));
                        var_29 = ((-((((((arr_25 [11] [i_2] [i_2] [i_2] [i_2] [i_2]) || var_6)) && var_2)))));
                    }
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        var_30 &= ((((((((2983364576 ? 6 : 32308))) ? (((arr_8 [i_1]) & var_3)) : ((min(var_5, var_1)))))) ? (min((((arr_25 [i_1] [i_2] [i_2] [i_11 - 2] [i_2] [i_11 - 1]) ? (arr_32 [i_1] [i_2] [i_3] [i_11] [i_2] [i_2] [i_1]) : var_1)), (~1))) : var_1));
                        var_31 = (((199 ^ 19077) & 56));
                        arr_38 [i_11] [i_11] [i_3] [i_3] [5] [i_2] = var_0;
                        var_32 = var_7;
                        var_33 = (max(var_33, (((((((arr_15 [i_1] [i_1] [i_2] [i_3] [i_2] [i_2]) ? (arr_15 [i_1] [i_1] [i_3] [i_11 - 2] [i_3] [i_11 + 1]) : (arr_15 [6] [i_2] [i_3] [i_2] [i_3] [i_1])))) ? ((((arr_20 [i_1] [i_2] [1] [i_11 - 2]) > (arr_25 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 2] [i_11 + 1] [i_11 - 1])))) : (arr_33 [i_1] [i_1] [6] [i_1] [i_11]))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_34 = (min(var_34, (((var_12 ? (arr_24 [2] [i_2] [14] [11] [15]) : (!var_4))))));
                        var_35 = (arr_4 [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_36 = ((113 ? (((16249 / 498052039) ? (max((arr_40 [8] [8] [8] [15]), 4673)) : ((-1 ? -1600381522 : -15124)))) : var_4));
                        var_37 = (min(((((min(377910064, 1)) * (arr_32 [7] [i_2] [i_2] [6] [i_2] [i_3] [7])))), (arr_42 [2] [i_2] [14] [14])));

                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            var_38 = (min(var_38, var_3));
                            var_39 = var_8;
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_40 += ((((((((var_10 + 9223372036854775807) >> var_1))) && (((var_11 << (((arr_7 [i_1] [6] [i_3]) + 5983))))))) ? ((((min(var_3, var_2))) ? (-8455 != 0) : (var_9 & var_4))) : (((arr_21 [i_1] [i_2] [i_3]) ? var_7 : (var_6 <= var_6)))));
                            var_41 = var_6;
                            var_42 = (min(var_42, (((-75 ? 1 : (-2147483647 - 1))))));
                            arr_51 [9] [i_2] [i_15] [i_15] [1] [i_15] = (((((var_2 > (arr_7 [i_13] [i_2] [i_3])))) - (arr_21 [i_1] [i_2] [i_2])));
                            var_43 = ((((var_11 & ((var_3 ? var_12 : (arr_9 [i_1] [2]))))) ^ ((((((var_4 % (arr_9 [i_2] [i_2])))) ? (var_5 != var_0) : (~-6))))));
                        }
                    }
                }
            }
        }
        arr_52 [i_1] [i_1] = (min(((var_4 ? (arr_13 [i_1] [i_1] [i_1] [4]) : (arr_47 [i_1] [10] [i_1] [i_1] [i_1]))), (0 * 0)));
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            {
                arr_60 [i_16] [i_16] [14] &= 6;
                arr_61 [i_16] [i_17] [i_16] = (~64113);
            }
        }
    }
    #pragma endscop
}
