/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 ^= var_0;
        var_12 = (min(var_12, (arr_0 [i_0])));
    }
    var_13 = (max((~var_1), -var_7));
    var_14 = var_7;
    var_15 |= (((min(1, (max(var_4, var_10))))) ? (~var_3) : ((var_2 ? ((var_3 ? var_6 : var_7)) : var_7)));
    #pragma endscop
}
