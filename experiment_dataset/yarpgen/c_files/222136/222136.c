/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(((min(((min(-23, var_11))), (max(var_7, var_6))))), ((((max(var_11, var_1))) ? ((max(var_7, var_1))) : ((var_3 ? var_2 : var_0))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 &= (((arr_2 [i_0]) | (min(((max((arr_1 [i_0] [i_0]), var_0))), ((var_7 ? var_4 : var_11))))));
        var_15 = (max(23, var_8));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_16 *= ((-(max(((9223372036854775794 ? var_2 : (arr_4 [i_1 - 2] [i_1]))), var_11))));
        var_17 = ((!((((-(arr_3 [2])))))));
    }
    #pragma endscop
}
