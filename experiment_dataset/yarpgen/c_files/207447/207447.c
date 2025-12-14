/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = (((var_3 > 18) ? 1 : var_11));
        var_14 = -6382356697544132468;
    }
    var_15 = ((20 ? 6382356697544132463 : -26912));
    var_16 = (((((var_10 * (!var_10)))) ? var_12 : (((3800880017 || var_10) | 3800880017))));
    var_17 = ((var_12 | (((-15 | var_3) ? -var_7 : -var_10))));
    #pragma endscop
}
