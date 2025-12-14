/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 = (!var_11);
        var_21 = var_7;
        var_22 = (arr_2 [i_0 + 1]);
        var_23 = (arr_1 [i_0] [i_0 + 1]);
        var_24 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_25 ^= (3258265967278245182 - 1792);
        var_26 = (min(var_26, (arr_4 [i_1] [i_1 + 2])));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_27 = (max(30401, (arr_7 [i_2 - 1])));
        arr_8 [i_2] = (((((-(arr_5 [i_2 + 1] [i_2 + 2]))))) ? (((((-84 ^ (arr_2 [i_2 + 2])))) ? var_10 : (arr_7 [i_2 + 2]))) : (((-(((!(arr_4 [i_2] [i_2]))))))));
    }
    var_28 = (max(((((var_8 ? var_6 : var_12)))), -15188478106431306430));
    #pragma endscop
}
