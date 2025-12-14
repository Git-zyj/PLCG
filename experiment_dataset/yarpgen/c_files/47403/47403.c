/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_7 - 1);
    var_16 = ((27 ? var_4 : var_4));
    var_17 = ((~(max(880494842, 154))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
        var_18 = ((43 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_19 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    var_20 -= var_9;
    #pragma endscop
}
