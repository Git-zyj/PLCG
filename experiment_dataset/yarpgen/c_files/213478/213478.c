/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((min(var_9, var_3))) ? (113628330207076156 | 23) : (((var_8 ? 12967 : 53))))), ((min(237, var_5)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((!((min((min(var_0, var_6)), (arr_1 [18]))))));
        var_12 = (max(var_12, ((min(var_2, 2915114485)))));
    }
    var_13 = (min(var_13, var_6));
    #pragma endscop
}
