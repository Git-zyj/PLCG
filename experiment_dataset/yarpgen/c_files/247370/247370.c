/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (((2214429697372937266 ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_3 [i_0] = var_3;
        var_21 = (min(var_21, var_13));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (-9223372036854775785 - (max((arr_0 [i_1] [4]), (arr_4 [i_1] [i_1]))));
        var_22 += (((9223372036854775782 <= (arr_1 [3]))));
        var_23 = (min((((arr_2 [i_1]) << (arr_2 [i_1]))), var_2));
        var_24 = ((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_1 [i_1]))));
        arr_8 [i_1] [i_1] |= ((((((arr_2 [i_1]) - var_17))) != (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((max(6439890379425824456, (min(-9223372036854775787, 0)))));
        arr_13 [11] = 9223372036854775787;
        var_25 &= (arr_1 [i_2]);
        arr_14 [0] [i_2] = (((((((arr_6 [4] [3]) ? var_13 : var_17))) ? (min((arr_5 [i_2]), (arr_11 [i_2]))) : var_1)) / var_12);
    }
    var_26 = (!var_6);
    #pragma endscop
}
