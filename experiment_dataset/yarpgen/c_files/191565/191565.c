/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (min(var_20, ((((arr_0 [i_0] [i_0]) ? var_12 : 12105)))));
        var_21 = (max(var_21, (((var_13 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] &= ((~(arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? ((93 ? 45008 : -90)) : (arr_1 [i_0])));
    }
    #pragma endscop
}
