/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_1 ? var_11 : var_11)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = 1;
        arr_3 [i_0] = 29435;
        var_17 -= (((min(-29425, 0))));
    }
    var_18 *= ((((max(var_11, (max(var_8, var_3))))) ? ((var_8 ? (!var_13) : var_4)) : ((var_4 ? var_4 : -29447))));
    #pragma endscop
}
