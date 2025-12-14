/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 -= (arr_2 [9]);
        var_21 = (min(var_0, var_2));
        var_22 = (((min((arr_3 [i_0]), (arr_0 [i_0] [i_0]))) << (((((((arr_3 [i_0]) ^ var_13)) % ((((arr_1 [i_0]) + (arr_3 [5])))))) - 1467891445))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (min((((arr_6 [i_1]) ? var_12 : (arr_6 [i_1]))), (((-8858790145909532432 >= ((min((arr_5 [i_1]), var_9))))))));
        arr_8 [i_1] = 2130562675;
        var_23 -= ((((arr_5 [i_1]) ? (-32767 - 1) : (arr_6 [i_1]))));
    }
    var_24 &= ((var_13 ? var_6 : var_16));
    #pragma endscop
}
