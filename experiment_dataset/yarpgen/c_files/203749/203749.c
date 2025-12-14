/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 * (!4294967295)));
    var_21 = (max(1, ((var_13 ? var_12 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (min(var_22, var_7));
                var_23 = (((120 ? 71 : 1)));
            }
        }
    }
    #pragma endscop
}
