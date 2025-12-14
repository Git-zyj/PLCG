/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_6;

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((94 ? (arr_1 [i_0]) : 1)));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 -= (178 ? (arr_6 [9]) : (min((~1), var_1)));
        arr_7 [i_1] = 64698;
        arr_8 [i_1] [i_1] = arr_1 [8];
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, 161));
        var_21 = (~1);
    }
    #pragma endscop
}
