/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((min(var_2, -5528900206090025652))) ? 13955061085636917723 : var_0)), 48));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = (arr_0 [i_0 - 2]);
        var_18 = (((((var_4 ? -1 : var_8))) | 4159250972));
        var_19 = (arr_1 [i_0]);
    }
    var_20 = var_0;
    #pragma endscop
}
