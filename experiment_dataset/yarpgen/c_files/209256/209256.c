/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_15));
    var_21 = (min(var_21, ((((max(var_2, 1201681853)) * var_7)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((134215680 ? ((((max(-134215664, var_11))) ? (arr_0 [i_0] [i_0]) : (((var_10 - (arr_1 [i_0])))))) : ((var_18 ? 3586384118 : (arr_1 [i_0])))));
        var_22 *= (min(1, (arr_1 [8])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 -= ((157 ? 134215680 : 95));
        arr_6 [i_1] = (((var_17 > var_15) != (~-24)));
        var_24 = var_8;
    }
    #pragma endscop
}
