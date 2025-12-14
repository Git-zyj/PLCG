/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max(1757059243, ((var_17 ? var_11 : ((1757059243 ? 54 : var_3))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, (934103811 >= var_19)));
        var_22 = ((-(!1757059231)));
    }
    #pragma endscop
}
