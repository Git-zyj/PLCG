/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((+(min(((((arr_1 [16] [i_0]) - (arr_1 [4] [4])))), var_8)))))));
        var_20 = (max(var_20, var_0));
        var_21 = (((((var_9 ? (arr_0 [i_0]) : var_7))) ? (var_8 && 0) : ((var_11 ? 30181 : 65535))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_18, (1 || 30187)));
        var_23 = (min(var_23, var_5));
    }
    var_24 = (min(var_24, var_10));
    #pragma endscop
}
