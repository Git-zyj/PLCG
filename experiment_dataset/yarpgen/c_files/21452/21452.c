/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((((var_3 ? var_12 : var_16))) || var_0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_21 ^= (((arr_0 [i_0 - 2]) <= -3216231127694210961));
        var_22 = (min(var_22, (((1 << (-479231494 + 479231554))))));
        arr_4 [i_0] = ((~(arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_23 -= (!((!(arr_3 [i_1]))));
        arr_7 [i_1 - 1] |= (!-471607844);
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_24 = (min(var_24, var_6));
        var_25 = ((max(var_13, (arr_8 [i_2 - 1] [i_2 - 1]))));
    }
    #pragma endscop
}
