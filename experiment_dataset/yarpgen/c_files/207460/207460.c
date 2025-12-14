/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((10639056632709651104 ? 366622003358780100 : 22828))) ? (arr_0 [i_0]) : (arr_1 [i_0]))) + (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_15 = ((!(((-(arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    arr_12 [i_3] [i_1] = (arr_1 [i_1 + 1]);
                    var_16 = (arr_5 [i_1]);
                }
            }
        }
        var_17 = (+((((arr_6 [8] [i_1]) - (arr_9 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_18 = (((~(77725811 + 1238012877566910523))));
                    arr_17 [i_1] = ((var_3 ? var_10 : (((min((arr_1 [i_1 - 1]), var_0))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_19 = -var_4;
        var_20 = (((arr_19 [i_6]) + (arr_18 [i_6])));
        arr_22 [i_6] = var_2;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_21 = (((arr_9 [i_7] [i_7]) ? (~1592764146) : (arr_21 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 6;i_9 += 1)
            {
                {
                    var_22 *= (((((-(arr_27 [i_9] [i_9])))) ? (arr_15 [i_9 + 1] [i_9] [i_9 + 1] [i_9]) : (!var_6)));
                    var_23 = ((~(((arr_24 [i_8]) ? (arr_26 [i_8]) : (arr_31 [i_7] [i_7] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_24 = (((-1981497749 <= 17694) ? ((var_5 >> (9985741942480625265 - 9985741942480625257))) : (arr_4 [i_7])));
                                var_25 ^= (arr_27 [i_7] [i_7]);
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_42 [i_12] [2] [2] [i_7] &= ((!(arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 4])));
                        var_26 = (((((arr_34 [i_8 + 1] [i_8 + 1] [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_9 + 1]) + 9223372036854775807)) >> (((~var_11) - 15722))));
                    }
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
