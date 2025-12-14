/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((var_0 ? var_2 : ((var_3 & ((21636 ? 41 : 1160795165273409494))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(243, 236));
                var_14 = (max(var_14, 255));
                var_15 = (max(var_15, ((max((max(9336948321623878610, 1)), ((-39 ? 2942347119168957884 : -28)))))));
            }
        }
    }
    #pragma endscop
}
