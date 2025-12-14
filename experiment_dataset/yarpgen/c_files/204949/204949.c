/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(0, (((((var_4 ? 416374033 : 416374033))) ? ((var_2 ? var_4 : 5284834644728560102)) : ((max(var_11, var_10)))))));
        var_15 = (max(730791042, 3878593262));
    }
    var_16 = ((((((max(var_13, var_6))) ? ((2749 ? 3878593256 : var_2)) : 416374046))) ? (((((416374055 ? var_4 : var_13))) ? (((var_10 ? var_0 : var_9))) : ((var_13 ? var_8 : var_5)))) : (((var_7 ? var_0 : ((var_13 ? var_0 : var_4))))));
    var_17 &= ((((((((96 ? 3147348650 : 1))) ? ((1022 ? var_10 : 43220)) : (((416374062 ? 584108864 : 0)))))) ? ((1 ? 1 : 4294966273)) : var_7));
    #pragma endscop
}
