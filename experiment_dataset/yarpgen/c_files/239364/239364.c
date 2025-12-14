/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 = ((!(((1919275603 ? 1 : 11)))));
        var_17 = ((-1 + (min(-144115188075855872, 1079295690))));
    }
    var_18 = (((((((1079295691 ? 65535 : 4267322862))) ? var_6 : (1919275603 / -1686))) * 2464225017));
    var_19 = 1;
    var_20 = var_0;
    #pragma endscop
}
