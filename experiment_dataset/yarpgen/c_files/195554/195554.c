/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(var_7, var_6))) ? var_2 : (((-24089 ? 0 : 0)))))) ? var_0 : (max(((var_13 ? var_10 : var_6)), 6))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (max(3, -1371892638));
        var_16 = (arr_0 [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((((((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_13)) ^ 6)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((~(-27797 | 1)));
        arr_8 [i_1] [i_1] = var_4;
    }
    var_17 = (min(var_17, var_10));
    var_18 = (((1 * -32626) ? ((((254 ? 0 : var_5)) * var_3)) : (((var_10 >> (var_13 - 8212996822102159019))))));
    #pragma endscop
}
