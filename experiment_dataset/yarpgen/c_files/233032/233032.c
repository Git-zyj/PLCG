/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= -13;
    var_19 = (min(var_0, var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 += (((min(var_14, (8153868176152541681 % 13))) << (var_2 + 728800244)));
        var_21 -= ((var_7 ? (arr_0 [i_0] [i_0]) : 13));
        var_22 = (min(var_22, (var_14 || var_10)));
    }
    var_23 = (max(var_23, var_16));
    #pragma endscop
}
