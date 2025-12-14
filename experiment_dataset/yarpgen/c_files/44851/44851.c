/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_13 & var_15) ? (((1720217447 ? var_5 : var_11))) : var_12)) >> (var_6 + 1383687335));
    var_17 -= (((((63 ? (max(17210800, 17210800)) : 4277756503))) ? (38790 / 4277756475) : -344827923518061677));
    var_18 = (!4277756496);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [20] |= ((min((arr_2 [2]), (arr_2 [0]))) ? ((var_3 | (arr_0 [i_0]))) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0))));
        arr_4 [i_0] = (max(((-(arr_2 [i_0]))), ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : var_9))) ? (var_4 + 28926) : ((var_11 ? (arr_0 [3]) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = ((((((arr_0 [i_1]) | (arr_0 [4])))) ? (((arr_0 [i_1]) | var_8)) : (((arr_0 [i_1]) & var_3))));
        var_20 = ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? ((~(arr_7 [i_1]))) : (((arr_7 [i_1]) ? var_7 : (arr_7 [i_1])))));
    }
    var_21 *= (var_1 ^ var_7);
    #pragma endscop
}
