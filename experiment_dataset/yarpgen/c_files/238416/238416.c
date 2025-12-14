/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_2, (max(var_10, 24))))) ? ((var_6 & ((24 ? var_7 : var_3)))) : (~2)));
    var_14 = var_8;
    var_15 = (max(var_11, 4294967259));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = var_5;
        arr_4 [i_0] [i_0] = var_9;
        var_17 = var_1;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_8, (arr_1 [i_1])));
        var_19 = -2017612633061982208;
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        arr_11 [7] |= ((~(min((-2147483647 - 1), (((arr_1 [i_2]) ? var_4 : var_11))))));
        arr_12 [4] = ((-0 * (var_7 * 117)));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_20 = (((arr_3 [i_3] [0]) < ((var_4 ? (min((arr_0 [i_3]), var_7)) : 1))));
        var_21 = (((((((max(var_10, 189)))) & (max(var_5, var_7)))) & var_9));
    }
    #pragma endscop
}
