/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_14 ? var_8 : ((var_13 ? 8204 : var_8))))) ? (((1477470695 ? 1477470708 : var_14))) : var_1);
        arr_4 [i_0] = ((((-28 | ((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) % (var_4 || var_8)));
    }
    var_16 = ((var_10 >= ((var_6 ? var_7 : (2817496612 ^ var_3)))));
    #pragma endscop
}
