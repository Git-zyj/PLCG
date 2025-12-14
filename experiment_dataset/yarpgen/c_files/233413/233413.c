/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_10 ^= ((((var_2 >= (arr_4 [0]))) ? (arr_4 [8]) : (!0)));
        arr_6 [i_1] = (((((arr_0 [i_1]) - (-83 / 438230832))) & ((((((max(1, (arr_1 [i_1 - 3] [18]))))) == (arr_4 [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_11 = var_2;
        arr_10 [i_2] = (arr_7 [i_2 + 1]);
    }
    var_12 = (((max(var_1, -3167030922137746756)) > (((((var_1 ? 1 : var_9))) + (var_4 / var_6)))));
    var_13 = 8070450532247928832;
    #pragma endscop
}
