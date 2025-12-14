/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 = (min(var_16, ((-(20246 > 159)))));
        var_17 = 9223372036854775807;
    }
    var_18 = (((1 << ((((var_11 ? var_4 : var_13)) + 2674783067804879355)))));
    #pragma endscop
}
