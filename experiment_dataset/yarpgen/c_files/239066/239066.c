/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_7 >> (var_6 - 27052))) >= (var_6 * var_0))))) > (((max(var_8, var_7)) + (var_2 ^ var_6)))));
    var_11 = (((((((var_9 ? var_3 : var_0))) ? var_5 : ((var_1 ? var_5 : var_4)))) / (((min(var_2, var_8)) >> (((min(var_8, var_2)) - 107))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 -= ((arr_1 [i_0]) ? (arr_1 [i_0]) : (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))));
        var_13 = ((((-(arr_0 [14] [9]))) ^ (((((arr_0 [i_0] [i_0]) < (arr_1 [i_0])))))));
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 = (arr_1 [i_1]);
        arr_5 [i_1] |= (((((((arr_1 [17]) >= (arr_4 [12] [i_1])))) >> (((arr_1 [2]) / (arr_1 [i_1]))))) >= ((((max((arr_3 [i_1] [i_1]), (arr_2 [i_1]))) >= (min((arr_3 [i_1] [i_1]), (arr_2 [i_1])))))));
    }
    #pragma endscop
}
