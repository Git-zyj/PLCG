/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = (((min((max((arr_3 [i_0]), (arr_3 [i_0 + 1]))), (((-(arr_1 [i_0])))))) == (arr_0 [i_0])));
        var_18 = ((8 | (!-var_16)));
        var_19 = (((arr_3 [i_0 + 1]) & (arr_1 [i_0])));
        var_20 = ((((-(arr_3 [i_0 - 1])))));
    }
    var_21 += var_4;
    var_22 = (min(var_16, ((var_12 ? -var_14 : var_5))));
    var_23 = var_1;
    #pragma endscop
}
