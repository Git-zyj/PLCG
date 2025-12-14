/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((98 ? 3629801963024344108 : -3629801963024344109));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [5] = (arr_1 [i_0]);
        var_14 = (min(var_14, (((var_0 ? var_10 : var_9)))));
        var_15 = ((((var_2 >> (var_7 - 46))) ^ (!var_7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((((var_10 >> (((arr_5 [i_1] [i_1]) - 26))))) ? (arr_2 [i_1]) : (((!(arr_7 [i_1]))))));
        var_16 = ((((arr_2 [i_1]) ? (arr_0 [i_1]) : var_5)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((var_7 ? var_10 : (arr_11 [i_2]))))));
        arr_12 [2] = (((max((arr_11 [i_2]), (arr_2 [i_2])))) ? (((((((arr_10 [i_2]) ? (arr_9 [i_2]) : var_11))) ? (((var_4 && (arr_4 [7])))) : var_7))) : (arr_7 [i_2]));
    }
    #pragma endscop
}
