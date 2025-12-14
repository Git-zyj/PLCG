/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = var_12;
                    var_17 = var_10;
                    var_18 = ((1 ? (var_13 > var_2) : ((var_12 ? 2 : var_12))));
                }
            }
        }
    }
    var_19 = ((5788359251503772547 & ((((max(var_14, var_0))) ? (((4163337616 ? var_4 : var_4))) : -15))));
    #pragma endscop
}
