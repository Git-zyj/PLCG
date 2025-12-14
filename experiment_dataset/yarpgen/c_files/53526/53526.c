/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 *= 2545620227;
        var_21 = 41818;
        var_22 += 1592292771505907184;
        arr_3 [i_0 + 2] = -122;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1 + 1]) ? ((-(arr_5 [i_1]))) : -108)));
        arr_7 [i_1] [i_1] = var_5;
    }
    var_23 = (min(var_0, (min(((min(27, 29678))), ((121 ? var_18 : var_14))))));
    var_24 = var_13;
    #pragma endscop
}
