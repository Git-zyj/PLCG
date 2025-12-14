/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_0 [i_0])));
        var_16 = (((arr_1 [i_0]) && (arr_1 [i_0])));
        var_17 |= (((arr_1 [i_0]) ? var_6 : var_10));
        var_18 = (min(var_18, ((((arr_0 [i_0]) ? (var_6 | var_8) : var_5)))));
    }
    var_19 *= (var_2 || var_7);
    var_20 = (((var_5 && (((3 ? var_7 : var_14))))));
    #pragma endscop
}
