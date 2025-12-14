/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_3 - var_14);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_5 ? (arr_0 [i_0] [i_0]) : ((~((5990428011876343040 ? (arr_0 [i_0] [i_0]) : var_18))))));
        var_21 = ((((var_7 ? (var_19 - var_11) : (210 + 5990428011876343040))) | -var_0));
        var_22 = var_13;
    }
    #pragma endscop
}
