/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= min(var_9, (((((min(13, 0))) <= var_6))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 = (-(max(-var_5, 18)));
        arr_2 [i_0] = (-2147483647 - 1);
    }
    var_17 = ((((min((!1), -var_6))) ? var_12 : var_3));
    #pragma endscop
}
