/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_6 || (var_1 == var_7))))) <= (max(((0 ? var_1 : var_8)), (max(var_0, var_11))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 -= (((0 ? (arr_2 [i_0 + 3] [i_0]) : var_8)) >> (((~0) + 44)));
        arr_4 [i_0] = 1;
        var_14 = var_3;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [9] = ((~((5 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
        var_15 -= ((((~(arr_7 [i_1] [i_1]))) & 1));
    }
    #pragma endscop
}
