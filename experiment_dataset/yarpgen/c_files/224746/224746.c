/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((~((var_7 ? (((1490941021 ? 8488 : 20349))) : 2271622264)))))));
    var_17 = (((min(-2147483621, var_0))) ? ((var_6 ? (var_12 - 4294967295) : -27417)) : -var_14);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [12] [i_0] = (max(((var_0 ? var_3 : var_5)), 18028049355319650191));
        arr_5 [i_0 + 1] [i_0] = (((((-(max(1427083830, 2147483646))))) && (!-18053)));
        arr_6 [i_0] [i_0] = -397;
    }
    #pragma endscop
}
