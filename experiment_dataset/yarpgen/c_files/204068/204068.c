/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3745240990;
    var_16 = var_1;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = ((var_11 ? ((((0 > (~var_5))))) : ((var_1 ? 549726307 : var_10))));
        var_18 = (max(var_18, (((-(((var_12 ? var_1 : var_14))))))));
        var_19 = (min(var_19, -3745240966));
        var_20 = (max(var_20, (((~((min(var_1, var_4))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (max(var_21, (((-23 ? 3745240990 : var_0)))));
        var_22 = (max(var_22, var_12));
        var_23 = ((+(((arr_2 [i_1] [i_1]) | 24359))));
    }
    #pragma endscop
}
