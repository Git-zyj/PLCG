/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_9;
    var_13 = var_0;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_14 ^= var_6;
        var_15 *= (((-(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = (!(arr_1 [i_1]));
        var_16 = (((0 | 1) >> (arr_2 [i_1] [i_1])));
    }
    #pragma endscop
}
