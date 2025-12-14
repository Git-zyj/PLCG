/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((((arr_2 [i_0]) ? (arr_0 [i_0]) : 21794289)));
        var_20 = (max(var_20, (((var_12 && (arr_2 [i_0]))))));
    }
    var_21 = var_3;
    var_22 = ((~(var_12 * var_18)));
    var_23 -= ((((((((var_12 ? var_8 : var_3))) ? ((4389284684500641682 ? 4273173006 : var_17)) : var_10))) ? 21794289 : ((4389284684500641689 ? ((var_7 ? -4389284684500641682 : var_3)) : (((var_16 ? 2595401445 : var_6)))))));
    var_24 ^= var_16;
    #pragma endscop
}
