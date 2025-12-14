/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_12 ? var_8 : -15577))) && ((min(var_6, var_10)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= var_5;
        var_14 = ((!(arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_15 |= (~(~var_2));
        arr_6 [i_1] [4] |= ((!(var_11 || var_0)));
        var_16 *= var_8;
    }
    var_17 = var_12;
    var_18 |= var_9;
    var_19 = ((var_11 ? ((~(!36))) : var_2));
    #pragma endscop
}
