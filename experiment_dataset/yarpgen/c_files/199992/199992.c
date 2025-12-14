/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (!762753175);
        var_21 = (arr_1 [i_0]);
    }
    var_22 = (((((((-9223372036854775807 - 1) ? 60759 : 16355))) ? -var_12 : 60759)));
    var_23 = ((((((var_7 ? var_13 : var_19)) >> (((var_3 * var_11) - 4047214338)))) * ((((min(-756, 767)))))));
    var_24 = var_5;

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_25 = (((arr_2 [i_1]) ? var_0 : var_6));
        arr_6 [i_1] [i_1] = (((((~(arr_3 [i_1])))) && ((((((arr_3 [i_1]) <= 770)) ? var_3 : (arr_1 [8]))))));
        arr_7 [i_1] = (min((((1 ? var_6 : var_2))), (((((-(arr_4 [i_1]))) / var_3)))));
    }
    #pragma endscop
}
