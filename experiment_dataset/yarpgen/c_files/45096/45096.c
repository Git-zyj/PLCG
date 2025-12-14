/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = 952755573;
        var_14 = (arr_1 [3] [3]);
        var_15 = (arr_0 [i_0]);
        var_16 = (((arr_0 [i_0]) / (arr_1 [i_0] [17])));
    }
    #pragma endscop
}
