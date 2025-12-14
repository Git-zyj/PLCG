/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_3, var_13));
    var_18 = ((var_10 ? var_8 : (max(((min(var_9, var_13))), (max(var_10, var_14))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((((arr_0 [i_0 - 1]) ? -16435 : 101))) ? (min((((arr_0 [i_0]) ? (arr_1 [12]) : (arr_0 [i_0]))), (((arr_1 [i_0]) ? var_14 : (arr_1 [i_0]))))) : (((((~(arr_0 [i_0 - 1])))) ? ((var_9 ? (arr_1 [i_0]) : (arr_0 [9]))) : (arr_1 [i_0])))));
        arr_2 [i_0] = var_3;
    }
    #pragma endscop
}
