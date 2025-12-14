/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 -= var_11;
        arr_2 [i_0] [0] = ((((((arr_1 [i_0]) + var_6))) - (((min(var_10, var_11)) - (((min((arr_1 [3]), -102))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_4 [i_1]);
        arr_7 [i_1] = arr_5 [i_1];
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_15 = (((arr_4 [i_2 - 1]) ? (arr_9 [i_2]) : ((min((arr_4 [i_2 + 1]), (((arr_6 [i_2]) | var_5)))))));
        arr_10 [10] = (arr_3 [i_2] [i_2]);
        arr_11 [9] = (arr_9 [i_2]);
    }
    var_16 = var_11;
    #pragma endscop
}
