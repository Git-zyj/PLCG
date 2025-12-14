/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((((var_15 ? 1 : var_5))) ? -119 : ((15 ? -1691049407739782153 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min((arr_0 [i_0]), 1));
                arr_4 [i_0] [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
