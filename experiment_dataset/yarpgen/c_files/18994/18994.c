/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_14 = ((((var_10 ? (var_3 | var_11) : 1)) < (min(var_12, var_9))));
        var_15 = ((var_6 && ((((max(var_6, var_10))) < (var_3 + var_1)))));
    }
    for (int i_1 = 3; i_1 < 6;i_1 += 1) /* same iter space */
    {
        arr_4 [2] = ((((max(var_13, var_3))) ? (max((min(var_3, var_6)), (var_0 < var_5))) : (((((var_6 < var_13) < ((144115188075855808 ? -144115188075855808 : var_0))))))));
        arr_5 [i_1 - 2] = (((((144115188075855808 ? -1535810996 : 137)) * (var_0 && var_13))));
    }
    var_16 = var_2;
    var_17 = ((var_3 ? var_10 : ((max(23, 0)))));
    #pragma endscop
}
