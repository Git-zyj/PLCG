/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += min(var_16, (((var_15 / var_17) * var_6)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = var_10;
        arr_2 [i_0] = (((max((arr_1 [i_0] [i_0]), (max((arr_0 [i_0]), var_12)))) <= ((((arr_1 [i_0] [i_0]) ? 1791 : var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_6;
        arr_7 [i_1] |= ((var_11 ? (arr_3 [i_1]) : (var_12 != 3017601137272625210)));
        var_20 += 55123;
        var_21 = (min(var_21, ((((!(arr_5 [i_1])))))));
        var_22 = (max(var_22, 1));
    }
    #pragma endscop
}
