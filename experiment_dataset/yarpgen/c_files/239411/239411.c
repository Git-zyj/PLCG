/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? var_10 : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_6));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    var_14 = (min((var_9 * var_11), -var_9));
    #pragma endscop
}
