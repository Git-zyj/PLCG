/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? var_6 : -20));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] &= 22;
        var_12 ^= 12;
        arr_4 [i_0] = ((~(min((4095 | var_6), 264241152))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_13 = (min(var_13, var_8));
        arr_9 [i_1] = 37;
        arr_10 [i_1] [i_1] = (((((((arr_5 [9] [i_1]) / (arr_6 [i_1]))))) ? (((37 || var_5) ? (min(2020811808, var_6)) : var_0)) : ((((((min(2845, (arr_1 [i_1])))) && 0))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        var_14 = ((0 ? ((9223372036854775807 ? (arr_0 [1]) : 61450)) : (arr_6 [i_2])));
        var_15 -= 4166521943181535163;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_16 = (18446744073709551603 / var_3);
                            arr_22 [i_2] [i_2] [i_4] [i_5] [i_2] = var_8;
                            var_17 = (var_8 && 61441);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_18 = (min(var_18, var_0));
                            arr_31 [i_2] [i_2] [i_7] [i_8] [4] [i_9] [i_9] = ((var_1 ? var_6 : var_7));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_19 = ((!(var_5 && var_4)));
                            var_20 *= (((var_7 || 177) || var_4));
                            var_21 = (var_5 >= 0);
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_38 [i_2] [10] [i_2] [i_8] [10] = ((36028792723996672 || (arr_12 [i_2])));
                            var_22 = (arr_12 [i_2]);
                        }
                        var_23 = (min(var_23, var_3));
                        arr_39 [i_2 - 1] [i_3] [i_7] [i_7] [i_2] [i_7] = var_0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_24 &= (arr_17 [i_2 - 1] [i_12]);
                        var_25 = (((arr_37 [i_2] [5] [5] [i_12] [i_13]) ? (arr_37 [i_2 + 2] [i_2 + 2] [i_2 + 1] [1] [i_2]) : (arr_37 [1] [i_3] [i_12] [i_2] [i_12])));
                        arr_48 [i_2] [i_3] [i_12] [i_12] = (((arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1]) ? (arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1]) : (arr_19 [i_2 - 3] [i_2] [i_2 - 1] [i_2 + 1])));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_26 = (arr_43 [i_2] [i_2]);
                            var_27 = (((arr_55 [i_16] [i_16 + 1] [i_16] [i_16 - 2]) ? ((var_3 ? 65535 : var_5)) : ((52 ? -56 : 0))));
                            var_28 = (((arr_50 [i_2 + 1] [i_2 + 1] [i_17]) ? 52 : (((var_1 || (arr_47 [i_14]))))));
                            var_29 = (!32768);
                        }
                    }
                }
            }
            var_30 = (min(var_30, (arr_19 [2] [6] [i_2 + 2] [i_14])));
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
        {
            arr_62 [i_2] = (arr_57 [7] [i_2 - 2] [7] [i_2 - 2]);
            var_31 = var_3;
        }
    }
    #pragma endscop
}
