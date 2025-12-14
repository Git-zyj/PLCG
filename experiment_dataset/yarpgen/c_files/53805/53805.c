/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (256 / var_6);
        var_15 = (min(var_15, (arr_2 [i_0] [i_0])));
    }
    var_16 = (min(var_16, ((((-1 >= var_5) < ((((var_3 ? var_4 : var_2)) - var_1)))))));
    var_17 = var_7;
    var_18 = (6344878235407012544 & 25178);
    #pragma endscop
}
