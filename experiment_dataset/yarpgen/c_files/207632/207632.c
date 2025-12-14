/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((var_15 ? var_14 : var_9))) ? ((var_1 ? var_12 : var_18)) : (~6144))))));
        var_21 = ((10060976397925900197 ? -1352320348 : var_1));
        arr_2 [i_0] = ((var_1 ? var_12 : var_10));
        var_22 = (min(var_22, (var_2 >= 22818)));
    }
    var_23 = ((~((((-31117 ? 31117 : var_0)) ^ ((var_13 ? var_19 : var_15))))));
    var_24 = ((var_1 ? (min(var_9, (min(var_3, var_4)))) : var_11));
    #pragma endscop
}
