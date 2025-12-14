/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? 9007199254740991 : (arr_1 [i_0]))) | (var_2 | -1917191784)));
        arr_3 [i_0] [i_0] = -1142767474;
        var_10 = (min(var_10, (((65 ? (((arr_1 [i_0]) | 2475562742)) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_11 = ((~((~(arr_4 [i_1 - 1] [i_1 - 1])))));
        var_12 = ((((arr_4 [i_1 - 2] [i_1 - 2]) >> (239 - 211))) * ((~(arr_4 [i_1] [i_1 + 1]))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_13 = ((((max((max((arr_0 [i_2] [i_2]), (arr_7 [i_2] [i_2]))), (((31 && (arr_1 [i_2]))))))) ? (max(((var_5 ? var_6 : var_8)), ((((arr_7 [i_2] [i_2]) <= 26313))))) : var_2));
        arr_8 [i_2] = ((4611686018427387900 ? (arr_7 [i_2 + 2] [i_2 + 2]) : (arr_6 [i_2])));
        var_14 = (((~(min(3201298612, 1)))));
        arr_9 [i_2] = var_8;
    }
    var_15 = var_9;
    var_16 -= var_1;
    var_17 = (max(var_17, (~var_8)));
    #pragma endscop
}
