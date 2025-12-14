/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~((var_0 ? var_5 : var_1)))));
    var_18 &= ((((((var_12 ? 6458 : var_9)))) ? -var_0 : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, (~-25)));
        arr_3 [i_0] = ((-39 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_20 -= (((arr_1 [i_0]) ? ((~(arr_0 [i_0]))) : -123));
    }
    var_21 *= ((((!((min(11321, var_13))))) ? var_15 : (!67100672)));
    #pragma endscop
}
