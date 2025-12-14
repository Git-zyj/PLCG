/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 |= (arr_2 [i_1] [i_1] [i_0]);
                var_17 = (min(var_17, (((((((((arr_3 [0] [i_1] [i_0]) ? 9223372036854775807 : 9223372036854775807)) / (arr_1 [i_0])))) ? (var_2 / 9223372036854775807) : (((((((arr_3 [10] [i_1] [i_1]) != (arr_3 [2] [i_0] [i_1]))))) | (min(var_15, -9223372036854775792)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_3] [i_4] [i_5] = ((((((arr_14 [i_3] [i_5] [i_3]) * (arr_14 [i_3] [i_2] [i_3])))) ? (max((max((arr_12 [i_3] [i_3] [i_4] [i_5]), 15244)), ((((arr_6 [i_3] [i_4]) < (arr_15 [i_3])))))) : (arr_7 [i_4 + 3])));
                            var_18 = ((((((arr_10 [10] [i_5]) ? ((18446744073709551615 ? 43012 : (arr_12 [0] [i_3] [i_4] [i_5]))) : ((min(var_6, var_11)))))) ? 59 : var_15));
                            var_19 *= (((((arr_10 [16] [16]) ? (arr_13 [6] [i_5]) : -89)) / 50291));
                        }
                    }
                }
                arr_17 [i_2] [2] &= ((((((((arr_10 [8] [i_3]) / (arr_6 [i_2] [i_3])))) ? (min((-9223372036854775807 - 1), var_14)) : var_10)) <= ((((9930898475581227096 >= var_14) | 1)))));
                var_20 = ((((((!22) / var_6))) ? var_13 : (((arr_7 [i_2]) ? ((((arr_13 [i_3] [i_3]) < var_14))) : ((12 ? var_0 : (arr_14 [i_3] [i_3] [i_3])))))));
            }
        }
    }

    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_21 &= (((((min(var_2, var_7))) ? (arr_9 [i_6] [i_6]) : (((arr_19 [i_6]) ? (arr_2 [i_6] [i_6] [i_6]) : (arr_18 [i_6]))))));
        var_22 = ((((((var_6 ? 50293 : 9223372036854775807)))) ? ((((((var_3 ? (arr_15 [i_6]) : -5105279272088644313))) ? (arr_9 [i_6] [i_6]) : 1))) : (arr_19 [i_6 - 1])));
        var_23 = ((((((max(var_8, var_14))) ? (arr_5 [i_6] [i_6]) : ((((arr_18 [i_6]) ? var_4 : (arr_14 [i_6] [i_6] [i_6])))))) & (((((((arr_14 [i_6] [i_6] [i_6]) / (-9223372036854775807 - 1)))) ? (arr_11 [i_6] [i_6] [i_6]) : ((var_7 ^ (arr_4 [i_6]))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    {
                        var_24 ^= -124;
                        var_25 = ((+(((~var_2) ? var_13 : var_6))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_26 = (((min((arr_36 [i_12] [i_12] [i_12] [i_7]), 50291)) == (arr_27 [i_12] [i_12] [i_13 + 1])));
                                var_27 = ((~(arr_23 [i_12] [i_7])));
                                var_28 = ((min(var_4, ((max((arr_40 [i_7] [i_11]), (arr_33 [i_7] [i_7])))))));
                            }
                        }
                    }
                    var_29 = (max(var_29, ((((((arr_9 [i_11] [i_12]) ? -6196032273825450536 : ((min((arr_35 [i_12] [i_12] [i_11] [i_7]), (arr_4 [12])))))) <= (arr_7 [i_7]))))));
                }
            }
        }
    }
    #pragma endscop
}
