/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-((var_9 ? var_14 : var_16)))), ((min(var_14, var_10)))));
    var_19 = ((((((-1357417581 ? var_15 : 1)) ? 80452659 : 105))));
    var_20 = var_3;
    var_21 = ((var_2 ? var_15 : var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (arr_0 [10]);
        var_23 = var_8;
        var_24 &= var_15;
    }
    #pragma endscop
}
