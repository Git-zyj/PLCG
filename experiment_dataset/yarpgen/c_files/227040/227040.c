/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (4748748383704612493 ? 0 : 14577388570403245922);
        var_20 ^= 4294967295;
    }
    var_21 = ((((((82 || var_1) * (((-127 - 1) ? 9965560400212325013 : 906995977))))) ? ((((max(var_12, var_9))) ? ((140737488224256 ? 19 : var_13)) : var_13)) : (((~(((-127 - 1) * var_10)))))));
    var_22 = -var_2;
    var_23 = 4294967294;
    var_24 = var_17;
    #pragma endscop
}
