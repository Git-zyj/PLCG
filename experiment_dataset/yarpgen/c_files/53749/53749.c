/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 -= (((arr_0 [i_0] [i_0]) & 22799));
        var_15 = -1;
    }
    var_16 = 3221225472;
    var_17 = var_13;
    #pragma endscop
}
