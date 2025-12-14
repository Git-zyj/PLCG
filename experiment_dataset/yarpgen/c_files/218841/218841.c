/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((!(((((max(var_3, var_13))) ? var_1 : var_4)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((((min(-var_7, -var_6))) ? (((!(arr_1 [i_0] [i_0])))) : 182));
        var_15 = var_9;
        arr_5 [i_0] = (arr_3 [i_0]);
        var_16 = (min(((((((-(arr_3 [1]))) + 2147483647)) << ((((((-(arr_2 [i_0] [i_0]))) + 215)) - 2)))), ((((max(var_12, (arr_2 [i_0] [i_0])))) ? (arr_3 [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    var_17 = (min(var_12, (max(((var_5 ? var_3 : var_9)), (var_13 + 90)))));
    #pragma endscop
}
