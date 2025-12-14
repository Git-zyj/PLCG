/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = ((1 ? 32767 : 251));
        var_21 = (((251 / var_13) ? (arr_0 [i_0]) : 0));
    }
    var_22 = var_16;
    var_23 = ((var_2 ? var_11 : -29056));
    var_24 = ((((((0 ? var_8 : 255)))) ? (29056 ^ -1) : var_2));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 4;
        var_25 = (((68719476672 ^ var_5) ? ((var_11 ? 3292561208 : var_9)) : (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((var_0 ? var_1 : var_10)) & (~var_19));
        arr_9 [i_2] = (((~0) ? (min((var_19 > var_1), -255)) : ((max((arr_3 [i_2]), var_6)))));
        arr_10 [i_2] = (((var_5 == var_14) ^ (((arr_6 [i_2]) + 25096))));
    }
    #pragma endscop
}
