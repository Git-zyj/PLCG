/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, var_4));
                var_13 -= var_8;
            }
        }
    }
    var_14 = var_1;
    var_15 = (max(var_15, var_2));
    var_16 = var_9;
    #pragma endscop
}
