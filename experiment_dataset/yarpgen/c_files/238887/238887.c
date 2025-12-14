/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((123 / 1241171470) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_17 = (arr_0 [i_0] [i_0]);
    }
    var_18 = (((((((min(var_13, var_8))) | var_8))) ? (1 || 2748794419) : (min(var_10, 0))));
    #pragma endscop
}
