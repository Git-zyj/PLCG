/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (4294967295 ? 4294967276 : 15);
        arr_4 [1] = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (var_9 ^ var_11) : (((var_4 << (9223372036854775794 - 9223372036854775794)))))) : ((((((17 ? var_4 : -1))) ? var_13 : var_1)))));
    }
    var_15 = ((!(((((max(var_14, 31744))) - (var_1 > var_6))))));
    var_16 = var_10;
    var_17 = ((((((max(1105702425, 4))) ? ((var_7 ? var_5 : 2093622064)) : 0)) / ((((((0 ? var_14 : var_5))) ? ((0 ? var_9 : 32)) : var_14)))));
    #pragma endscop
}
