/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 += var_0;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 = (max(-var_5, var_7));
        var_16 = var_5;
        var_17 = (max(((min(var_2, var_0))), (max((max(-1949812034, 23766)), var_7))));
        var_18 += (min(((((max(var_10, var_6))) - (max(var_0, var_2)))), ((min(var_0, -var_6)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((var_5 / var_6) <= var_9)))));
        var_20 = var_10;
        var_21 = 1704494462;
    }
    #pragma endscop
}
