/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        arr_2 [i_0] |= (!(((var_0 ? (arr_0 [i_0] [i_0]) : 13770753271541442158))));
    }
    var_20 = (min(var_20, ((((((var_8 ? (max(var_13, var_1)) : (~var_8)))) != var_16)))));
    #pragma endscop
}
