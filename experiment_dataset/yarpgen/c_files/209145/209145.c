/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(((var_6 ? var_11 : var_7)), (var_1 != 11581)))) ? (min(-63, (var_8 | var_4))) : (var_7 - var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) == (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0]) + 1))) ? -1417339846 : (arr_0 [i_0]));
    }
    var_14 = ((-(!var_5)));
    var_15 = (((!var_5) - var_10));
    var_16 *= 0;
    #pragma endscop
}
