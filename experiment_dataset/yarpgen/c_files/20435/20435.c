/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((max(var_11, var_13)), var_8))) ? var_7 : (((((var_4 ? var_8 : var_0))) ? var_4 : ((var_6 ? var_12 : var_12)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (~var_9);
        var_16 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (((arr_1 [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])));
        arr_6 [i_1] = (((arr_0 [i_1]) % (arr_0 [i_1])));
    }
    #pragma endscop
}
