/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = (-1 >= (arr_1 [i_0 + 1]));
        var_14 = var_9;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (((var_3 | var_5) == (arr_2 [i_1 - 3])));
        var_15 = 197;
        var_16 = var_1;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_17 = (((arr_5 [6]) ? (arr_5 [2]) : var_5));

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_10 [i_2] [i_2] = (arr_8 [i_2]);
            var_18 = var_12;
        }
        var_19 = (((((arr_3 [i_2] [14]) / var_9)) << (((arr_7 [7] [i_2 - 1] [i_2]) - 13954))));
        arr_11 [i_2] = (~(arr_8 [i_2]));
    }
    var_20 = (max(var_3, (max(var_3, (!var_10)))));
    #pragma endscop
}
