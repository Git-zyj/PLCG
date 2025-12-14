/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_5 ? -15313 : (var_2 / 1))) * var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = var_5;
        arr_3 [i_0] [i_0] = (~var_3);
        var_15 = 1907262647;
        var_16 = -var_7;
        var_17 += var_1;
    }
    var_18 = (max(var_18, ((((max((max(var_12, var_8)), var_12)) >= (!-8))))));
    #pragma endscop
}
