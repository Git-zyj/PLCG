/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = var_8;
                    var_17 = (((arr_4 [i_0] [i_0]) ? (min((arr_2 [3] [8]), (max(3, var_14)))) : 3584641187911535325));
                }
            }
        }
    }
    var_18 ^= var_5;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_12 [i_4] [1] [i_4] = min((~var_14), (min(((var_1 ? 145 : var_6)), ((~(arr_8 [24]))))));
                arr_13 [i_3] [i_4] [20] = (min((!99712529), (max((arr_8 [i_3 - 1]), var_13))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_19 = (!-17);
                                var_20 = ((var_12 < (!var_2)));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 24;i_8 += 1)
                            {
                                var_21 = var_7;
                                var_22 -= (((arr_18 [22] [i_3 - 1] [i_6] [i_6]) && var_15));
                                var_23 += -var_13;
                            }
                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                var_24 = ((var_6 ? (max((~20148), (min(var_14, (arr_14 [i_3] [i_4] [1] [i_9]))))) : (~var_14)));
                                var_25 = (max(var_25, var_10));
                            }
                            var_26 = (min(((var_2 * (arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 2]))), 99712530));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
