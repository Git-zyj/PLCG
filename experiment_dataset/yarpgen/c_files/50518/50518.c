/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0] [i_0 + 1]) & 232));
        var_17 = (max(var_17, -var_1));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 |= (((((var_7 ? var_10 : 232))) ? ((min(-var_10, var_14))) : ((~(arr_3 [i_1] [i_1])))));
        var_19 = ((max((((1796339213 < (arr_0 [i_1] [i_1]))), (arr_3 [3] [1])))));
    }
    var_20 |= ((var_0 < (((var_7 * var_1) ? (min(var_11, 228)) : var_4))));
    #pragma endscop
}
