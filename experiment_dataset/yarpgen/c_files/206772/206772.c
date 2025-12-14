/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? var_5 : (((((min(1924720554, 2461529003255565499))) ? (var_6 || var_5) : var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = var_2;
        arr_4 [i_0 + 1] &= ((var_7 / (arr_3 [i_0 + 2])));
    }
    #pragma endscop
}
