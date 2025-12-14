/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0 - 1] [i_0 + 1]);
        arr_5 [i_0 - 1] = (((var_0 ? 170 : (arr_1 [i_0] [i_0]))));
        arr_6 [i_0] [i_0] = ((-(arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = ((max((((arr_9 [i_1]) ? 33546240 : var_9)), 984953132)));
        arr_12 [i_1] = var_7;
    }
    var_14 = var_0;
    var_15 &= ((((((min(var_8, 984953117))) ? (min(var_9, var_2)) : var_7)) + var_0));
    #pragma endscop
}
