/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_9) ? var_5 : -1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((var_12 ? (((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 1 : (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2]))) : (((((!(arr_4 [i_0 - 1])))) - (arr_0 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = 2535191737;
                                arr_17 [i_3] [i_2] [i_3] [i_3] = (arr_8 [i_0] [i_0] [i_2] [i_3]);
                                var_16 = (((arr_2 [i_0 + 2] [i_1] [i_3 - 1]) ? ((~(arr_2 [i_0 + 1] [i_1] [i_3 - 1]))) : (arr_2 [i_0 - 1] [i_0 - 1] [i_3 - 1])));
                                var_17 = (max(-5566973403745036601, (arr_1 [i_0] [i_0 + 2])));
                            }
                        }
                    }
                }
                var_18 = (arr_13 [i_0] [i_0 - 1] [i_0 + 2] [i_0]);
                arr_18 [i_1] = ((1759775557 ? (((arr_5 [i_0] [i_0 + 1] [i_0]) - (((arr_16 [i_0] [i_1] [i_0] [i_1] [11]) / var_10)))) : (arr_6 [1] [1] [i_0] [i_1])));
                var_19 = ((~(arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
