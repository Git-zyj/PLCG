/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [9]) ? var_6 : (arr_8 [17] [4] [i_3] [i_3] [i_2] [i_3])));
                                var_13 += (arr_8 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4]);
                                var_14 = (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                                var_15 = (min(var_15, (arr_6 [i_4] [1] [i_3] [i_3] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_11 [i_2] [i_1] [i_2] = ((var_0 ? 35845 : ((9223372036854775807 ? (arr_4 [i_2] [i_2] [i_2]) : 1))));
                    var_16 = (arr_0 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_14 [i_0] [1] [i_0] = (((arr_5 [i_0] [10]) ? 25401 : ((126 ? -2127717555 : -5))));
                    arr_15 [1] [i_1] = (-9223372036854775807 - 1);
                    var_17 = (max(var_17, ((((arr_12 [i_0]) ? (arr_12 [17]) : var_10)))));
                }
                var_18 = 1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_19 = var_4;
                            arr_22 [i_6] [10] [i_1] [i_6] = (arr_13 [i_0] [11] [4] [i_7]);
                            var_20 = (min(var_20, (arr_5 [i_1] [22])));
                        }
                    }
                }
                var_21 = arr_2 [i_1];
            }
        }
    }
    var_22 = -608844141;
    var_23 = 23614;
    var_24 = (max(var_24, var_10));
    #pragma endscop
}
