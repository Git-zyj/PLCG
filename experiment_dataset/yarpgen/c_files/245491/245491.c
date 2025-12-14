/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((~(!2914458651710402755))), (!var_6)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = min(-117, 0);
        arr_2 [i_0] [i_0] = (7676731669270373409 - 1152921504606830592);
        arr_3 [i_0] = (arr_0 [i_0] [0]);
    }
    #pragma endscop
}
