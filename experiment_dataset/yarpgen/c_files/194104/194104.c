/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (~(var_11 * 255));
                var_16 = ((((var_6 << ((((max(0, 3531))) - 3530)))) - ((((-3550 | 3164509278) < (9671537808986303681 < var_0))))));
            }
        }
    }
    var_17 = (max(var_8, (8775206264723247936 * 66)));
    #pragma endscop
}
