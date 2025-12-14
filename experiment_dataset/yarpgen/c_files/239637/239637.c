/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = 0;
        var_20 = ((-1 ? (arr_0 [i_0]) : -var_12));
    }
    var_21 = (min(var_21, -2066310991337742390));
    var_22 = ((((max(var_15, var_14))) ? (~var_13) : var_7));
    #pragma endscop
}
