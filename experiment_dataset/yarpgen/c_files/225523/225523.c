/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((~((max((max(104, -115)), (max(var_5, var_5)))))));
                var_13 = var_6;
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
