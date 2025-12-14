/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (12289806389379774568 & 3141);
        var_14 = ((!((var_7 == (min(var_6, var_8))))));
        var_15 &= (min(((~((-10877 ? (arr_2 [10]) : 62377)))), (arr_1 [i_0] [0])));
        var_16 = (min(((3141 ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : -44867)), 62395));
    }
    var_17 *= 9086074567497897019;
    var_18 = var_9;
    #pragma endscop
}
