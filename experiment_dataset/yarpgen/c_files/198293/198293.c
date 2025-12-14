/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 226;
    var_21 |= (((((var_6 ? var_16 : var_7))) ? (max(4030714951, (((18 ? var_1 : var_17))))) : (((~((36914 ? var_4 : 18425)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = var_3;
        var_23 = (max((((~var_16) ? ((var_14 ? (arr_1 [i_0] [i_0]) : (arr_0 [1]))) : (min((arr_1 [i_0] [i_0]), var_9)))), ((min(var_7, (!45))))));
    }
    #pragma endscop
}
