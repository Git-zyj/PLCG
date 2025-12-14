/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = ((127 - (arr_1 [i_0])));
        var_16 += ((+(((arr_0 [2]) ? (arr_1 [i_0]) : var_5))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 = ((~(arr_2 [i_1])));
        var_18 = (max(var_18, var_3));
        var_19 = (!((((arr_1 [i_1]) ? -41775 : ((var_12 ? var_0 : (arr_1 [6])))))));
        var_20 = ((((min(1, 23761))) << ((((-(arr_1 [i_1]))) + 41862))));
    }
    var_21 = (min(var_21, (((((((var_14 * var_14) * ((23761 ? 0 : var_4))))) - var_0)))));
    #pragma endscop
}
