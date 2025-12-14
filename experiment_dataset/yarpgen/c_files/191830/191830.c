/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_9);
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (!((min((((arr_1 [i_0]) ? (arr_2 [i_0]) : var_4)), (arr_2 [i_0])))));
        var_17 |= (((!var_9) / (min((arr_2 [i_0]), (arr_2 [i_0])))));
        var_18 = (min(var_18, (((var_2 ? (arr_2 [i_0]) : (((~(arr_0 [i_0])))))))));
        var_19 -= ((9 ? ((-10 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) & (arr_0 [i_0])))));
    }
    #pragma endscop
}
