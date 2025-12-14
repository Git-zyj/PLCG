/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((var_3 || (((var_16 ? var_17 : 2147483647)))));
        arr_5 [i_0] [i_0] = (10273 <= 64);
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_10 [i_1] = (((((-(((arr_9 [20]) ? 191 : 24))))) || ((((32764 < 4278190080) ? -1 : var_5)))));
        var_20 = 268435455;
        var_21 -= ((arr_9 [i_1 - 3]) ? (((arr_9 [i_1 - 1]) + (arr_9 [i_1 + 2]))) : (((arr_9 [i_1 + 3]) + (arr_9 [i_1 - 1]))));
        var_22 = 65535;
    }
    var_23 = var_6;
    #pragma endscop
}
