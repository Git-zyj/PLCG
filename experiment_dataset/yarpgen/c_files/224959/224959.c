/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0]);
        var_21 = (((((var_13 - (arr_1 [12])))) ? ((2043 ? var_6 : 22543)) : (((arr_0 [i_0]) ? var_5 : var_10))));
        var_22 *= (((!22544) > 2033));
    }
    var_23 += (-21 / 2026);
    #pragma endscop
}
