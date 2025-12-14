/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((((~(!16078202940549776086)))) & ((var_9 ? var_5 : var_6))));
    var_14 = (65535 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (!var_8);
        var_16 |= var_2;
    }
    #pragma endscop
}
