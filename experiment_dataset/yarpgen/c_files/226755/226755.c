/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((var_9 - var_7), (max(15, var_5))))) && (((var_2 ? var_7 : (1 - var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = ((var_1 ? (var_3 & -1) : var_8));
        arr_3 [i_0] = ((((var_5 * (arr_1 [i_0] [i_0]))) & var_8));
        arr_4 [i_0] &= (1 || 255);
    }
    #pragma endscop
}
