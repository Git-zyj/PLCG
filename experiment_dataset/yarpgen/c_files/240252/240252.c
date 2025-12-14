/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 -= (!19);
        var_18 = (((2725589747 ? 100 : 4095)));
        var_19 = var_13;
    }
    var_20 += var_3;
    var_21 = var_14;
    #pragma endscop
}
