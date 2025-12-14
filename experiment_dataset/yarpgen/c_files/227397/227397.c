/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_12 - var_18) ? var_2 : var_14));
    var_20 = (min(3228491081, var_8));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 |= -21218;
        var_22 -= ((3641221340 ? var_13 : (min(1, ((var_0 - (arr_0 [8])))))));
    }
    var_23 = var_6;
    #pragma endscop
}
