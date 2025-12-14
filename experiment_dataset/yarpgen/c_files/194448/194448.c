/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0 - 1] = ((var_6 ? (arr_0 [i_0 - 1]) : var_2));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = var_2;
        var_15 = 49357;
    }
    var_16 = ((var_11 ? ((((min(var_2, var_2))) ^ 1878094589)) : ((((((716823350 ? var_2 : 2279351458)) >= var_0))))));
    #pragma endscop
}
