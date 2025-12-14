/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((~(arr_1 [i_0])));
        var_18 = ((~((((arr_0 [i_0]) < 119)))));
    }
    #pragma endscop
}
