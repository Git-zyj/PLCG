/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((~133) + 2147483647)) >> 0))) ^ (min(0, 0))));
    var_19 = (var_12 && var_9);
    var_20 = (max(var_20, 36));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (max(var_21, (((-1 ? (arr_1 [0] [i_0]) : (((var_1 ? 1 : var_8))))))));
        var_22 = 1;
    }
    #pragma endscop
}
