/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? var_6 : ((-var_1 ? ((var_3 ? var_3 : var_8)) : ((var_8 ? var_9 : var_5))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_9 [i_2] [1] [i_1] = ((var_4 < ((-24753 - ((var_4 ? var_0 : var_5))))));
                arr_10 [i_0] [10] [i_2] = (((((~(~var_6)))) ? var_8 : (((arr_7 [i_0] [i_0] [i_2] [i_2]) ? var_6 : (arr_7 [6] [6] [i_1] [i_2])))));
                var_11 = arr_6 [i_2];

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_12 ^= (max((9223372036854775807 / -29942), 9223372036854775803));
                    arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] = ((((-(arr_12 [13] [4] [i_2] [3] [i_1] [i_0])))) ? (max(((var_6 ? var_0 : var_2)), (arr_8 [i_0] [i_2] [i_3]))) : var_0);
                    var_13 = (((((var_6 - (arr_6 [i_0])))) <= (((!var_5) - var_2))));
                }
            }
            var_14 ^= ((-var_8 ? (!var_7) : (((!(arr_5 [i_1] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_15 -= ((var_6 / (((((-9223372036854775807 - 1) ? 1901670269422831575 : 27150)) + 1))));
                        arr_20 [i_4] [i_1] [i_4] [1] = (((((var_3 ? (arr_19 [i_0] [i_4]) : var_8))) ? (((((var_5 ? var_7 : (arr_19 [i_0] [i_4])))) ? -var_0 : var_7)) : ((min((arr_3 [4] [4] [4]), (!var_8))))));
                    }
                }
            }
            arr_21 [i_0] = ((((((var_8 <= var_7) ? var_7 : var_8))) ? (((arr_19 [i_0] [4]) - (arr_14 [i_0] [i_0] [i_0] [6]))) : (min((~var_4), ((min((arr_19 [i_0] [16]), var_8)))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_16 -= ((arr_3 [2] [2] [i_8]) - (~var_0));
                            var_17 += ((((((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [14]) ? var_9 : (arr_29 [i_9] [i_6] [i_7] [i_8] [i_7] [1])))) ? (((var_3 - var_0) - var_4)) : ((((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [i_0]) || var_6)))));
                            arr_31 [i_0] [i_8] [i_0] [i_8] [1] [i_6] [i_9] = ((((arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? 1047065503 : (arr_11 [i_0] [i_6] [i_7] [i_6] [i_6]))));
                            var_18 = (min(var_18, (arr_4 [i_0] [1] [i_8])));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_19 = var_9;
                            var_20 = ((((((arr_22 [i_0]) ? (arr_17 [i_0] [i_6] [i_10] [i_0]) : (arr_5 [i_10] [i_0] [i_0])))) ^ (arr_3 [i_0] [i_6] [3])));
                            var_21 = (((((((var_6 ? var_1 : var_3)) - (min(var_1, var_0))))) ? (((~38385) - (arr_3 [22] [i_6] [i_0]))) : var_7));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_22 = (!var_1);
                            var_23 |= ((!(((((var_5 ? var_4 : (arr_29 [16] [16] [i_8] [i_7] [i_6] [16]))) & (arr_23 [i_0] [i_6] [i_7]))))));
                        }
                        arr_39 [i_8] [i_6] [i_0] [i_8] = -38386;
                        var_24 = (((-1047065503 | 183) ? ((~(((arr_16 [1] [6] [i_8] [i_8]) * var_7)))) : (((arr_25 [i_0] [i_0] [i_7] [i_8]) * (arr_17 [i_6] [i_6] [14] [i_8])))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_25 = (min(var_25, var_4));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_26 = (min(var_26, var_0));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_27 ^= ((var_9 & ((((var_6 < (arr_49 [i_12] [i_12] [11])))))));
                            var_28 ^= -var_6;
                            var_29 = ((var_2 & (arr_24 [i_15] [i_12] [i_13] [i_12])));
                            var_30 = (min(var_30, ((((((~(arr_6 [i_12])))) ? (!var_3) : var_4)))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_31 = (((var_7 > var_7) <= var_5));
                            arr_55 [i_12] [i_12] [i_17] [i_12] [i_12] = (((arr_12 [i_12] [i_12] [i_14] [i_15] [i_14] [i_13]) & (arr_12 [i_13] [i_13] [i_14] [i_15] [i_15] [i_13])));
                            arr_56 [11] [i_17] [i_17] = ((var_6 ? (arr_54 [i_12] [i_14] [i_14] [i_15]) : (arr_54 [i_14] [i_15] [3] [i_14])));
                        }
                        arr_57 [i_12] [i_12] [8] [i_12] [i_12] = ((var_2 ? -var_1 : (arr_44 [i_12] [i_13] [i_14])));
                    }
                }
            }
        }
        arr_58 [9] [i_12] = (((((((var_9 ? var_5 : var_3))))) & ((var_5 - ((var_6 ? var_1 : var_3))))));
        var_32 = (max(var_32, ((((((max(var_6, (arr_51 [1] [i_12] [i_12] [i_12]))))) - ((((arr_17 [i_12] [17] [i_12] [i_12]) - var_3))))))));
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        var_33 -= (((arr_22 [i_18]) ? ((19094 ? 38392 : 1)) : ((var_8 & (1047065502 || 27150)))));
        arr_61 [16] = (var_6 * var_2);
    }
    #pragma endscop
}
