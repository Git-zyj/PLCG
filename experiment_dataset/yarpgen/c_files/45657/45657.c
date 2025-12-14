/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1 ? 84 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (((((var_8 ? ((var_0 ? var_5 : var_7)) : var_14))) ? var_0 : ((var_11 ? ((-32758 ? 7161 : 508)) : var_5))));
                var_21 = ((!(var_6 % var_17)));
            }
        }
    }
    #pragma endscop
}
