/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (3585391834 != var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 *= ((((((arr_0 [i_0] [i_0]) ? 1483785140 : 3166674195))) ? (((arr_1 [i_0] [i_0]) + 1128293080)) : 2857697729));
    }
    var_16 = var_8;
    #pragma endscop
}
