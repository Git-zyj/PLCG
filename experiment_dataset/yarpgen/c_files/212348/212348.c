/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = ((!(arr_0 [i_0] [i_0])));
        var_12 = (min(var_12, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 = (min(var_0, (-127 - 1)));
        arr_5 [i_1] = arr_2 [i_1];
    }
    var_14 |= var_9;
    #pragma endscop
}
