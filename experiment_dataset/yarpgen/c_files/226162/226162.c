/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-0 ? 14478 : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_6));
                var_22 = var_6;
            }
        }
    }
    #pragma endscop
}
