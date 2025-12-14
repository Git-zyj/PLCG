/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = var_4;
        var_18 -= ((((2930 ? (0 + 0) : -2930))) ? ((-2930 ? 11238813657284336583 : (arr_0 [2]))) : ((((arr_0 [8]) ? (!var_2) : var_13))));
    }
    var_19 = var_1;
    var_20 = var_5;
    #pragma endscop
}
