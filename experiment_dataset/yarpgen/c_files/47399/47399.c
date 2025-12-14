/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = ((var_15 + (0 && var_12)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_21 = (min(var_21, (((arr_1 [9]) + ((16033 ? (arr_1 [i_0 + 2]) : var_10))))));
        var_22 = (((((~(arr_0 [17])))) ? (arr_0 [i_0 + 2]) : (arr_1 [i_0 - 1])));
        var_23 &= (arr_0 [i_0 - 2]);
        arr_2 [i_0 - 3] [i_0] = (((arr_0 [i_0 + 1]) % (arr_0 [i_0 - 2])));
        var_24 = 60304;
    }
    var_25 = ((~((var_12 ? (3 | var_10) : var_3))));
    #pragma endscop
}
