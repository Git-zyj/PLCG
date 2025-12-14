/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(((max(1, (arr_0 [i_0])))), (max(65535, ((-(arr_1 [1])))))));
        var_20 = (max(var_20, (~56171)));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((-7922069986276926222 ? ((var_5 ? 7780280426451042279 : var_17)) : -7780280426451042280))));
        var_21 = (max(var_21, var_1));
        arr_3 [i_0] = 10576;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = (max(var_22, (((!((((!0) ? (arr_5 [i_1]) : var_3))))))));
        var_23 = var_10;
    }
    #pragma endscop
}
