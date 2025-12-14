/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 ? (1 ^ 5928842141437049869) : var_0));
    var_21 = (((((3501570404 | (min(var_16, 103))))) ? (((var_18 ? var_6 : var_9))) : ((((var_17 || (((var_19 ? 1 : var_10)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (max(var_22, (arr_1 [i_0] [i_0])));
        var_23 = (805306368 ? -var_11 : var_5);
    }
    var_24 = ((~(min(((1 ? var_9 : 262143)), (4294705145 <= var_4)))));
    #pragma endscop
}
