/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (min(var_12, (((73 ? (!var_8) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (!10973)));
                var_14 = 240;
            }
        }
    }
    #pragma endscop
}
