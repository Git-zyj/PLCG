/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 79428395;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(((((((arr_0 [i_0]) ? var_8 : (arr_1 [i_0])))) ? ((215 ? (arr_1 [2]) : (arr_0 [i_0]))) : 63)), (((!(arr_1 [i_0]))))));
        var_17 = min((min(((var_13 ? var_4 : (arr_1 [i_0]))), 920374470)), (((!(920374470 - 69)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 = (max(195, 57));
        var_19 = var_14;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = (((!(arr_6 [i_2] [i_2]))) ? var_5 : 15);
        var_21 |= (((((var_5 ? var_5 : var_4))) ? (!102) : (((arr_5 [12] [10]) ? (arr_3 [13] [i_2]) : (arr_3 [i_2] [4])))));
    }
    var_22 = (((((var_9 ? var_3 : ((max(var_11, 76)))))) ? var_1 : ((33554431 ? 0 : 35098))));
    #pragma endscop
}
