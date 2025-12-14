/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_17 *= (max((!1964436985117536213), -var_11));
        var_18 = ((120 ? ((max(((var_6 ? -118 : 601363714)), var_9))) : var_10));
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        var_19 = (min(var_19, ((((~(arr_1 [1])))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (min(var_11, ((var_10 ? var_9 : (~var_11)))));
        var_21 = (arr_3 [i_1] [16]);
    }
    var_22 = ((-78065431834432379 + (max(var_0, (max(var_7, var_5))))));
    #pragma endscop
}
