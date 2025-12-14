/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-10089029742961323718, ((min(var_9, var_5)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = 8357714330748227915;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = var_11;
                    arr_9 [i_2] = (((arr_4 [i_1 + 1]) ? 1929567146566173175 : (arr_4 [i_1 - 2])));
                }
            }
        }
    }
    var_17 = (1008806316530991104 < (-9223372036854775807 - 1));
    #pragma endscop
}
