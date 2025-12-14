/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 &= var_10;
        arr_3 [i_0] &= ((((((var_1 + (arr_2 [i_0]))) | (((0 ? 118 : (arr_1 [i_0]))))))) != (((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0))) : (max((arr_2 [i_0]), var_6)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 = (max(var_12, (((arr_6 [i_1] [i_0]) < (15848633835758585814 * 9223372036854775807)))));
            var_13 = (min(var_13, ((((arr_1 [i_1]) <= 2598110237950965802)))));
            var_14 = (min(var_14, (((~((35 % (arr_0 [i_1]))))))));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_15 = (max(var_15, ((((arr_0 [i_2 - 2]) + (arr_0 [i_0]))))));
                var_16 = (max(var_16, (arr_5 [i_2 + 1] [i_2 + 1])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = (max(var_17, var_3));
                arr_13 [i_0] [i_2] [i_0] |= (~(min(((max(2147483647, (arr_10 [i_4] [i_4] [i_4])))), var_1)));
                arr_14 [i_0] &= (max(var_10, (((arr_0 [i_2]) ? (((arr_11 [i_0] [i_2 - 1] [i_4]) ? var_2 : 16)) : (var_1 ^ var_2)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((2598110237950965788 ? (min((arr_16 [i_4] [i_4] [12] [i_2 - 1] [i_2 + 1] [i_2]), (arr_16 [i_6] [i_0] [i_4] [i_2 - 1] [i_0] [i_0]))) : ((~(arr_16 [i_4] [i_4] [i_4] [i_2 - 1] [i_2] [i_2]))))))));
                            arr_19 [i_6] [i_5] [i_4] [i_2] [i_0] &= (max((var_4 && var_6), ((~(arr_6 [i_0] [i_6])))));
                            var_19 ^= (1 + 70);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                arr_23 [i_2] &= (arr_4 [i_2 - 2] [i_7 + 2]);
                arr_24 [i_0] [i_0] [i_0] [i_2] |= (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) > var_10));
                var_20 |= (((2598110237950965792 > var_7) / (arr_12 [i_7 - 1] [i_2 - 1] [i_2 - 1])));
                var_21 ^= (((var_2 && 18446744073709551615) > (arr_11 [i_0] [11] [i_7])));
            }
            var_22 -= (max((var_6 & var_3), (((~(arr_4 [i_2 - 2] [i_0]))))));
        }
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_23 -= (max(((max(0, 18446744073709551606))), (((~(-21941 > 2147483647))))));
            var_24 |= ((123 | (~1)));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((min(((41 ? (((arr_2 [i_9]) ? var_10 : (arr_0 [i_9]))) : -var_8)), ((2047 + (arr_10 [i_9] [i_9] [i_9]))))))));
        var_26 -= ((~((((var_7 >= (arr_7 [i_9] [i_9] [i_9]))) ? ((min(-31701, (arr_6 [i_9] [i_9])))) : ((((arr_20 [i_9]) > (arr_22 [i_9]))))))));
        var_27 = (max(var_27, ((((max((-10545 + -28), (((1 > (arr_8 [i_9])))))) == (arr_20 [i_9]))))));
        var_28 = (max(var_28, 1754993776));
    }
    var_29 = (min(var_29, var_5));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                {
                    var_30 ^= (((((arr_12 [i_11] [i_12 + 2] [i_12 + 2]) - (arr_25 [i_10] [i_12 + 2] [i_12]))) + (min((arr_25 [i_11] [i_12 + 2] [i_12]), 28))));
                    var_31 -= (max((arr_27 [i_10]), (((((var_8 & (arr_26 [i_12])))) ? var_5 : (arr_16 [i_10] [i_10] [i_11] [i_10] [i_12] [i_12 + 2])))));
                }
            }
        }
    }
    var_32 -= 0;
    var_33 = (min(var_33, (((~(min((~var_7), ((var_6 ? 1957445501165438709 : -2147483634)))))))));
    #pragma endscop
}
