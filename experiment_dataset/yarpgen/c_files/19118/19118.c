/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (!var_4);
        var_16 = ((60909 ? 4641 : 4624));
        var_17 = 1862386591;
    }
    #pragma endscop
}
