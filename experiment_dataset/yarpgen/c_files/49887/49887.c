/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((536608768 ? 2638146231 : 4195577438)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= (!25406);
        var_16 *= (arr_2 [0]);
    }
    var_17 = ((((min((var_11 || 2647935004), var_4))) ? (!14154) : 16200));
    var_18 *= ((!(((((var_1 ? var_9 : var_8)) + var_1)))));
    #pragma endscop
}
