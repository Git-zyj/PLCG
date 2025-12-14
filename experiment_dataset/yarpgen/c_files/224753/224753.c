/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(var_2, ((var_2 ? 1 : var_15)))));
    var_17 = (min(1, (((((var_1 ? 1 : 4081))) ? var_15 : var_14))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = ((-4067 ? 1 : 19));
        arr_2 [i_0 + 1] [5] = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
