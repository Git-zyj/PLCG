/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_9, ((((((var_16 ? var_12 : var_0))) ? var_1 : var_4))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = (!var_3);
        arr_2 [i_0 - 1] [i_0 + 1] = (((arr_0 [i_0 - 1]) & var_16));
        var_21 = ((var_8 ? var_2 : (~var_11)));
        var_22 -= ((var_7 ? 2147483647 : (arr_1 [i_0 - 1])));
    }
    var_23 += ((-((~(1 / var_12)))));
    #pragma endscop
}
