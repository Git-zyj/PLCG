/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = ((min(-945387949, var_9)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 += -368061267;
        var_22 = (min(16967, 16990));
    }
    #pragma endscop
}
