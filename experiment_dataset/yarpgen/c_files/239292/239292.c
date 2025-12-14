/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -var_4));
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 &= ((((arr_1 [8]) / ((63 ? (arr_1 [10]) : (arr_0 [0]))))) * (arr_1 [2]));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (arr_4 [i_1])));
        arr_5 [i_1] &= (~-34);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 = var_11;
        var_19 -= (arr_7 [i_2] [i_2]);
    }
    #pragma endscop
}
