/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((2147483627 ? var_2 : 1250869623))) ? var_0 : 1)));
    var_15 = (((((1 ? 26534 : 20429))) * ((975466660 & ((var_12 ? 6704455250379596371 : var_9))))));
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_0 [i_0])));
        arr_2 [i_0] = 247;
    }
    #pragma endscop
}
