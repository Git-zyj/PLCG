/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = -133;
        arr_3 [i_0] = (max(var_17, ((var_4 / (17 - -10)))));
        arr_4 [i_0] = (((!(-2855 != 24))));
    }
    var_18 = (((((1 && var_1) && (((var_15 ? -5 : var_3))))) && (((-17 ? -17 : -22)))));
    #pragma endscop
}
