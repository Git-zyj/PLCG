/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = var_11;
                                var_14 -= ((var_12 ? (65535 ^ var_3) : (max((((arr_6 [i_0]) ? var_2 : var_4)), (((4217454914 < (arr_12 [i_0] [i_1] [2] [i_4]))))))));
                                var_15 -= -21;
                                var_16 = ((((var_9 << (var_7 - 36961)))) ? (arr_12 [i_0] [i_1] [1] [i_3]) : ((((max(4294967295, (arr_7 [i_0] [i_1] [i_2] [i_4])))) ? (arr_6 [i_4 + 2]) : (((arr_3 [i_0]) * (arr_2 [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 *= (~-var_3);
                                var_18 = var_10;
                                var_19 = 26153;
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] |= (~(max((min(77512361, 16)), ((65535 ? var_10 : 4294967273)))));
                    arr_20 [i_0] = 47579;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_7] &= max((arr_23 [i_7] [9] [i_7]), (arr_23 [i_7] [i_7] [i_7]));
                    var_20 ^= var_10;
                    var_21 *= (max(-36439, ((var_6 % (var_12 * var_0)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((-(((var_2 == (((65535 ? (arr_28 [i_7]) : (arr_33 [i_7] [i_7] [i_8] [0] [i_10] [i_8]))))))))))));
                                var_23 = (max(var_23, (((65535 < (!0))))));
                            }
                        }
                    }
                }
            }
        }
        arr_35 [i_7] [i_7] &= ((~((min((arr_30 [1] [i_7] [i_7] [i_7]), (arr_30 [7] [i_7] [i_7] [i_7]))))));
        var_24 = max(512, (max((arr_30 [i_7] [i_7] [i_7] [i_7]), 526)));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_25 = (min(var_25, ((min((!60582), var_0)))));
        var_26 = ((!(arr_32 [i_12] [i_12] [i_12] [i_12] [i_12])));
    }
    #pragma endscop
}
