/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (((((1 ? 1 : (arr_2 [i_0])))) ? (arr_0 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_1 [1]) ^ (((((0 ? (arr_4 [i_1] [i_1]) : 0))) ? ((0 + (arr_2 [i_1]))) : (((arr_4 [i_1] [i_1]) ? 1 : 1))))));
        var_17 = ((((((arr_5 [i_1] [i_1]) ? 1 : (arr_2 [i_1])))) ? 1 : 1));
    }
    var_18 = (((((1 * var_14) == var_14)) ? (((((var_8 ? var_8 : var_8)) == (~1)))) : (((min(var_12, 1)) ? ((var_5 ? var_3 : var_5)) : ((var_8 ? var_10 : var_3))))));
    var_19 ^= (((((var_0 ? 1 : 1))) ? var_11 : 0));
    var_20 = (min(((var_9 ? ((var_9 ? 1 : 1)) : ((1 ? var_5 : 1)))), ((max((min(1, 1)), var_10)))));
    #pragma endscop
}
