/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((104 ? 70 : -16))) ? (-71 && var_15) : (~-84));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += 8626012301344007963;
                var_19 = (min(var_19, (arr_3 [i_0])));
                var_20 += (((((-(arr_2 [i_0] [i_0])))) ? (min((arr_0 [i_1 - 1] [i_1 - 1]), -74)) : (-70 - 38230)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((((-(arr_5 [9] [i_2 - 1] [i_2 + 1])))) ? ((~(arr_6 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_3 - 2]))) : (((arr_5 [i_2] [i_2 + 1] [i_2]) ? 8388607 : (arr_6 [i_1] [i_2 + 1] [i_2] [i_3 + 1])))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] = ((-2424031395265105618 ? 2424031395265105610 : (2424031395265105617 || 2935593244)));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((-((((min(var_2, (arr_8 [i_3 + 1])))) | 70))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
