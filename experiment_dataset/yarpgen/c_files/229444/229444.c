/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((var_5 ^ (~5430373366131435986))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_1] = (~var_7);
                var_14 -= max(16, 127);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 -= (arr_3 [i_2]);
                            var_16 = (max((((~15867429803024090485) >= (var_5 || var_6))), (arr_11 [i_1] [i_1])));
                        }
                    }
                }
                var_17 |= ((((((max(2579314270685461131, (arr_0 [i_0])))) ? (arr_13 [i_0] [10] [i_0] [i_0] [19]) : ((((arr_11 [i_0] [i_0]) != -16)))))) ? (max((arr_3 [i_0]), 15867429803024090516)) : ((((((((arr_7 [i_0] [i_0] [i_0 - 1]) ? var_12 : (arr_7 [i_0] [i_0] [i_0]))) + 2147483647)) << var_10))));
                arr_14 [i_0] [i_0] |= ((max((((arr_4 [i_0] [i_1]) ? (arr_10 [i_0] [i_1] [i_0] [i_0 + 2]) : 0)), 18)) <= ((((var_12 > (var_0 < var_3))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_18 = (max(((((arr_17 [i_4 + 2] [i_6]) ? (arr_17 [i_4 + 1] [i_5]) : (arr_17 [i_4] [i_5])))), 2579314270685461131));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_19 -= (max(-1914548437, (((+(((arr_11 [19] [i_5]) & var_1)))))));
                                arr_25 [i_4 - 1] [i_5] [i_6] [i_7] [i_7] [i_8] [i_6] |= (max((max(((2579314270685461130 | (arr_17 [i_6] [i_6]))), var_0)), (((-(arr_0 [i_4 + 2]))))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_20 |= (arr_9 [i_9]);
                                arr_33 [i_4] [i_10] = (arr_21 [i_4] [i_5] [i_9] [i_10]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        arr_37 [i_4] [i_5] [i_9] [i_4] = (~-447319756578377448);
                        var_21 = ((171 ? (!5) : ((var_3 ? (arr_30 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : var_7))));
                    }
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_22 += ((20 ? ((((arr_28 [2] [i_5] [2]) != (~var_4)))) : ((~(~var_1)))));
                    arr_42 [i_4] [16] [0] [i_4 - 1] |= -106;
                    arr_43 [i_4] [i_4] [i_13] = ((!(((((arr_18 [i_4] [i_5] [i_13]) == 1))))));
                }
                arr_44 [i_5] [i_4] = ((((((arr_5 [i_4] [i_5] [i_5]) ? (arr_5 [i_4] [i_4 + 1] [i_4 - 1]) : (arr_5 [i_4 + 1] [i_5] [i_5])))) + (((arr_32 [i_4] [1] [i_5] [i_4 + 2] [i_4] [i_4] [i_4]) / (arr_3 [i_4])))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_52 [i_4] [i_14] [i_14] [i_15] = 16;
                            var_23 ^= (max(977123638, -14));
                            var_24 = (max(15867429803024090520, var_10));
                        }
                    }
                }
                arr_53 [i_4] = var_9;
                var_25 = 4294967271;
            }
        }
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_26 = var_0;
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 10;i_19 += 1)
                {
                    {
                        arr_65 [i_16] [i_17] [i_19] = (-(((((arr_10 [i_16] [i_17] [i_18] [i_16]) ? (arr_7 [i_16] [i_16] [i_16]) : var_7)) | (arr_12 [i_16] [i_17]))));
                        var_27 -= (arr_62 [i_19 + 1] [i_19] [i_19 - 2] [i_19 + 1]);
                        arr_66 [i_16] [i_16] [i_16] [i_16] = var_4;
                        var_28 ^= (((((arr_15 [i_19 - 4]) ^ (arr_15 [i_19 - 4]))) < (((1 && (arr_15 [i_19 + 1]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_29 -= arr_38 [i_20];
        arr_70 [2] &= (((arr_49 [i_20] [16] [i_20] [16]) < (arr_50 [i_20] [4] [i_20] [i_20])));
    }
    #pragma endscop
}
