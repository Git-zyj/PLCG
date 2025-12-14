/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_1 >= var_1) ? var_3 : (var_6 || var_5)))) > var_5));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((((((((var_5 ? (arr_1 [2] [i_0 - 1]) : var_3))) ? var_9 : var_10))) ? var_3 : (max(var_1, ((max(var_10, var_8)))))));
    }
    var_13 = ((var_10 ? ((((var_1 != var_1) ? (((var_3 ? var_7 : var_4))) : var_2))) : (min(((var_6 ? var_1 : var_9)), (var_9 ^ var_2)))));
    #pragma endscop
}
