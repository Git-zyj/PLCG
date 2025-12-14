/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min((((var_4 ? var_1 : var_2))), (min(-13, 1877053588710612607)))), ((max(0, 32760)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += var_5;
                var_13 = ((~(max(var_0, (~var_5)))));
                var_14 -= min((((min(var_10, var_3)) % (((max(var_6, var_6)))))), (~28594));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
