/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((var_16 ? var_17 : var_10))) ? (~var_17) : var_9)))));
        var_19 = (min(var_19, (!var_10)));
        var_20 += (min(((var_9 ? ((max(var_4, var_3))) : var_4)), var_15));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = ((!((min(var_14, var_14)))));
        arr_5 [i_1] = ((min(var_13, var_1)));
    }
    var_21 = ((var_5 ? var_10 : var_10));
    #pragma endscop
}
