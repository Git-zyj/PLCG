/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = var_12;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] = (((((-14 ? ((min((arr_2 [i_0]), var_8))) : ((65523 ? 0 : 2))))) ? (((arr_6 [i_0 + 1] [8]) / 65531)) : (((-(arr_3 [i_2 - 1]))))));
                            var_15 *= var_5;
                        }
                    }
                }
                var_16 = (min(var_16, (((((!((min(var_10, (arr_5 [i_0] [i_1] [i_1]))))))) - 0))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_23 [i_4] [1] [i_6] [1] [i_8])));
                                arr_25 [i_4] = var_12;
                                arr_26 [i_4] [i_5] [i_6] [i_4] [i_8] = (((((((min(var_6, 1950108259731441940))) ? ((var_4 ^ (arr_18 [19] [i_4]))) : (arr_13 [i_4 + 3] [i_5 - 1])))) ? ((-((min((arr_13 [i_6 + 1] [24]), (arr_23 [i_4 + 1] [i_4] [8] [8] [i_4])))))) : ((((min(65521, 8619))) + (!0)))));
                                arr_27 [i_8] [i_4] [i_6] [i_6 - 1] [i_4] [i_4] = (arr_12 [i_4] [i_5]);
                            }
                        }
                    }
                    arr_28 [i_4] [i_4] [20] = ((-(var_0 / var_9)));
                    arr_29 [i_4] = (((!((((arr_18 [i_4] [i_4]) - var_5))))) ? var_11 : (min((-9223372036854775807 - 1), -114)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_36 [i_4] [15] [i_4] [i_10] = (((((((var_6 ? var_7 : var_12))) ? (arr_22 [i_4] [i_4] [i_6] [i_4] [12]) : (((arr_12 [i_4] [0]) ? (arr_22 [i_4] [i_5 - 2] [i_6] [1] [i_10]) : (arr_12 [i_4] [i_4]))))) - ((((arr_17 [i_4] [19] [i_6 + 1] [i_9]) ? (min((arr_35 [i_4] [i_4] [4] [i_4 - 1] [i_4] [i_4 + 1]), var_12)) : (arr_14 [i_4]))))));
                                arr_37 [i_4] [i_4] [i_6] [13] [i_6] = ((((!((min(2979899321, 141))))) ? (arr_23 [i_4] [i_4] [i_6] [i_9] [i_10]) : (((arr_18 [i_5 - 1] [i_4]) ? var_6 : (arr_18 [i_5 - 1] [i_4])))));
                                var_18 = ((((arr_30 [i_4 + 3] [i_5] [i_4] [i_9]) + var_3)));
                                arr_38 [i_4] [i_5] [i_6] [0] = (i_4 % 2 == 0) ? ((((var_10 << (((arr_20 [i_4 - 1] [i_4] [i_4] [i_9]) + 100)))))) : ((((var_10 << (((((arr_20 [i_4 - 1] [i_4] [i_4] [i_9]) + 100)) - 43))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (((arr_21 [i_4 + 3] [i_4 + 3] [i_4] [13]) ^ ((var_12 ? (arr_31 [1] [i_4 - 1]) : 114))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        arr_42 [i_11] = ((-(arr_14 [4])));
        var_20 = 1;
    }
    #pragma endscop
}
