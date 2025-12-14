/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((4294967295 ? 1333710060 : var_10)))) ? var_14 : (((0 * 1) >> (var_19 - 1907694556)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = -1461517229;
        var_21 = ((((var_0 ? (arr_0 [14]) : var_16)) * (arr_0 [i_0])));
        var_22 = (!-27778);
    }
    #pragma endscop
}
