/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((-5192489515076794603 / (-9223372036854775807 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_21 = ((var_8 != ((((arr_0 [i_0] [i_0]) && var_9)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [14] [i_2] [i_2] [i_1 + 1] [i_0] = var_4;
                        var_22 = (((-9223372036854775807 - 1) | 9223372036854775807));
                        arr_12 [i_0] [i_1 + 1] [i_1 + 1] = (arr_9 [i_3 - 1] [i_1 + 1] [i_1 + 1] [i_0]);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_23 ^= ((var_9 ? (((arr_4 [i_0] [i_0] [16]) ? (arr_14 [i_0] [i_4]) : (arr_4 [0] [0] [5]))) : var_15));
            var_24 = (max(var_24, (arr_0 [1] [19])));
            var_25 -= (((-98 <= 0) ? (arr_1 [i_4]) : (((-541343425 + 2147483647) >> (44217 - 44199)))));
            arr_16 [19] [i_0] = (((arr_6 [i_0] [i_4] [i_4]) ? ((var_10 * (arr_2 [i_4]))) : (4294967289 > 44214)));
        }
        arr_17 [i_0] = var_8;
        var_26 ^= ((((((arr_2 [18]) ? (arr_15 [13]) : var_11))) ? (((arr_5 [i_0] [i_0]) ? (arr_1 [4]) : (arr_13 [i_0] [9]))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_27 = (max(var_27, (((arr_1 [i_6]) ? (((arr_9 [i_8] [i_7] [13] [15]) ? (arr_4 [3] [3] [i_8]) : (arr_15 [i_5]))) : (arr_0 [i_7] [i_8])))));
                        arr_28 [i_6] [i_7] [i_6] = ((var_18 ^ (((arr_26 [i_8]) ? var_0 : var_14))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_28 = (max(var_28, (((var_18 ? (((((arr_3 [i_5] [i_5] [i_9]) || -541343425)))) : (arr_18 [i_9]))))));
                        var_29 += (((arr_9 [i_10] [2] [i_10] [i_10]) >= (arr_5 [i_5] [18])));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {
            arr_38 [i_11] = (((((var_2 ^ (arr_33 [i_5] [i_5])))) || ((((arr_34 [i_5] [i_5] [i_11]) ? var_7 : var_2)))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_30 -= ((((((arr_6 [i_5] [i_11] [15]) + (arr_24 [i_5] [i_5] [i_5] [i_5] [3] [i_5])))) ? ((((arr_19 [i_5]) < var_7))) : ((var_9 ? (arr_33 [i_5] [i_5]) : (arr_31 [i_13] [i_12] [19] [i_11] [i_5] [i_5])))));
                        var_31 *= var_1;
                        var_32 = (min(var_32, (arr_14 [i_5] [i_5])));
                        var_33 = (((arr_6 [i_5] [i_5] [5]) >> (((arr_14 [9] [i_11]) + 1608023509662277240))));
                    }
                }
            }
        }
        arr_44 [i_5] = (arr_43 [15] [15]);
        var_34 ^= (((arr_32 [i_5] [i_5] [i_5] [16] [i_5]) != ((((arr_43 [i_5] [i_5]) || var_6)))));
        var_35 = (max(var_35, (arr_34 [16] [16] [i_5])));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_36 = (max(var_36, (arr_40 [i_14] [i_14] [i_14])));
        arr_47 [i_14] [i_14] &= ((((30406 ? 6 : -1))) ? (((arr_36 [i_14] [i_14]) ? (arr_31 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_18 [i_14]))) : (((var_7 | (arr_37 [16] [i_14] [i_14])))));
        arr_48 [i_14] = ((arr_34 [14] [i_14] [i_14]) ? (((var_10 << (((arr_19 [i_14]) - 22731))))) : (((arr_34 [i_14] [i_14] [i_14]) ? (arr_0 [i_14] [16]) : var_17)));
        var_37 = (max(var_37, (arr_22 [i_14] [1] [i_14])));
    }
    #pragma endscop
}
