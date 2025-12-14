/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((min((max(var_8, var_11)), -var_14))) ? ((~((var_5 ? var_5 : var_0)))) : (!var_7)));
    var_16 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 -= max((~var_2), (((0 ? 3127596491 : 0))));
                var_18 = (min(var_18, ((max(0, 0)))));
            }
        }
    }
    #pragma endscop
}
