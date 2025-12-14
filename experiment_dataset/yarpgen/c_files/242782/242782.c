/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_9, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(7143, (max(899846454, (arr_2 [i_0] [i_0])))));
                var_16 = var_6;
            }
        }
    }
    var_17 = (max((max(10323259632470634461, 2656592883)), var_12));
    #pragma endscop
}
