/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (((((var_7 ? 128 : var_9))) ? (((2825126476 ? (arr_1 [9]) : var_13))) : ((var_2 ? 3 : (arr_1 [i_0 + 2])))));
        var_20 = (((((var_18 ? 58141 : (arr_1 [i_0])))) ? ((var_12 ? (arr_0 [i_0]) : 7394)) : ((602739778 ? (arr_0 [i_0]) : var_17))));
    }
    var_21 = (min((((((1 ? var_15 : var_8))) ? (((min(var_15, var_9)))) : ((var_9 ? var_2 : var_14)))), ((max(((max(97, var_18))), ((var_9 ? 3776495744363657167 : 3692227535)))))));
    #pragma endscop
}
