/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? (((((148 ? 47 : 11))) ? ((-1 ? var_6 : 0)) : (var_1 == var_9))) : (((~var_16) ? (27 * 0) : var_13))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (~1);
        var_19 ^= ((~(arr_1 [i_0 - 1])));
        var_20 = var_13;
        var_21 = (arr_1 [i_0 - 1]);
    }
    var_22 = (0 | 1638119431);
    #pragma endscop
}
