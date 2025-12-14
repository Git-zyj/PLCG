/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = ((~(-9223372036854775807 - 1)));
        var_11 = (((((((arr_2 [i_0]) ? var_9 : (arr_1 [10])))) ? (14 || 1625) : (arr_0 [6]))));
        var_12 = (((min(1, 1)) ? ((var_1 ? (arr_1 [i_0]) : var_9)) : (arr_0 [i_0])));
    }
    var_13 = var_7;
    var_14 = var_9;
    #pragma endscop
}
