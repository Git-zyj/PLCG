/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, (((min(15, -15))))));
        var_14 = ((((min((((var_8 ? var_0 : var_7))), (max(var_9, var_0))))) ? ((((min(var_9, var_6))) ? ((max(var_1, var_11))) : -15)) : var_11));
        var_15 = (min(var_15, (((-5829599797049951107 ? ((((15 ? 67076096 : 67076103)))) : -15)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_16 = 5829599797049951131;
        var_17 = ((~(var_11 / var_8)));
        var_18 = (min(var_18, -1));
        var_19 = (~var_2);
        arr_4 [10] [i_1] = -var_1;
    }
    var_20 -= (((((~(max(0, 21))))) ? (min((-6532149176636248379 > 267386880), var_9)) : var_4));
    var_21 = ((var_0 ? ((var_10 ? (6111828614723327111 / -20) : 2147483647)) : ((min(var_4, (max(-15, var_12)))))));
    #pragma endscop
}
