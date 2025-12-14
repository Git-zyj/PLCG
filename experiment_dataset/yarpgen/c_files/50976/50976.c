/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((var_3 ? (max((-127 - 1), var_12)) : var_7))) ? var_9 : var_4));
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        var_16 = (arr_1 [11]);
    }
    var_17 = var_3;
    #pragma endscop
}
