/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= var_10;
        var_17 = (min(var_17, -1));
    }
    var_18 = (max(var_18, (((var_9 ? var_8 : var_11)))));
    #pragma endscop
}
