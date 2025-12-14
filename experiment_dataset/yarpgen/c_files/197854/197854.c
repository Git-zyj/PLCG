/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (((max(((max(-60, var_1))), (((arr_1 [i_0] [i_0]) | 18446744073709551615)))) ^ (((-(((arr_2 [i_0] [i_1] [i_2]) + 0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = (min(-60, -1806163431));
                                arr_16 [i_0] [i_1] [i_1] [i_0] = var_9;
                                var_12 = (~60);
                                var_13 = (((((((((-(arr_12 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1 + 1] [i_1])))) && (var_3 + 37493))))) - ((-60 ? ((0 ? 0 : 220)) : ((min(1, 5)))))));
                                arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = (arr_10 [i_1] [i_1] [i_1] [i_1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_4;
    var_15 -= ((var_3 ? (max(((var_1 ? 43 : var_10)), ((max(226, 2127291682))))) : (~1)));
    #pragma endscop
}
