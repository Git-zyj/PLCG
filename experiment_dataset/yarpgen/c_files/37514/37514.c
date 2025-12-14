/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((((var_10 / 31) ? (var_11 + 1) : (var_8 / -3573642415562481113)))) ? var_7 : (min(13424303830418441154, 31))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((-3573642415562481113 != (arr_1 [i_0])));
        arr_2 [8] |= (arr_0 [i_0] [i_0]);
    }
    var_18 = (max(7639, (-56 - 49776)));
    var_19 = (((var_0 - ((var_14 ? var_8 : var_10)))) + -7627);
    #pragma endscop
}
