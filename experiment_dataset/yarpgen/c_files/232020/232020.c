/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, -var_13));
        arr_3 [i_0] [i_0] = var_6;
    }
    var_22 = ((!((((((1 ? 4294967295 : 9223372036854775808))) ? var_8 : 4294967285)))));
    var_23 = ((var_10 ? (((~((var_12 ? var_10 : var_12))))) : (((!var_1) ? ((var_4 ? var_18 : var_4)) : (~var_18)))));
    var_24 += (!var_2);
    #pragma endscop
}
