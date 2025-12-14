/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 |= ((((var_8 ? 3112443723 : var_10)) >> (var_2 - 910515922274510222)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_4] &= (min(3112443723, 64463));
                                var_13 = 1072;
                            }
                        }
                    }
                    var_14 = (max(((max(((~(arr_1 [i_0]))), ((206 ? 202 : 220))))), 0));
                }
            }
        }
    }
    #pragma endscop
}
