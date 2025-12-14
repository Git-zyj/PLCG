/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_1 / 1) & var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (((var_13 ? (arr_2 [i_0]) : (arr_2 [i_0]))) - (((arr_2 [8]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        var_18 = (max(1, ((!(arr_3 [6])))));
        var_19 = ((1 ? -2176228329628148301 : ((((~153) ? (arr_1 [i_0]) : (min(1285619637, var_1)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [3] = ((8 <= ((1 ? 1 : 1677791336))));
        var_20 = 235;
    }
    #pragma endscop
}
