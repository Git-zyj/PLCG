/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_10 ? var_3 : var_4)) ^ var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, 16338));
        arr_2 [i_0] = 37894;
        var_16 = (~3);
        arr_3 [i_0] [17] = (!43068);
    }
    var_17 = var_5;
    var_18 = (min(255, 140616918));
    #pragma endscop
}
