/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (42972 / 42970);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((-((22564 ? 22564 : var_15))))) ? ((((((max(var_6, 32767))) >= -22563)))) : ((max(-20, 1)))));
        arr_5 [i_0] = ((((-((1 ? 212187588 : -3237969459284942692)))) - -var_14));
        var_18 = ((((((var_15 ? var_7 : var_15))) ? ((max(var_16, 42972))) : ((var_8 ? var_16 : 20)))));
        var_19 = (((((-((179 ? (-9223372036854775807 - 1) : var_10))))) ? var_15 : ((46912 ? ((var_1 ? (-9223372036854775807 - 1) : var_0)) : (((var_16 ? var_7 : var_4)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] &= ((-(max((var_13 || var_2), var_16))));
        var_20 -= (((((-5 || 157) ? var_6 : ((32 ? -4 : 13900980862794408310)))) | ((((((var_12 ? (-127 - 1) : 0))) ? var_3 : ((max(var_15, var_4))))))));
        var_21 += -455060867;
    }
    var_22 = (((-((-1 ? -83 : 3839906429)))));
    #pragma endscop
}
