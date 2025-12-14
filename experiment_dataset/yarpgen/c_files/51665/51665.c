/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (min(var_12, (arr_1 [i_0])));
    }
    #pragma endscop
}
