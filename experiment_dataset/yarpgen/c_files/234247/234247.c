/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(-3566112123799174749, 96))) ? var_1 : (var_10 + var_15)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = -122;
        var_18 = arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = -96;
        var_20 = (min(var_20, 3030));
    }
    #pragma endscop
}
