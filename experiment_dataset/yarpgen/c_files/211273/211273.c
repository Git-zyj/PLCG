/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 68;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = 70368744177662;
                        var_20 = (((arr_8 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [9] [i_3] [i_3]) : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])));
                        var_21 = var_0;
                        arr_10 [i_0] [i_1] [i_2] = ((~(((arr_9 [i_0] [i_0] [i_0] [i_2] [i_0]) ? var_8 : (arr_9 [i_0] [i_0] [i_0] [i_2] [i_0])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_17 [i_4] = ((-(arr_16 [i_4] [i_4] [i_5])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_22 = ((((-((var_16 ? (arr_24 [i_6]) : var_3)))) * (arr_22 [i_6] [i_5] [i_6] [i_7])));

                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                var_23 = (min(var_23, ((((~1) ? ((((arr_12 [i_7 - 1]) ? var_12 : (arr_12 [i_7 - 1])))) : (arr_15 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                                var_24 = (arr_26 [i_6]);
                            }
                            arr_28 [i_6] [i_5] = (min((min((1 ^ var_16), (var_10 || var_14))), ((((((var_17 ? var_7 : var_16))) != (arr_23 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_25 = (min((((arr_15 [i_9] [i_9 - 1] [i_9]) / (arr_15 [10] [i_9 + 1] [i_9 + 1]))), (((arr_15 [i_4] [i_9 - 1] [i_9 - 1]) ? (arr_15 [i_4] [i_9 + 1] [i_9]) : (arr_15 [i_4] [i_9 + 1] [i_9])))));
                            arr_34 [i_9] [i_9] = 1;
                        }
                    }
                }
                arr_35 [i_4] = ((~(max((((var_6 << (var_7 - 40)))), (arr_16 [i_4] [i_5] [i_4])))));
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
