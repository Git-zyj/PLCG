/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((var_0 ? var_4 : var_7))) ? (min(8388607, 189)) : (min(var_0, var_6)))))));
        arr_2 [i_0] [i_0] = ((var_5 ? ((((min(var_10, var_12))) ? var_2 : var_2)) : ((min((!124), var_10)))));
        var_14 = ((((((((var_6 ? var_0 : var_2))) ? ((var_7 ? var_12 : var_0)) : var_8))) ? (((-(min(var_1, var_9))))) : (max(var_4, ((min(var_12, var_2)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!((max((((14119217424479270381 ? 243 : 72))), ((var_4 ? var_1 : var_0)))))));
        arr_7 [i_1] [17] = var_2;
    }
    var_15 = var_7;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (min(var_0, var_0));
        arr_11 [i_2] [i_2] = ((((max(var_5, var_1))) ? (((var_8 ? var_10 : var_10))) : ((var_6 ? var_7 : var_8))));
    }
    #pragma endscop
}
