/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= 1583316149720868026;
                var_15 = (min((((26032 && 26020) ? var_5 : -20912302)), (2016 && 2007)));
                var_16 = (min(var_16, ((min((~76), -26024)))));
            }
        }
    }
    var_17 += var_0;
    #pragma endscop
}
