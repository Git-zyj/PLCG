/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = (80 && 165);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (((!-4412307437428204763) == ((((min((arr_0 [i_1]), 288230376084602880))) ? (((var_2 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1])))) : ((var_7 ? 0 : var_2))))));
                arr_6 [i_1] [i_0] [i_0] = (max((arr_0 [i_0 + 3]), (max((arr_0 [i_0 + 4]), 2305843009213693952))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_23 = (max(((((10 + (arr_12 [i_2]))) ^ ((40 ? -2305843009213693963 : var_3)))), ((2305843009213693962 ? (arr_0 [i_2]) : (((arr_5 [10]) ? 96 : -4263131781868492100))))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_24 += (arr_15 [i_5 + 1] [i_5] [i_5 - 2] [i_5]);
                                var_25 = 136;
                                arr_23 [i_6 + 1] [i_5] [0] |= arr_17 [i_2] [i_5 - 2] [i_4] [i_5];
                                var_26 = (((arr_15 [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1]) ? 40 : ((var_7 ? var_6 : -288230376084602880))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_26 [i_2] [i_3] [i_4 - 1] [i_2] = (((arr_18 [i_4 - 1] [i_3] [i_4 - 1] [i_7]) ? (arr_25 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1]) : (arr_21 [i_4 + 1] [2] [i_4 + 1] [i_4 - 1])));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_27 = (max(var_27, (((2305843009213693971 ? var_7 : (arr_29 [i_7] [i_8 - 1] [i_8 - 1] [i_7]))))));
                            arr_30 [i_8 - 1] [i_2] [i_2] [9] [i_2] = (((-(arr_0 [i_7]))));
                            arr_31 [6] [i_7] [2] [i_7] [i_7] |= 5154356510176347834;
                            arr_32 [i_2] [i_3] [i_3] [i_2] = (arr_17 [i_2] [i_4 + 1] [i_4] [i_3]);
                        }
                        var_28 = (max(var_28, 9223372036854775807));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_39 [i_2] [i_2] [i_2] [i_2] = (((arr_21 [i_11] [5] [i_11 - 2] [i_11]) * (arr_21 [i_11] [i_11] [i_11 - 2] [i_11 - 2])));
                                arr_40 [i_2] [i_9] [i_10] = ((-(arr_22 [i_2] [i_2] [i_3] [i_11 + 1] [i_2])));
                            }
                        }
                    }
                    var_29 = (max(var_29, ((((arr_20 [i_3] [i_3] [i_9] [i_3]) ? var_3 : var_2)))));
                }
                arr_41 [i_2] [i_3] [i_3] = max((((((max(var_15, var_4))) || (arr_34 [i_2] [i_2])))), (min(((-1 ? -5154356510176347834 : 10)), 2305843009213693952)));
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 7;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_30 = (180 ? -5154356510176347835 : (max(100, -288230376084602880)));
                                arr_51 [1] [i_2] [i_2] [i_3] [i_2] = (((arr_9 [i_2]) != var_15));
                                arr_52 [i_3] [i_2] [i_3] = var_13;
                                var_31 = (max(var_31, ((((-(min((arr_3 [i_3] [i_12 + 1] [i_3]), (arr_34 [i_13] [i_3])))))))));
                                arr_53 [3] [i_2] [i_12 + 2] [i_2] [i_2] = (max(2043107705195078120, ((18 ? -8639009392942312716 : 8711051464240934659))));
                            }
                        }
                    }
                }
                var_32 *= var_14;
            }
        }
    }
    #pragma endscop
}
