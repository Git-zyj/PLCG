/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_2));
        var_14 = (((arr_2 [i_0 - 1] [i_0 - 2]) / var_12));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = 251;
        var_16 -= ((((((var_0 ? (arr_4 [i_1] [i_1]) : var_6))) ? (((arr_4 [i_1] [i_1]) ? var_5 : (arr_0 [i_1]))) : 276581768)));
        var_17 = ((-(arr_3 [i_1 - 1])));
    }
    var_18 = 3;
    var_19 = var_5;
    var_20 = ((((((var_6 ? var_3 : var_3)))) ? var_4 : ((884016345 ? 9007198986305536 : 252))));
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
