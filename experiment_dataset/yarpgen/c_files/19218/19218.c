/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (max((max((arr_2 [i_0 - 1]), (((-2078000288 ? var_0 : var_0))))), (((1409571228 ? -var_5 : (arr_0 [i_0]))))));
        var_19 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
    }
    var_20 = (max(var_0, var_13));
    var_21 = (min(var_15, var_6));
    #pragma endscop
}
