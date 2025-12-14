/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));
    var_13 = (((((~var_6) >= 197)) ? (28 & var_6) : var_2));
    var_14 = (((59463 || 1768621969) >= var_4));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 ^= (min(((((9297935698881922727 ? (arr_2 [i_0]) : 4292069035)) & 11393)), ((((arr_3 [i_0]) && var_8)))));
        var_17 = (((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0])));
        var_18 = 2016;
    }
    #pragma endscop
}
