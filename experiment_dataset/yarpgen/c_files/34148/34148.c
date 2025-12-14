/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (max(-3640099990, var_12))));
                var_15 = (min(var_15, var_8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [5] [i_3] [21] [i_4] = (((((-(max(-812686895, -6603166589594015863))))) ? ((8888367338948153918 ? 15676312475336452343 : var_6)) : (((max(-29, 8))))));
                                var_16 = (((((var_0 ? var_9 : (max(8888367338948153902, var_13))))) ? 3640099987 : (((-127 - 1) ? (max(-6603166589594015870, 1383401879)) : (max(65521, -8888367338948153876))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= 1674140846;
    var_18 = var_6;
    #pragma endscop
}
