/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 ^= ((var_2 ? (arr_2 [0]) : ((var_12 ? ((var_14 ? var_15 : var_11)) : (max(var_2, var_11))))));
        var_18 = (((((var_14 ? 9223372036854775807 : var_3))) || ((((((var_4 ? var_9 : var_11))) ? var_15 : var_0)))));
    }
    var_19 = var_1;
    #pragma endscop
}
