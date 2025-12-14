/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = ((((min(7294574752621973929, (-127 - 1)))) ? -112 : (max(1, 127))));
        var_12 = 111;
    }
    var_13 = ((3462506447377908696 ? var_1 : ((((((68 ? 42 : var_6)) > -74))))));
    var_14 = var_0;
    #pragma endscop
}
