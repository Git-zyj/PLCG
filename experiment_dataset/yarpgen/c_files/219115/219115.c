/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) * (((((var_11 ? var_4 : -289547581))) ? -var_5 : 23145))));
        var_13 = min((((~(((arr_0 [i_0]) & -107))))), (min((arr_1 [i_0]), 15470)));
        var_14 *= (((((((min(var_10, 85))) / -var_11))) <= ((((max(12182238152074651175, 452588156))) ? -1 : 22799))));
        var_15 = (((((~4459299172631463565) == (1 ^ 107))) ? (var_8 + 0) : ((((6554886657547737089 / 98) / (((-22 ? (arr_0 [i_0]) : -9039))))))));
    }
    var_16 -= (((((((var_5 ? var_3 : var_8)) ^ (((var_5 ? var_11 : -111)))))) ? (var_11 | var_1) : (var_7 >= 1)));
    #pragma endscop
}
