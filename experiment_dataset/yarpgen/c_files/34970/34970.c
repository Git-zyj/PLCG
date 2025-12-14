/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((min(((12567457816706901211 ? var_14 : -13520)), 65535))), (min(var_5, (max(371031623851133321, var_5)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = ((433905889 ? (max((((1 ? var_8 : 177))), (min(var_11, 1)))) : ((((max(1, 12567457816706901211))) ? (max(var_5, 209)) : (!var_8)))));
        arr_4 [i_0] = ((((min(43, -28427))) ? var_0 : ((((max(1153, var_8))) ? (min(3107155588, var_15)) : 433905892))));
        var_19 = -4;
    }
    #pragma endscop
}
