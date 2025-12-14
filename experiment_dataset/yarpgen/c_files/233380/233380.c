/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min(var_4, var_13)), (max((var_1 == var_1), (max(var_0, var_5))))));
    var_19 = ((((~var_5) ? (713875007560099672 & 4) : (((min(var_10, var_15)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((var_17 * var_9) ? (((((arr_1 [i_0]) > var_13)) ? ((((arr_3 [11] [i_0]) ? var_1 : var_1))) : (max(var_9, var_4)))) : var_0));
        arr_5 [i_0] = (((((max(-65, 200))) << (((min((arr_1 [i_0 - 1]), -7586071020582880)) + 3815320622640691410)))));
    }
    #pragma endscop
}
