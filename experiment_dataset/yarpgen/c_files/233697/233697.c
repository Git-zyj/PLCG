/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_10 ? ((196 ^ (var_3 | var_1))) : 8813316999767069006)))));
    var_16 = var_12;
    var_17 = (((var_12 / (var_3 * 8813316999767069006))) % 1);
    var_18 = var_0;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_19 = (max(var_19, (((-var_11 && ((!(8813316999767069006 != var_0))))))));
    }
    #pragma endscop
}
