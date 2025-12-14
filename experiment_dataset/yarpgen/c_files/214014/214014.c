/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = (((var_13 + var_6) ? ((1758829473 ? 1 : var_13)) : var_8));
        var_16 += ((var_8 ? var_10 : var_0));
        var_17 = ((~((var_11 ? var_1 : var_6))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 = ((!(((1 >> (var_5 - 167954025241631164))))));
        var_19 += (((-var_11 ? -var_10 : ((var_8 ? 2536137813 : var_3)))) & (((((!-32759) > (var_1 && var_8))))));
    }
    var_20 = var_8;
    #pragma endscop
}
