/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((min(var_16, var_9))) ? (~var_19) : var_12)) >> ((((var_14 ? (((var_4 ? var_6 : var_17))) : ((239 ? 9007198180999168 : 9333815622688176952)))) - 1340766492))));
    var_21 &= var_4;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_22 = (max(var_22, (((18242713632397661032 ^ 19126) & 218))));
        var_23 = (((((((-(arr_0 [i_0])))) ? (min((arr_0 [i_0]), var_9)) : (arr_0 [i_0 - 4])))) ? ((19941 ? (arr_1 [i_0]) : (min((arr_1 [i_0]), var_3)))) : (((-(((arr_1 [i_0 - 2]) ? (arr_0 [i_0]) : (arr_0 [i_0 - 2])))))));
        var_24 = 218;
    }
    #pragma endscop
}
