/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-((var_4 ? var_10 : 0))))) ? (var_3 * 0) : (~0)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_1 [i_0] [i_0]), var_6))) ? (((((var_3 ? var_0 : (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((max(0, 167))))));
        var_15 = (-((((arr_0 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_16 = max((arr_3 [i_1] [i_1]), (max((((var_7 ? (arr_3 [i_1 + 2] [i_1 + 2]) : var_2))), ((var_13 ? (arr_3 [i_1 + 1] [i_1 + 1]) : var_13)))));
        arr_5 [i_1] = (((arr_4 [i_1]) != ((var_13 * (((arr_3 [i_1] [i_1]) / (arr_4 [i_1 + 1])))))));
    }
    #pragma endscop
}
