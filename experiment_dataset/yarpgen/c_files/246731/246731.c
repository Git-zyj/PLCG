/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((min((min(64172315391624848, var_8)), 1347213125)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = ((((-1347213125 % 1) ^ var_5)));
        arr_4 [i_0] [i_0] = var_1;
        arr_5 [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((!(12901 / var_13))));
        var_21 = (max(var_21, var_18));
        var_22 = (max(var_22, var_12));
        arr_10 [i_1] = (((~((12907 ? (arr_8 [i_1] [i_1]) : var_12)))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_15 [i_2] = 1398594486;
        arr_16 [i_2 + 2] [6] = (min(((-77 ? 123 : (arr_13 [i_2]))), var_0));
        arr_17 [i_2] = 5;
        var_23 = (min(var_23, var_10));
    }
    var_24 = 1;
    var_25 = -var_7;
    #pragma endscop
}
