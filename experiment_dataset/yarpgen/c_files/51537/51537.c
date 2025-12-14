/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (max(var_18, (((((((-4450116401248102583 && 233) ? var_7 : -32765))) && (((var_6 && 32761) && (65521 && var_3))))))));
    var_19 &= ((var_14 | ((var_9 ? (min(0, var_2)) : var_13))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((((((arr_2 [i_0]) * (arr_1 [i_0])))) ? (((var_14 * (arr_2 [i_0])))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = (max((((var_5 ? ((max((arr_2 [i_0]), 0))) : (((arr_2 [17]) ? var_7 : 32758))))), (min((arr_1 [i_0]), 219))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_21 = ((var_6 | (((((max(255, -32753)))) ^ ((var_11 ? (arr_5 [i_1]) : (arr_6 [6])))))));
        var_22 = ((((max(((32787 ? -32742 : var_9)), (arr_5 [i_1 - 1])))) ? (((min(var_14, 0)))) : var_5));
        var_23 += (arr_6 [5]);
        var_24 = (max((((((28606 ^ (arr_6 [i_1])))) ? (arr_6 [i_1 - 1]) : (((var_10 ? var_15 : (arr_5 [i_1])))))), var_10));
    }
    var_25 = ((0 ? var_16 : var_2));
    #pragma endscop
}
