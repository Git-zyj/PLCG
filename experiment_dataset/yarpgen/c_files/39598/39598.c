/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= ((~((max((arr_0 [i_0] [i_0]), var_6)))));
        var_19 *= (min((!var_4), ((~(var_9 || var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (arr_6 [3] [1]);
        arr_7 [i_1] = (62932 | 1);
        arr_8 [i_1] = (((arr_4 [i_1]) - (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [i_1] [i_3] = var_11;
                    var_21 = (arr_13 [i_1]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_17 [12] = ((-(1 != 1)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_22 [12] [i_5] [12] = (arr_18 [i_4] [i_5] [7]);
                    arr_23 [i_5] [11] [i_6] = (((max((arr_16 [i_6]), (arr_16 [i_6]))) + (((-(((-750274689 > (arr_18 [i_4] [i_4] [i_6])))))))));

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_5] = 750274690;
                        var_22 *= ((((min((arr_19 [i_4] [i_5] [i_5]), (!1)))) ? (((((arr_21 [13] [i_5] [1] [i_5]) | (arr_18 [i_4] [0] [0]))) >> (((max(var_13, 125)) - 113)))) : ((~((((-9223372036854775807 - 1) && var_2)))))));
                        arr_27 [i_7 - 1] [i_5] [i_5] [i_4] = arr_24 [i_7] [i_7] [i_6] [i_7 - 1];
                    }
                    var_23 = (max((arr_18 [i_4] [i_5] [i_6]), 2496583422));
                }
            }
        }
        arr_28 [i_4] = var_0;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_24 = (((((arr_25 [i_8] [i_8] [18]) ? (arr_2 [i_8] [i_8]) : (arr_2 [i_8] [i_8]))) % ((((var_9 ? (arr_30 [5]) : (arr_21 [i_8] [i_8] [i_8] [i_8])))))));
        arr_31 [i_8] = (min((arr_19 [i_8] [i_8] [i_8]), (arr_19 [i_8] [i_8] [i_8])));
    }
    var_25 = var_4;

    for (int i_9 = 3; i_9 < 11;i_9 += 1)
    {
        arr_35 [i_9] = (arr_32 [i_9]);
        var_26 = ((((((~var_17) ^ ((28672 ^ (arr_29 [i_9 + 2])))))) ? ((((max(var_6, (arr_16 [i_9])))) ? ((min((arr_24 [i_9] [11] [4] [i_9 + 2]), (arr_21 [i_9 + 1] [11] [i_9] [i_9 - 2])))) : (arr_24 [i_9] [i_9 - 3] [i_9 - 3] [i_9]))) : (arr_24 [i_9] [i_9] [i_9] [i_9])));
        var_27 = (max(var_27, var_15));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_42 [i_9] [i_9] = (arr_18 [i_9 + 3] [i_9 + 3] [i_9 + 3]);
                    arr_43 [4] [4] [11] [0] = ((((~(arr_34 [i_10])))));
                    arr_44 [i_9] [i_10] [i_11] [0] = ((((max((arr_32 [i_9 - 1]), (min(var_12, 36863))))) ? (arr_20 [16] [i_10] [i_11] [16]) : (arr_36 [i_9 - 3] [i_9 - 1])));
                    var_28 = ((~(arr_19 [i_9 + 1] [i_9 + 1] [i_9 + 3])));
                    var_29 = (-2147483647 - 1);
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_30 = (min(var_30, ((((((-((min(var_18, (arr_24 [i_12] [i_12] [18] [i_12]))))))) || (arr_39 [1] [i_12] [3] [1]))))));
        var_31 = ((max(128, (max(-126, (arr_39 [i_12] [6] [i_12] [6]))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                {
                    arr_56 [0] [i_12] [i_14] = (((((244 ? var_15 : (arr_30 [i_14 + 1])))) ? (((-(arr_32 [0])))) : (((((28672 ? 0 : (-9223372036854775807 - 1)))) ? ((max(var_3, -750274690))) : (arr_1 [i_12] [i_12])))));
                    arr_57 [i_12] [i_12] [6] = (65535 | 60);
                }
            }
        }
    }
    #pragma endscop
}
