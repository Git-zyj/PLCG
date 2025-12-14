/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = -var_8;
                var_14 = var_3;
            }
        }
    }
    var_15 = var_8;
    var_16 = ((~-var_0) ? var_5 : (((((min(var_8, var_6))) < -1))));
    #pragma endscop
}
