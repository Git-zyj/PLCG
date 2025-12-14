/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_3 ? 1 : var_8))) ? var_0 : -var_2))) || var_0));
    var_14 += ((((max(var_9, var_12)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, 1));
        var_16 = (max(var_16, var_12));
        arr_3 [i_0] = (((((var_7 ? (arr_0 [i_0] [i_0]) : var_7))) ? ((var_4 & ((var_9 ? var_12 : (arr_0 [i_0] [i_0]))))) : var_12));
        arr_4 [i_0] = (max((((arr_1 [i_0]) & (arr_0 [i_0] [3]))), (~var_4)));
    }
    #pragma endscop
}
