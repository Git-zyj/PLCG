/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max(((var_2 ? 1 : (~255))), 1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 += (((var_5 | (var_6 || 29152))));
        var_12 *= var_7;
        var_13 = 29152;
    }
    var_14 = var_9;
    var_15 |= var_7;
    var_16 = var_1;
    #pragma endscop
}
