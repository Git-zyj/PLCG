/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_14 ? -4 : 8522825728)) != ((((!(((2 ? -15 : var_15)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (min(var_18, (((-4 ? ((((arr_2 [i_0]) <= var_4))) : 8)))));
        var_19 &= ((!(3 < var_11)));
    }
    var_20 = (((((var_12 ? var_12 : (min(var_16, 9))))) ? ((max(((var_2 ? var_1 : 1)), ((min(var_7, var_8)))))) : (((((8 ? 7235 : var_14))) ? (((min(252, var_7)))) : 8125535625522191723))));
    var_21 = ((var_9 <= (((min(var_0, var_5))))));
    #pragma endscop
}
