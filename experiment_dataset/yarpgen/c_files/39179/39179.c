/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_20 = ((55 ? (arr_1 [i_0]) : (arr_0 [i_0] [16])));
    }
    var_21 = (max(var_21, ((((!var_10) ? (max(var_3, ((var_1 ? var_19 : 1)))) : (((~((var_18 ? var_0 : var_18))))))))));
    var_22 = (max(((var_11 ? var_14 : (!var_15))), -55));
    #pragma endscop
}
