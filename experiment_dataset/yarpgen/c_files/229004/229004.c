/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = ((max(((40320 ? var_9 : var_7)), var_1)));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_15 = ((min(((var_8 ? (arr_3 [i_0 - 1]) : 6436670685517301632)), (arr_1 [i_0 - 1]))));
        arr_4 [8] [i_0] &= 9838;
    }
    #pragma endscop
}
