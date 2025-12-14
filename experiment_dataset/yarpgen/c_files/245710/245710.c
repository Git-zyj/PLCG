/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_9);
    var_17 = (min(var_17, var_8));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (((((-((max(118, 73)))))) ? (arr_0 [i_0] [i_0]) : (((min(var_10, 255))))));
        var_19 = 249;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 += (max(((((-(arr_1 [i_1]))))), ((((165 ? (arr_0 [i_1] [i_1]) : var_1)) >> (var_6 - 37)))));
        var_21 &= 0;
        arr_4 [i_1] = min((((!(arr_3 [i_1])))), (arr_0 [i_1] [i_1]));
    }
    #pragma endscop
}
