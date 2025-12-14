/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_6;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_21 = var_15;
        var_22 = var_0;
        arr_3 [i_0] = var_7;
        arr_4 [1] [i_0] = (min((max(var_17, var_17)), (var_12 / var_12)));
        arr_5 [i_0] = var_14;
    }
    var_23 = (max(var_23, ((max(var_3, (min(var_15, var_12)))))));
    var_24 = ((!((((var_10 & var_6) ^ var_3)))));
    #pragma endscop
}
