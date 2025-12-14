/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (arr_2 [5] [12]);
        var_12 |= -7007055996243785116;
        var_13 -= ((arr_0 [i_0]) ? var_3 : (var_6 ^ 3972925861975603169));
    }
    #pragma endscop
}
