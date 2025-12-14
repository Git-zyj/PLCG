/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (((var_0 || (arr_0 [i_0 + 1] [i_0 + 1]))));
        var_14 &= (arr_1 [i_0 + 1]);
        var_15 = ((1 ? (max(((max(var_4, var_10))), ((var_2 ? 1 : var_1)))) : (((((arr_1 [2]) + 2147483647)) << (arr_0 [9] [i_0])))));
        var_16 += 4294967295;
    }
    var_17 = var_3;
    var_18 = ((((126 ? var_8 : var_10))) % ((var_11 >> (((min(var_1, -3888275127702822850)) + 3888275127702822857)))));
    var_19 = (max(var_19, (~var_11)));
    #pragma endscop
}
