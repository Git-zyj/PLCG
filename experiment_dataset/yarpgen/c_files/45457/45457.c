/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((var_15 | var_10) ? var_12 : ((var_3 ? var_8 : var_4)))))));
    var_17 = ((var_14 && (var_7 || 315520836)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (var_5 ? (arr_0 [18]) : (((((-36 ^ 3979446461) && (!var_3))))));
        var_19 = (max(var_19, (((((!(arr_0 [i_0 - 3]))) ? (arr_0 [i_0 - 2]) : var_4)))));
    }
    #pragma endscop
}
