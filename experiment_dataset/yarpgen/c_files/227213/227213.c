/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_7, -162));
    var_21 = var_12;
    var_22 = (~var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = 91;
        var_24 *= ((arr_1 [i_0]) ? 90 : (arr_1 [i_0]));
    }
    var_25 = (~var_10);
    #pragma endscop
}
