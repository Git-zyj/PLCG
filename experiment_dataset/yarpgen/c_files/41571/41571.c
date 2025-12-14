/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (var_2 ? (((((var_5 ? var_10 : var_3)) * 4294967295))) : ((((min(var_10, var_3))) ? ((255 ? (arr_0 [i_0]) : var_7)) : (((arr_0 [i_0]) * var_10)))));
        arr_2 [i_0] = (((((var_0 + 9223372036854775807) << (var_11 - 19130))) & ((((1 | var_9) ? var_2 : (~23054))))));
        var_15 -= ((125 ? (((var_6 ^ 12223983781738911422) ? (~var_5) : (~var_1))) : var_10));
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
