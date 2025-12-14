/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((!70368744177663) * ((var_8 ? 71 : -392900690))))) ? (((arr_8 [i_2 - 3] [i_0 + 1]) / (((min(var_7, var_8)))))) : 738742800)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = var_7;
                                arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_1] = ((9904793199428767900 ? 485720884 : 134));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [18] = (min(var_10, 2075422037));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_13 *= ((+(((arr_11 [i_2 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1]) ? var_8 : (arr_12 [i_0] [22] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])))));
                                var_14 = (((376375803 ? 5991 : var_9)));
                                arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0 + 1] = (arr_11 [i_6] [i_5] [i_5] [i_2] [i_0] [i_0]);
                                arr_23 [i_0 - 2] [i_1] = (-99 < 255);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= -8933810228361856009;
    var_16 = 17971;
    #pragma endscop
}
