/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!4341);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = 0;
        var_19 += (var_15 % 9187343239835811840);
        var_20 = var_2;
        var_21 = (max((((min(-235307479, var_14)))), (((var_5 - var_2) ? var_10 : (arr_0 [1])))));
    }
    var_22 = (~0);
    var_23 -= (max(var_11, 11946));
    #pragma endscop
}
