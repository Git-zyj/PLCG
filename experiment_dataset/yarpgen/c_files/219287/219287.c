/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 = (((var_7 <= var_13) - (!35)));
        var_18 = (max(var_18, var_1));
    }
    var_19 = ((((var_4 <= (~var_7)))));
    #pragma endscop
}
