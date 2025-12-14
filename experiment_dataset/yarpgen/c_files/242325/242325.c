/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((var_10 ? var_5 : (var_7 != var_0)))) ? var_11 : ((var_5 ? ((var_16 ? var_5 : var_11)) : var_16))));
    var_18 = (min(1930297326, ((((min(-1041915082, var_15))) ? var_6 : var_5))));
    var_19 ^= var_8;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_20 = 35267;
        arr_2 [i_0 + 3] = ((30269 ? 35276 : 49950));
    }
    #pragma endscop
}
