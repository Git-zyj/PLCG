/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (arr_6 [i_4]);
                                var_19 -= ((var_1 ^ (arr_10 [10] [i_1 + 1])));
                                arr_13 [i_3] [i_1 + 1] [i_2] [i_3] [i_4] = var_0;
                                arr_14 [i_0] [i_0] [i_3] [i_1 + 1] [i_2] [i_3] [i_0] = (max(var_9, var_16));
                            }
                        }
                    }
                    arr_15 [i_0] = ((-(((((var_9 ? 1 : 13712425220054327967))) ? -6049259882113813688 : ((((var_4 + 2147483647) >> (((arr_0 [i_0]) - 13099)))))))));
                    var_20 ^= var_11;

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = -96;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_21 [i_0] = (-32767 - 1);
                            var_21 = (-112 | -126);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_22 = (0 ? var_4 : var_12);
                            var_23 = (max(var_23, ((((1 ^ 4734318853655223648) + ((1 ? -14 : var_9)))))));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_24 = (max(((~(arr_5 [i_0] [i_0] [i_0] [i_0]))), ((max(213, 0)))));
                            arr_26 [i_0] [i_1] [i_0] [i_5] = ((arr_23 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? 1359936219 : ((((arr_4 [i_1 + 1]) * (arr_4 [i_1 + 1])))));
                            arr_27 [i_0] [i_0] [i_2] [i_2] [i_8] &= max(((-((var_5 ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] [i_8]) : 3977)))), ((min(27291, (-67 ^ 3980)))));
                        }
                    }
                    arr_28 [i_0] [i_0] [i_1] [i_2] = (((((arr_4 [i_1 + 1]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1]))) & (~var_5)));
                }
            }
        }
    }
    var_25 = (((((max(-6049259882113813673, 0)) <= var_4))) | var_13);
    var_26 = var_10;
    var_27 *= var_11;
    var_28 = var_5;
    #pragma endscop
}
