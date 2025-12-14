/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;
        var_18 = (((16421 / var_3) ? (((arr_0 [11]) & var_10)) : (arr_0 [i_0 + 2])));
    }
    #pragma endscop
}
