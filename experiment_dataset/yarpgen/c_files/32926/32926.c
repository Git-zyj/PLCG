/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(((max(var_9, (arr_0 [i_1 + 2])))), ((((((arr_5 [i_1] [i_1]) ? (arr_4 [i_1 + 1] [i_1] [i_0]) : 3396000977))) ? (max((arr_2 [i_0]), 16383)) : 3297577859))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += (((((arr_13 [i_1 + 3] [i_2 + 2] [11]) ? (arr_0 [i_3]) : var_13)) < var_11));
                                var_16 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 *= (max((((min(14795015542458258388, 1167468636)) >> (898966319 - 898966288))), 1));
    #pragma endscop
}
