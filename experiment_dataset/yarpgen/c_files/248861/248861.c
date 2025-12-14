/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1807542209 < 33488896);
    var_11 ^= ((-(((((32 ? 1052969684 : 42078883))) - ((var_0 ? 1807542204 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = arr_1 [i_0];
                var_12 = (arr_2 [i_1]);
                var_13 = (((((2270 ? 22456 : 1807542209))) & -2270));
                arr_5 [i_1 - 1] [i_0] [i_1] = ((((var_3 && (arr_0 [i_1 + 1]))) ? var_2 : ((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_1] [i_1] [i_1]))) >= (arr_0 [i_1]))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1];
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (((((var_8 >> (var_4 + 15262)))) ? var_0 : ((var_7 ? (arr_7 [i_1] [i_1]) : var_9))));
                        arr_12 [i_1] [5] [i_1 - 1] [i_0] [i_1] = (arr_6 [i_2] [i_2 - 2] [11] [i_2 + 1]);
                    }
                    var_15 = (var_4 < 236);

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_16 += ((1807542212 ? (arr_10 [i_0] [i_0] [16] [i_0] [i_0] [i_0]) : ((-(arr_3 [i_0] [i_0] [i_0])))));
                        var_17 = ((268435456 | (arr_7 [i_0] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_2 - 1] [i_1] = (i_1 % 2 == zero) ? ((((((arr_10 [i_0] [i_0] [i_2] [i_1] [i_1 - 1] [i_1 + 1]) + 2147483647)) << (((((arr_7 [i_0] [i_1]) + 1956625602)) - 24))))) : ((((((arr_10 [i_0] [i_0] [i_2] [i_1] [i_1 - 1] [i_1 + 1]) + 2147483647)) << (((((((arr_7 [i_0] [i_1]) + 1956625602)) - 24)) - 2059935818)))));
                        var_18 = (max(var_18, (((var_7 <= (~var_7))))));
                        arr_19 [i_0] [i_1] [i_2] [i_1] = (arr_9 [i_2 - 3] [i_2 + 1] [i_1] [i_1 + 2] [i_1] [i_1]);
                        arr_20 [i_1] [i_1] [i_1 + 2] [i_1] = ((1 ? 2270 : 63));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_19 |= (arr_8 [i_0] [i_0]);
                        arr_23 [i_0] [i_1] [i_1] [i_0] = (arr_6 [i_6] [i_2 - 2] [i_1] [i_0]);
                        var_20 += var_0;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_21 = (max(var_21, ((((var_9 == 7) ^ ((19 ? (arr_10 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0]) : var_2)))))));
                        arr_26 [i_1] = (arr_2 [i_1]);
                    }
                }
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    arr_29 [i_1] [i_1] = (((~(arr_17 [i_1 + 2] [i_8 + 2] [i_1] [i_0]))));
                    arr_30 [i_0] [i_1] [i_1] = ((63406 ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : (((var_6 != 7) ? (((arr_22 [i_1] [i_1]) ? 1 : 1)) : var_9))));
                    var_22 &= ((((!(var_0 == 73))) ? var_4 : (((var_4 % 5157135740473545730) ? ((15464526161763591693 ? var_5 : 15)) : ((max(1, var_5)))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_35 [i_1] [i_1] = ((((63 ? 1 : var_6))) && (((224 ? var_2 : var_4))));
                    arr_36 [i_1] = ((~(1 && 2982217911945959922)));
                    var_23 = (~var_0);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_24 = ((-(1 <= var_2)));
                                var_25 = (((arr_33 [i_1] [i_10 + 3] [i_10 - 1] [i_10 + 1]) * 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
