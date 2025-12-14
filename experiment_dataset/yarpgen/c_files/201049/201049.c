/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = ((((((arr_0 [i_0]) ? var_14 : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((var_12 ? -3275390509327995055 : 16))));
        arr_2 [i_0] = arr_0 [i_0];
    }
    var_22 *= (((var_16 ? ((min(var_6, var_11))) : (min(var_9, var_1)))) << (((max(var_13, ((max(var_2, var_2))))) - 55)));
    #pragma endscop
}
