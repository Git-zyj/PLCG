/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_15;
        var_21 &= ((-(-127 - 1)));
        var_22 = ((~((((((arr_0 [6] [i_0]) ? var_12 : var_4))) ? var_8 : var_18))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = ((~(((((var_3 ? (arr_6 [i_1]) : var_14))) ? (~var_16) : (~var_7)))));
        var_23 = ((var_3 ? (((arr_6 [14]) ? -var_9 : (!var_6))) : ((((arr_5 [i_1] [i_1]) ? (!var_2) : 61)))));
    }
    #pragma endscop
}
