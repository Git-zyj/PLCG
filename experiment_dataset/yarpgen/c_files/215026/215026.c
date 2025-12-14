/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((var_15 ? var_1 : var_4))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (!var_14);
        arr_3 [i_0 + 1] [i_0] = var_10;
    }
    var_20 = ((-(((var_6 ? var_14 : var_14)))));
    var_21 = ((var_10 ? var_3 : ((var_9 ? var_0 : var_4))));
    #pragma endscop
}
