/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((48 ? (var_9 / -var_4) : (((var_7 << (var_10 - 4405015385951247304))))));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = var_5;
                var_14 = (min(((((var_6 ? (arr_4 [i_0] [i_0] [i_0]) : 1)) / (((arr_2 [i_1]) ? (arr_3 [i_0] [i_0]) : var_6)))), ((((48 ? (arr_3 [10] [i_1]) : (arr_2 [i_1])))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, -281474976186368));
                                var_16 = ((~(((var_5 & (arr_1 [i_0]))))));
                            }
                        }
                    }
                    var_17 = (min((((arr_6 [i_2 + 1] [i_0 + 2] [i_0]) << (var_8 - 1086226954916666874))), (((arr_6 [i_2 - 1] [i_0 - 2] [i_0 + 1]) + var_2))));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_18 = (max(var_18, (((((1 ? -6525491087020843378 : var_10)))))));
        arr_16 [i_5] = (min((min(55, (arr_8 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_5 - 3]))), ((((arr_8 [i_5 - 3] [i_5 - 2] [i_5 - 1] [i_5 - 1]) && var_5)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_6] [i_7 + 1] = ((((((min(var_2, var_7))) ? (arr_8 [i_5 - 2] [i_5] [17] [i_7]) : ((var_10 / (arr_12 [i_5] [i_6] [i_5] [i_6] [i_6]))))) & (var_6 ^ -49)));
                    var_19 = ((((var_5 >> (arr_3 [i_7 - 3] [i_5 - 3]))) << ((((~(arr_3 [i_7 - 2] [i_5 + 1]))) + 34))));
                }
            }
        }
        var_20 -= ((max((max(var_7, var_8)), ((var_6 ? var_9 : var_10)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_21 = ((var_3 || (arr_26 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_22 -= (~-2465880503319844809);
                    var_23 = ((57084 ^ (~-2465880503319844812)));
                    arr_33 [i_8] [i_9 - 1] [i_10] &= (!var_2);
                }
            }
        }
        var_24 = ((arr_27 [i_8] [i_8]) & (arr_27 [i_8] [i_8]));
        var_25 = ((((109 ? 109 : 18446744073709551607)) | (((2465880503319844811 ? (arr_29 [i_8]) : var_9)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_36 [i_11] = ((0 ? var_7 : (arr_26 [i_11])));
        arr_37 [i_11] = ((26355 % (((var_3 != (arr_24 [i_11]))))));
    }
    var_26 |= (~var_7);
    #pragma endscop
}
