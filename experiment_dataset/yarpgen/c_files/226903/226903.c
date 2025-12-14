/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 ^= (!((((((arr_1 [i_0]) + 2147483647)) >> (var_6 + 15)))));
        var_13 = (((((((max(-32749, var_8))) ? (arr_1 [i_0]) : (arr_0 [i_0])))) & var_4));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] [i_1 + 1] = (arr_4 [i_1 - 1]);
        var_14 = ((~(max((arr_5 [i_1]), (~var_6)))));
        var_15 = ((!((((arr_4 [i_1 - 2]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2]))))));
        var_16 = (arr_4 [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_17 ^= (((arr_7 [i_2 - 2]) ? (arr_8 [i_2 - 1]) : (arr_8 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_18 [i_5] [i_5 + 1] [i_5] [i_5 - 1] = (arr_8 [i_5 - 2]);
                        arr_19 [i_5] [12] [i_3 - 1] [i_2] = (((((var_8 ? var_5 : var_5))) ? (arr_13 [11] [i_5 - 2] [i_5] [i_5 + 1]) : var_1));
                        var_18 &= (var_2 <= var_11);
                    }
                }
            }
        }
        arr_20 [i_2 + 1] = (+-1969849919);
        var_19 = (max(var_19, (arr_9 [i_2 - 2] [i_2 - 2])));
        arr_21 [i_2] [i_2] = (((arr_5 [i_2 - 1]) ? var_4 : ((((!(arr_9 [i_2] [i_2 - 1])))))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 33554431));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_36 [i_9] [i_7] [i_7] = var_1;
                                arr_37 [i_7] [i_7 - 1] [i_7 - 1] [8] [i_8 - 1] [i_7 - 1] [i_7] = ((+(((arr_26 [i_8 - 1] [i_7 - 1]) - (var_4 / var_11)))));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((2287828610704211968 + 1) ? (arr_30 [i_7] [i_6]) : (max((~var_7), (((~(arr_22 [i_8])))))))))));
                }
            }
        }
        var_22 = ((var_7 ? (((arr_17 [i_6 + 1]) * ((((arr_12 [i_6] [i_6 - 1] [i_6]) ? var_0 : (arr_8 [i_6])))))) : (arr_28 [i_6 + 1])));

        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            var_23 = ((max(((var_2 ? var_7 : (arr_26 [i_6 - 2] [i_6 - 1])), (~var_3)))));
            var_24 = var_6;
            arr_40 [i_11] [i_6] = (arr_11 [i_6] [i_11 + 1]);
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            arr_50 [i_6] [i_12] [i_13] [i_14 + 2] [i_15] = var_6;
                            var_25 ^= (arr_29 [i_14] [i_14 - 1] [i_12] [i_12] [i_6 + 1] [i_6 + 1]);
                        }
                    }
                }
                var_26 = var_9;
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    {
                        var_27 = (min(((((((arr_47 [i_17] [21] [i_12] [21] [i_6 + 1]) ? var_4 : (arr_17 [i_6 - 1])))) ? (((127 ? 2968296941 : 58))) : ((0 ? 33242 : 9223372036854775791)))), (-1 != 55464)));
                        arr_56 [i_6] [i_6 - 2] = var_7;
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_28 = (min(var_28, 744284980));
            var_29 = ((!(((44 ? 4095 : -111)))));
            arr_60 [i_18] [i_18] [i_18] = ((((((arr_28 [i_6 + 1]) && var_9))) == (~var_0)));
        }
    }
    var_30 ^= var_3;
    var_31 = (max(var_31, (max(((65535 ? 232 : 18446744073709551610)), (((-var_6 ? 33554431 : (min(var_3, var_9)))))))));
    #pragma endscop
}
