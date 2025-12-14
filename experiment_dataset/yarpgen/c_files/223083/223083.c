/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-127 - 1) ? -1392173206 : var_10));
    var_21 = (((-127 - 1) * var_12));
    var_22 &= (!-var_15);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (31 >= 62860);
        var_23 = (max((((237 ? (arr_1 [i_0]) : (arr_1 [i_0])))), ((var_13 ? 8745881401191418697 : (arr_1 [i_0])))));
        var_24 = ((-(((189 | -31) ? (max(17179869183, 0)) : -var_2))));
        var_25 = ((((max(47440, var_17))) ? 224 : (-121 < 3023)));
    }
    #pragma endscop
}
