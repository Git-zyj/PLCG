/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;
    var_18 -= (max(((min(1, 81))), ((((max(var_6, var_13))) ? var_9 : var_2))));
    var_19 = (min((max(var_11, (min(var_5, var_11)))), (~var_6)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = var_7;
        var_21 = var_2;
    }
    #pragma endscop
}
