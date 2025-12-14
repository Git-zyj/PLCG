/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((-366951131 ? var_5 : -691040438)))));
    var_12 = ((-(((((var_1 ? var_5 : var_3))) ? var_1 : ((var_10 ? var_1 : var_7))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (max(var_13, (((691040438 ? 1 : 1)))));
        var_14 = (min((min((arr_0 [i_0]), ((var_7 ? 833873532 : 1)))), ((~(var_6 & 2147483647)))));
        arr_3 [i_0] = ((-(((arr_0 [i_0]) ? ((max(-14853, var_1))) : (~1)))));
    }
    #pragma endscop
}
