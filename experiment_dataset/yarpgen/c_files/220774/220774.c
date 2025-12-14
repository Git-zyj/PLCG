/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_17 += (var_11 ? (!var_11) : var_12);
        var_18 ^= (var_5 != 7);
    }
    var_19 = var_0;
    #pragma endscop
}
