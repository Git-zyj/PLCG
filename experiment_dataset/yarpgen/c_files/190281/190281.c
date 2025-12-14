/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((((((arr_6 [i_1 + 3] [i_2] [i_2 - 4]) * 1183))) ? (arr_6 [i_1 + 1] [i_1] [i_2 - 2]) : -1139100585732804152)))));
                                var_14 = ((-(max(var_4, var_6))));
                                var_15 = ((-11688172409115503537 ? (arr_12 [i_0] [i_1] [14] [i_2] [i_2] [i_3] [i_4]) : var_12));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (~((-(arr_13 [i_2 - 4] [i_1] [i_1 + 2] [i_1 + 2]))));
                            }
                        }
                    }
                    var_16 = var_9;
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
