/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = (min(14356351076567339213, ((((~7395427457630308963) * (!241))))));
                                arr_12 [i_1] [i_1] [i_2] [i_1 - 1] [i_1] [i_1] = (arr_0 [i_0] [i_1 + 1]);
                                arr_13 [i_1] [i_1] [7] = 482526665351744369;
                                arr_14 [i_0] &= (2 / 2592267660);
                            }
                        }
                    }
                    arr_15 [i_1] [6] [2] [i_1] = -0;
                    var_20 = var_13;
                }
            }
        }
    }
    var_21 = (min(var_21, (min(var_3, var_16))));
    var_22 = (min(var_22, ((min(((var_12 ? var_2 : (min(var_2, 297062096)))), (-664785557 || var_12))))));
    #pragma endscop
}
