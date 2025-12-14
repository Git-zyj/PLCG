/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_12));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 -= ((((((((min(52045, 52031)))) > (((arr_2 [i_0] [12]) ? 6853141834941770804 : (arr_1 [i_0] [i_0])))))) - (((max((arr_2 [5] [i_0]), 13490))))));
        var_18 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = (max(((((min(-9223372036854775801, (arr_3 [i_1 - 2])))) ? ((~(arr_3 [8]))) : ((((!(arr_4 [13]))))))), ((min(8192, (arr_4 [10]))))));
        arr_5 [i_1] = (!var_6);
        arr_6 [i_1] = (max(((var_11 ^ (min((arr_3 [i_1 - 1]), var_5)))), ((((arr_4 [i_1]) >= 161)))));
    }
    for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_20 = var_2;
        var_21 = (min(var_21, 1723466977));
    }
    var_22 = (~var_11);
    var_23 = (((!var_2) ? (((~((var_10 ? var_1 : var_14))))) : (max(((var_6 ? var_6 : var_14)), 37326))));
    #pragma endscop
}
