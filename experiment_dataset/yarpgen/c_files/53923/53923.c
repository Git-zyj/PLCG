/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 ? var_6 : var_0));
    var_21 = (max(var_21, ((!(((((1 ? 1 : 512))) && var_6))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_22 -= ((((28654 ? var_13 : ((min((arr_1 [18]), -30997))))) << (!-26898)));
        var_23 = (arr_1 [i_0]);
        var_24 -= 1;
    }
    #pragma endscop
}
