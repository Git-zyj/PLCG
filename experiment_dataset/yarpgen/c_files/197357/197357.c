/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? 8122777698981620703 : ((min(((var_10 * (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_0 [i_0]))))))));
        var_15 = ((((((((arr_0 [i_0]) * (arr_1 [i_0])))) ? ((((arr_0 [i_0]) ? var_2 : (arr_0 [i_0])))) : (((arr_1 [0]) ? 1 : 3947241396))))) ? (max((arr_0 [8]), (((arr_1 [i_0]) + var_6)))) : (((~(arr_0 [i_0])))));
    }
    var_16 = (((((var_6 ? ((var_12 ? 16143021870214406189 : -54)) : 7502876793866289327))) ? ((min((1 * var_1), ((var_7 ? var_8 : 1))))) : ((((min(var_12, 1))) ? ((var_11 >> (123 - 113))) : var_7))));
    var_17 = var_4;
    var_18 = var_7;
    #pragma endscop
}
