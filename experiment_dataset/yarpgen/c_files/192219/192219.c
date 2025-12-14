/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 *= (min(8176, ((+(((-2147483647 - 1) ? var_7 : (arr_1 [i_0])))))));
        var_11 = (max((min((min(var_3, (arr_1 [i_0]))), 1447918425306152438)), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_12 = -31886;
        arr_5 [i_1] = var_9;
        var_13 = (arr_2 [i_1] [i_1]);
        var_14 = (!var_8);
    }
    var_15 = var_5;
    var_16 = ((var_1 ? ((((min(var_9, var_5))) ? ((3137992112 ? 0 : 2394110148)) : var_6)) : (((-8176 ? (~var_8) : ((var_1 ? var_2 : 2147483647)))))));
    #pragma endscop
}
