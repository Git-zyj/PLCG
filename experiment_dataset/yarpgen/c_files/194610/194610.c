/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, (((((4611686018360279040 ? 3661283508 : 24)) < 2475601093)))));
        var_19 = ((2475601093 ? 6556 : -71));
        var_20 = ((((((!(arr_1 [15]))) ? 217 : (max(var_10, 13835058055349272566)))) + ((min(var_12, ((var_4 ? (arr_1 [i_0]) : 1)))))));
        arr_3 [i_0] = 4611686018360279049;
    }
    var_21 = var_14;
    var_22 = ((min(var_1, (max(217, 2146882097)))));
    var_23 = ((!(((var_3 ? var_14 : -9)))));
    #pragma endscop
}
