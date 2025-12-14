/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_14;
    var_19 = var_11;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = var_0;
        var_21 &= -2475;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((((!(arr_1 [i_1 + 2]))))) == (((arr_3 [i_1 + 2]) - var_2))));
        var_22 += (((((~(arr_4 [i_1 + 2] [i_1 + 1])))) ? (max(var_9, var_5)) : ((((arr_2 [1]) ? (arr_2 [6]) : (arr_2 [8]))))));
        var_23 = ((var_1 ? (max(var_15, (arr_4 [i_1 - 1] [i_1 + 1]))) : (arr_4 [i_1] [i_1 - 1])));
        var_24 += var_3;
        var_25 = (max(var_25, -4537297332557711752));
    }
    #pragma endscop
}
