/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((((var_16 ? var_13 : var_2)))) ? var_4 : 774458990)))));
    var_19 *= var_0;
    var_20 = (((((min(var_13, 1498164907)))) ? ((-7768421551721930756 * (var_14 == -1))) : var_6));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = var_4;
        var_22 = 1498164884;
    }
    var_23 = var_1;
    #pragma endscop
}
