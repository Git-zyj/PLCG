/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 1;
        var_20 = (min(var_20, (((((((arr_0 [i_0]) < 1)) ? (max((arr_1 [i_0]), (arr_1 [9]))) : var_11))))));
    }
    var_21 = (((((((min(var_7, 16))) ? var_3 : -var_9))) ? (((32 * var_13) * ((1 ? var_10 : 127)))) : ((((max(var_1, var_6))) * var_13))));
    var_22 = (~((15 ? (1 - var_6) : (~var_4))));
    #pragma endscop
}
