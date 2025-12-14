/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ^ (205 && 50)));
    var_16 += var_0;
    var_17 -= (231 - 205);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = ((((arr_1 [i_0]) | 223)));
        var_19 -= ((84 || (59238 & 614154547171099953)));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_20 &= ((((((var_6 >> (9489133037626133383 - 9489133037626133380))) - 0)) ^ ((141 >> (((arr_4 [i_1 + 2]) + 19))))));
        var_21 -= (max(((var_5 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1]))), ((172 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 2])))));
    }
    #pragma endscop
}
