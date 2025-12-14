/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((((!var_2) == (var_0 * var_9))))) < 631976286);
    var_16 |= (var_6 && var_7);
    var_17 = (((((max(var_2, var_11)) ? (var_7 * var_12) : ((var_4 ? var_7 : var_5))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(-1761416426, (((var_9 - var_0) ^ 2118700442))));
        arr_3 [18] &= ((!(((var_14 * ((max(var_10, var_10))))))));
        var_19 = ((!(((var_9 * (((var_3 ? 0 : (-2147483647 - 1)))))))));
    }
    #pragma endscop
}
