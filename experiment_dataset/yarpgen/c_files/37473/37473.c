/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] [i_0] = (-(min(4058304665010772825, 2653000123)));
        var_19 = var_16;
        arr_5 [i_0] = var_6;
        var_20 = (min(var_20, (((1641967176 > ((((!14105) ? (arr_1 [i_0]) : (-1840649090 == var_3)))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (!98)));
        arr_10 [i_1] = (min((min((~var_6), var_8)), (min((arr_8 [i_1]), 8388607))));
        var_22 ^= -2653000123;
    }
    var_23 = min((((((4709488946369915338 ? var_3 : 0))) ? -var_9 : (-5817783558386605067 < var_16))), var_4);
    #pragma endscop
}
