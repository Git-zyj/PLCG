/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((((min(var_6, var_6)))), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] [i_2] [i_0] = (max((arr_5 [i_1] [i_2 + 3] [i_1]), (arr_3 [i_0])));
                                var_16 = (max(8, ((var_5 ? (arr_4 [i_3 + 1] [i_2 + 1] [i_2 + 3]) : var_13))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_17 = (((((arr_3 [5]) ? (arr_7 [1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_2 [i_6])))) ? (max((arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (arr_10 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))) : (((((arr_9 [i_0] [i_1] [i_5] [i_6]) != var_14)) ? (((arr_11 [i_0] [i_0] [i_5] [i_6]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 111)) : -72)));
                            var_18 *= (min(var_12, (((((arr_11 [i_6] [0] [8] [7]) || -66))))));
                        }
                    }
                }
                var_19 = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((((-var_7 - (max((arr_20 [i_7] [i_8]), (arr_26 [i_10] [i_9] [15] [i_7]))))) + 9223372036854775807)) << (((max(((((arr_24 [i_7] [i_8] [i_9] [i_10]) != var_5))), 81)) - 81))))));
                            arr_29 [i_8] [9] [i_9] = (min(208, ((var_14 ? (arr_22 [i_7] [i_7] [i_7]) : (arr_22 [i_10] [i_8] [i_7])))));
                            var_21 = (((((var_1 ? (arr_19 [i_7]) : (((((-9223372036854775807 - 1) && 9223372036854775807))))))) ? (arr_26 [i_8] [9] [i_9] [i_8]) : (min((arr_24 [i_9] [i_9] [i_9] [i_9]), (arr_25 [i_10] [i_9] [i_8] [i_7])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        {
                            arr_35 [i_7] [i_7] [i_8] [1] [i_12] [3] = var_9;
                            var_22 -= (((arr_26 [i_7] [17] [i_11] [i_12]) ? ((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_26 [i_11] [i_11] [i_11] [i_12]) + 17249)))) == (((-127 - 1) & (-9223372036854775807 - 1)))))) : var_2));
                            var_23 = 126;
                            var_24 |= ((-(max(((0 ? (-127 - 1) : -9223372036854775807)), 16905))));
                            var_25 = (max(var_25, (((~(((((((arr_26 [i_7] [i_7] [i_11] [i_12]) & var_12)) + 9223372036854775807)) >> (((((var_12 + 9223372036854775807) << (((((arr_32 [i_7] [i_7] [i_8] [i_11] [i_12]) + 3304)) - 28)))) - 8599572281071223933)))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_13;
    var_27 = (min(var_27, var_0));
    #pragma endscop
}
