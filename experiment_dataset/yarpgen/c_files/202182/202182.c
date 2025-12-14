/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((var_8 ? ((2998392834 ? var_1 : 1296574461)) : -2058781340))) ? var_4 : var_4)))));
    var_11 = var_0;
    var_12 += var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = 2998392838;
    }
    var_13 = -var_4;
    #pragma endscop
}
