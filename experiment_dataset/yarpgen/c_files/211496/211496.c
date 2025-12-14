/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_6 ? ((-var_3 ? var_5 : (!var_0))) : (~var_18))))));
    var_20 = ((1919857255 ? var_13 : ((((var_6 ? var_5 : var_15)) + var_16))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        var_21 = var_13;
        var_22 = ((((arr_1 [i_0 + 3]) == 1919857255)));
    }
    #pragma endscop
}
