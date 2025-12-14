/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~47372);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (arr_8 [i_1] [i_1] [i_2] [i_0])));
                    arr_10 [i_0] [i_0] [i_0] [4] &= -3829171894;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 &= (((var_1 - var_9) <= (~var_6)));
                                var_14 = (max(var_14, (arr_4 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_15 = (min(var_15, (((80 ? ((76 ? 538181972 : 121)) : 538181945)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_16 *= (arr_9 [i_6] [i_5] [i_7] [i_9 + 1]);
                                arr_29 [i_6] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] &= ((~(arr_24 [i_7 - 1] [i_7 - 1] [i_7] [i_8 - 1])));
                                var_17 |= -var_3;
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((-24596 + 2147483647) >> (538181972 - 538181960)));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_5] = ((((((arr_17 [i_5]) % (arr_5 [i_5])))) ? (arr_22 [i_6] [i_7 + 1] [i_5] [i_9 + 1]) : (arr_1 [i_9])));
                            }
                        }
                    }
                    var_18 = (((var_0 ? var_5 : 465795406)));
                    arr_32 [i_5] [i_5] = ((((((arr_26 [i_7] [i_7] [i_6] [i_6] [i_5]) ? var_3 : (arr_14 [i_5] [i_6] [i_6] [i_5] [i_5])))) || (arr_22 [i_7] [i_5] [i_5] [i_5])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                {
                    var_19 = (538181972 << ((((~(arr_34 [i_11] [i_10 + 1] [i_5]))) + 69)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_20 = (min(var_20, -var_2));
                                var_21 = (max(var_21, (((var_4 & (arr_13 [12] [i_11 + 3] [i_11 - 1] [12]))))));
                                var_22 = (arr_42 [i_13] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 9;i_15 += 1)
                        {
                            {
                                arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = -78;
                                arr_53 [i_5] [i_10] [i_11 - 1] [i_15] = ((var_0 || (arr_46 [i_5] [i_10] [i_10 - 1] [i_5] [i_11 + 1])));
                                arr_54 [i_11 + 3] [i_5] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_23 *= ((var_7 - ((((!(((~(arr_13 [i_16] [i_16] [i_16] [i_16]))))))))));
        var_24 = (max(var_24, (((~(arr_37 [i_16] [i_16]))))));
        var_25 = (((((((28 ? -24601 : 255))) ? (arr_27 [i_16] [i_16] [i_16] [i_16]) : (-2488 * var_2))) << (((max(var_1, var_3)) - 1239369723))));
        arr_57 [i_16] = (arr_46 [i_16] [i_16] [i_16] [i_16] [i_16]);
    }
    var_26 = ((max(var_1, (var_10 | 121))));
    #pragma endscop
}
