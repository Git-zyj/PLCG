/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0]) & (arr_2 [i_0])));
        var_21 = (max(var_21, 46390));
        var_22 = ((0 ? 20976 : 1));
        var_23 = (11 ? 16936107459988280968 : -1741220366);
        arr_4 [i_0] = 32767;
    }
    var_24 = (0 % var_8);
    #pragma endscop
}
