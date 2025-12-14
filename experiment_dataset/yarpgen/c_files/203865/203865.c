/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((((((var_15 ? var_6 : var_12)))) ? ((~((var_16 ? var_9 : var_13)))) : ((var_15 ? ((var_10 ? var_5 : var_5)) : ((max(var_1, var_7)))))));
        var_18 |= (max((var_13 / var_6), (max(((max(var_6, var_12))), var_8))));
        arr_2 [i_0] [7] = ((-((-((var_0 ? var_6 : var_12))))));
        arr_3 [10] = (((((var_10 ? var_7 : var_1))) && (var_15 != var_0)));
    }

    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = (max((((((max(var_12, var_3))) ? var_7 : var_7))), (max(var_13, var_5))));
        arr_7 [i_1] = var_16;
    }
    var_19 = (((var_12 ? var_4 : var_0)));
    #pragma endscop
}
