/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -11059;
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (min(var_21, (((~(-11646 * -65513))))));
        var_22 = (max(var_22, (((max(17139, 0))))));
        var_23 = (max(((min(var_15, var_13))), (min(((min(var_2, -8812755085253575415))), var_17))));
    }
    #pragma endscop
}
