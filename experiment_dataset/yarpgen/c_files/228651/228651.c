/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_14 = max((max(((-5180 ? 1 : (arr_6 [i_0] [i_1] [i_0] [i_3]))), ((1 ? (arr_3 [i_0]) : -32757)))), ((((((~(arr_4 [i_0])))) ? 1 : var_2))));
                        var_15 += (((((arr_9 [i_1 + 1] [i_1 + 1] [i_0] [i_0 - 1]) > (arr_9 [i_1 + 1] [i_0] [i_0 - 1] [i_0 - 1]))) ? -var_12 : (((arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_2))));
                        var_16 = ((((-32757 ? (((arr_3 [i_0]) + -32767)) : (var_0 != 0)))) ? var_2 : ((var_10 % (arr_4 [i_1]))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_17 = (((min(35298, (arr_3 [i_1 + 1]))) + ((min(var_12, 1)))));
                            arr_13 [i_4] [i_0] [i_0] [i_0] = (min(var_13, (min(var_7, var_1))));
                            arr_14 [i_2 + 1] [i_0] [4] [i_0] [i_4] [i_2] = ((~(max((min(var_12, 1684467474)), var_4))));
                            var_18 = ((32761 ? (((min((arr_8 [i_0] [i_1] [i_2 + 1]), (arr_5 [2] [i_3 + 1]))))) : (((-32744 ? var_10 : var_6)))));
                            var_19 = ((!((max(0, (min(var_11, 1873864735)))))));
                        }
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_20 = (max(var_12, (((arr_9 [i_3] [i_3 - 2] [i_3 + 1] [i_3 + 2]) ? (230826496 | var_11) : (max((arr_11 [i_0] [1] [i_0] [i_1 + 1] [i_0]), var_7))))));
                            var_21 = (((max((arr_0 [i_2 + 1]), var_13)) >> (var_6 - 24185)));
                            var_22 -= (var_2 & (((var_9 ? (arr_9 [i_0 - 2] [8] [i_2 + 1] [i_3 + 2]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3 - 1] [i_5] [i_5 - 1])))));
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_3] [i_6 - 1] [i_0] = (arr_0 [i_1]);
                            var_23 = 4294967284;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_24 = ((~(arr_17 [i_1] [i_2 + 1])));
                            var_25 ^= var_8;
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_29 [i_0] = var_3;
                        arr_30 [i_0] [i_2] [i_2] = ((!var_5) ? var_12 : ((var_12 ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 1]))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_26 -= (((arr_21 [i_0] [i_0] [i_2 + 1]) && (arr_26 [i_2] [i_2] [i_2 + 1] [i_2] [i_9])));
                            var_27 |= (var_9 | var_7);
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_28 *= (((((arr_18 [i_10] [9] [i_1] [i_1] [i_0]) - var_0))) ? var_10 : (((465702511 || (var_11 != var_11)))));
                            var_29 = var_11;
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_30 = ((~((var_8 << (var_4 - 17659)))));
                        var_31 = (arr_10 [i_0] [i_0 - 2] [i_0] [i_1 + 1] [i_2 + 1] [i_11]);
                        var_32 = ((-(arr_1 [i_0] [i_0])));
                    }
                    var_33 = (max(var_33, 32736));
                }
            }
        }
    }
    var_34 |= min((1 == var_4), (var_1 + 11));
    #pragma endscop
}
