/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 >> (((398587420 == (max(var_3, -7)))))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((max(var_10, var_9))) ? var_5 : (((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0 - 3]))))))))));
        var_18 |= ((((((var_9 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0])))) ? ((1 ? 16 : (arr_0 [i_0]))) : (arr_0 [i_0]))));
        var_19 = ((var_1 ? ((~(((arr_1 [i_0]) ? var_14 : var_0)))) : (((2143212530 | 1) ? ((1 << (62557 - 62554))) : (!1)))));
    }
    var_20 |= ((var_3 + ((((((max(var_3, var_14))) && -145678782))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = var_13;
        var_22 *= (((var_1 ? (arr_5 [i_1]) : var_7)));
        arr_6 [i_1] = ((var_3 ? var_0 : 1342360235));
    }
    #pragma endscop
}
