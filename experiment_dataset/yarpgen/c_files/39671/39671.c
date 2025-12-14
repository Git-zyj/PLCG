/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= -var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, ((((arr_0 [i_0]) ? ((42724 ? 42724 : var_0)) : var_1)))));
        var_15 ^= ((0 - 0) ? (arr_1 [i_0]) : (arr_1 [i_0]));
        arr_2 [i_0] |= (((arr_0 [i_0]) < var_0));
        var_16 = (min(var_16, (((var_3 ? (arr_1 [i_0]) : var_4)))));
    }
    var_17 |= ((~((((min(0, -2714183914667874251)) <= (1 | 1))))));
    var_18 += 20223;
    #pragma endscop
}
