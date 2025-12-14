/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = 273804165120;
        var_14 = (!var_11);
    }
    var_15 = ((((((var_8 + var_12) ? var_4 : var_8))) ? ((((min(var_3, -736858930))))) : var_5));
    var_16 = ((max(((var_10 ? var_7 : var_2), 2097088))));
    #pragma endscop
}
