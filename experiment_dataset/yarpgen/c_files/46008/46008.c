/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_12 = (arr_6 [i_0] [15] [i_0] [i_3]);
                                var_13 = (arr_2 [i_1]);
                                var_14 = (min((arr_10 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]), 1));
                            }
                        }
                    }
                }
                arr_12 [i_0] = (max((max((max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1 - 1]), (arr_5 [i_0] [i_0] [i_0] [i_0]))), (arr_0 [i_1 - 1] [i_1 - 1]))), 3));
                var_15 = (max(var_15, (~var_2)));
            }
        }
    }
    var_16 = var_2;
    var_17 = 1186022447;
    #pragma endscop
}
