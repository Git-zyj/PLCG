/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 57821));
                var_15 ^= max(57821, (arr_0 [i_0 - 1]));
                var_16 -= -64030;
            }
        }
    }
    var_17 = ((((7728 || 57814) && var_11)));
    var_18 = var_9;
    #pragma endscop
}
