/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_4, var_6))) && var_5));
    var_13 = var_8;
    var_14 &= ((~((~(~var_1)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_15 = (max((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), ((max(-28, 127)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 |= (arr_4 [i_1] [i_1]);
        var_17 = ((~(((arr_3 [i_1]) ? 0 : (arr_3 [i_1])))));
    }
    var_18 &= ((~((var_6 ? var_2 : (max(var_9, var_7))))));
    #pragma endscop
}
