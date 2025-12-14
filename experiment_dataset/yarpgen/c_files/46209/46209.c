/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(4095, var_8)) > var_15)) ? (((((var_10 && var_7) > var_2)))) : var_0));
    var_19 = (((-8 && -var_4) && (39514 && -2070918967)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = ((26022 && (((arr_1 [i_0 + 1]) && var_16))));
        var_21 = ((+(((arr_0 [i_0 + 1]) ? ((max(63, 42746))) : (((arr_0 [i_0]) ? var_16 : 39514))))));
    }
    #pragma endscop
}
