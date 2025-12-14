/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] &= (!3625522103);
                var_15 = min((min(var_10, var_11)), var_10);
            }
        }
    }
    var_16 = (!-2681531352);
    #pragma endscop
}
