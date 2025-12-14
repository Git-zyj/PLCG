/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_7);
    var_21 = (max(var_21, var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (!var_13);
        var_22 = (max(var_22, ((((!(arr_2 [3])))))));
        var_23 = (max(var_23, (arr_2 [i_0])));
        var_24 = ((22106 ? ((var_6 ? (arr_2 [i_0]) : 2251799813423104)) : (((var_16 ? (-127 - 1) : (arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
