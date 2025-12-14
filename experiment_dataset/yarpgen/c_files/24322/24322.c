/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(min(((min(var_2, var_4))), (var_5 ^ var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 ^= (((~(((arr_0 [9]) ? 3 : (arr_10 [23] [i_2 + 1] [7] [23]))))));
                                var_13 = arr_0 [i_0 + 2];
                                arr_13 [i_4] [i_0] [i_2] [i_0] [24] = (max((((arr_7 [8] [8] [24]) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (arr_5 [i_0] [i_1 - 1] [23] [i_0]))), (var_10 | 53839)));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_14 = (max(var_14, var_7));
                        var_15 = ((!(((var_8 >> (53839 - 53817))))));
                    }
                    var_16 ^= ((~(arr_4 [i_1 - 1] [i_0 - 1])));
                }
            }
        }
    }
    var_17 = ((((~var_6) ? var_7 : (~var_2))));
    var_18 = (((var_7 > var_9) ? var_10 : ((var_0 ? -var_2 : var_4))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 ^= max(-2047, ((((min(var_6, var_9))) ? var_8 : ((0 ? var_1 : var_8)))));
                            var_20 = ((~(((arr_15 [i_6] [1] [i_8] [i_6] [i_9]) ? -4 : -var_9))));
                        }
                    }
                }
                var_21 = ((min((arr_23 [i_6]), var_7)));
                var_22 = (((((4294967295 ? (arr_17 [i_6]) : (arr_27 [i_6] [i_6] [2] [i_6]))) >= ((~(arr_9 [i_7] [0] [i_7] [i_7]))))));
            }
        }
    }
    #pragma endscop
}
