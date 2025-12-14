/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (((17592186028032 < 48227) | (min((arr_0 [i_0]), ((min((arr_0 [i_0]), var_14)))))));
        var_21 += (arr_0 [i_0]);
    }
    var_22 = -var_13;
    var_23 = (max((max(var_4, var_0)), (((!(((150 ? var_0 : 181))))))));
    var_24 = var_4;
    #pragma endscop
}
