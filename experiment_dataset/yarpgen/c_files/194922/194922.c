/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((var_10 ? ((-3304112606512074576 ? 8519421157022527327 : var_11)) : (((max(11, -52)))))) << ((((((min(1, var_17))) ? ((var_5 ? 4216942927098677473 : var_11)) : var_19)) - 4216942927098677446)))))));
    var_21 = (((((var_16 ? var_10 : 56)) < -var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (!var_18);
        var_22 ^= (((1546342113022976044 <= 2428604400) ? ((30335 << (var_0 - 28748))) : var_9));
        var_23 |= ((358463676 < (arr_1 [i_0] [i_0])));
    }
    var_24 = var_4;
    var_25 = -5101947822128348755;
    #pragma endscop
}
