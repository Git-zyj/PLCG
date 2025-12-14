/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((max((max(var_3, var_13)), ((max(var_12, var_10)))))), (min((~var_2), (!var_5)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_15 = (~var_6);
        var_16 = -var_10;
    }
    var_17 = ((~((max((max(var_5, var_9)), (max(var_3, var_13)))))));

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = var_12;
        arr_6 [i_1] = ((!((max(var_10, var_11)))));
        var_18 = (max(((~((min(var_6, var_10))))), (((max(var_11, var_11))))));
        var_19 = (((((var_0 ? (min(var_4, var_5)) : (((max(var_12, var_13))))))) ? (max(var_0, var_3)) : var_1));
    }
    #pragma endscop
}
