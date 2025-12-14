/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((~((min(var_17, var_4))))))));
    var_21 = ((~((-(98304 ^ 106)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_22 = (arr_2 [i_0]);
        var_23 = (min(var_23, ((((((var_16 ? (!var_14) : ((var_14 ? (arr_1 [i_0]) : var_13))))) ? ((((!(arr_1 [i_0]))))) : var_13)))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_24 = (((((98288 ? (min((arr_0 [i_1] [i_1]), (arr_2 [i_1]))) : ((var_8 ? var_16 : (arr_3 [i_1])))))) ? (((arr_0 [i_1 + 1] [i_1]) & (!98304))) : (((((arr_0 [i_1] [i_1]) ? -98304 : (arr_4 [i_1 - 1] [i_1 - 1])))))));
        var_25 = var_16;
        var_26 = ((max(((var_8 & (arr_2 [i_1]))), var_14)) - (min(94, -98304)));
    }
    var_27 = ((-6456 ? 0 : 106));
    #pragma endscop
}
