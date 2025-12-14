/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((arr_0 [4]) + (arr_0 [2])))));
        var_19 = 7;
        arr_3 [i_0] [4] &= ((((((arr_2 [i_0]) / 107))) / (max((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 *= (arr_0 [i_1]);
        var_21 = ((-2401 ? (arr_0 [i_1]) : (arr_0 [1])));
        var_22 = (max(var_22, -121));
        arr_6 [i_1] = (2 <= 255);
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_23 = ((((~(17 && var_3)))) && 65535);
        var_24 = (~65535);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_13 [5] = var_0;
        var_25 = ((112 + (max(((min(var_0, var_13))), ((22 ? 230 : 255))))));
    }
    var_26 = ((((max((!255), 1125899906842623))) && ((max(var_6, var_15)))));
    var_27 = 38533;
    #pragma endscop
}
