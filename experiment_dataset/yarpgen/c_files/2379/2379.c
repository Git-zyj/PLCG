/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? ((var_11 ? 603803976 : var_7)) : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [3] = (16459 * var_9);
        arr_3 [1] [i_0] = ((~(arr_0 [9])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_17 *= (!var_9);
        var_18 = var_9;
    }
    var_19 = 1;
    #pragma endscop
}
