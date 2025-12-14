/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [2] &= ((~(arr_1 [5])));
        var_15 = (var_10 * var_8);
        var_16 = (((((arr_1 [i_0]) == -57900418)) ? 1 : (arr_0 [i_0])));
    }
    var_17 = var_14;
    var_18 &= var_7;
    #pragma endscop
}
