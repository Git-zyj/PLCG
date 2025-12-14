/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = 1;
    }
    var_17 = ((((var_6 >> ((((var_12 ? var_2 : var_5)) - 6476873543807606497)))) << (((((min(var_3, var_12)))) / (max(2840100017, 8704836599677641894))))));
    #pragma endscop
}
