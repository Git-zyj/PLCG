/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_0 ? var_5 : var_6))) ? (min(var_17, var_0)) : var_6))) ? (((((var_5 ? var_3 : var_12))) ? var_2 : -var_7)) : (((((min(var_1, var_8))) * var_5)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))) ? (max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (arr_1 [7] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_21 = arr_1 [i_0] [i_0];
        var_22 = ((((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) ^ (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 132))))))) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (((arr_3 [i_1]) ? (max((((arr_1 [i_1] [i_1]) * (arr_0 [0] [0]))), (arr_1 [i_1] [i_1]))) : ((~(min((arr_3 [i_1]), (arr_1 [i_1] [i_1])))))));
        arr_6 [i_1] = ((!((((-(arr_4 [i_1] [i_1])))))));
        var_23 = (arr_4 [i_1] [i_1]);
    }
    var_24 = var_9;
    var_25 = (max(var_25, (((((max(var_8, -var_3))) || (((var_7 / var_19) || (var_9 / var_8))))))));
    #pragma endscop
}
