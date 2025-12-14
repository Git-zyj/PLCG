/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_2 ? var_10 : 0)) | var_4))) < var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_13 [i_2] [i_2] |= (!var_9);
                                var_13 = (min(var_13, var_4));
                                var_14 = ((var_7 ^ (((((max(var_5, var_7))) <= (max(var_2, var_8)))))));
                                var_15 = (((((var_6 + var_11) + 2147483647)) >> (((((((var_2 ? var_9 : 0))) ? (max(var_9, var_4)) : var_9)) - 3670348682))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_5] = var_7;
                                var_16 = (min(var_16, (((((max(var_3, var_8))) ? ((var_4 ? var_1 : var_6)) : var_7)))));
                                arr_17 [i_2] [12] = ((var_5 && ((((!var_2) ? var_3 : var_7)))));
                                var_17 = (max(var_17, var_4));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_18 = var_8;
                                arr_20 [19] [i_1] [i_2] [i_3] [i_6] [i_3] &= (!var_5);
                                var_19 += ((var_6 ? var_6 : var_8));
                                var_20 = var_5;
                            }
                            var_21 ^= (min((min(var_10, var_11)), var_11));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [i_1 + 3] [4] = 1073741824;
                                var_22 = (min((var_8 / var_4), (((min(var_9, -4)) | var_1))));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (((~(var_6 % var_1))))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_33 [i_10] [i_0] [i_0] &= ((var_0 ? var_5 : var_2));
                        var_24 = ((var_6 ? var_1 : var_7));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_25 *= ((var_10 / ((var_0 ? (min(var_0, var_11)) : ((var_9 ? var_9 : -1073741825))))));
                                arr_39 [i_0] [i_1] [i_10] [7] [i_13] = (((((((max(var_5, var_10))) > var_4))) == var_2));
                                arr_40 [15] [15] [i_13] [i_12] = (var_1 ? (var_9 < var_10) : var_9);
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    arr_44 [i_14] [i_0] [i_14] = 9223372036854775801;
                    var_26 = (max(var_26, (((((((((var_2 ? var_10 : var_0))) <= ((var_4 ? var_8 : var_5))))) >= var_2)))));
                    var_27 = ((~(min(var_1, var_3))));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_28 = var_6;
                    arr_48 [17] [i_1] [i_1] [i_1] = (((var_11 < var_0) - (var_5 - var_10)));
                    var_29 = (max(var_29, ((max(var_5, (var_7 % var_3))))));
                    arr_49 [i_0] [i_1] [i_15] = (min(var_4, ((var_2 ? (((var_8 ? var_0 : var_0))) : (var_5 + var_3)))));
                    arr_50 [1] [5] [5] = (((((max(var_5, var_11)))) * ((var_6 ? var_2 : var_1))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_30 = ((!((max(var_4, var_4)))));
                            var_31 = (min(var_31, (((((max(var_2, var_7))) ? 252 : var_11)))));
                        }
                    }
                }
            }
        }
    }
    var_32 = var_11;
    #pragma endscop
}
