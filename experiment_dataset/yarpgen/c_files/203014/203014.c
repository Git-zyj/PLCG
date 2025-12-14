/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((6133678018709538403 | 1023) ? 3 : (max(959383421, var_3))))) ? var_10 : (min(6133678018709538403, var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 ^= -1023;
        var_19 = ((12313066055000013212 ? var_11 : var_5));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((-((min(0, (arr_3 [i_1]))))));
        var_20 = ((-(arr_0 [i_1] [i_1])));
    }
    var_21 = (min(var_8, (max((!26), (var_5 + var_11)))));
    var_22 = var_6;
    #pragma endscop
}
