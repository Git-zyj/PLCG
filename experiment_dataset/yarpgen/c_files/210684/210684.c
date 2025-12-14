/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 = (min((((((-(arr_1 [i_0] [i_0]))) != (((arr_1 [i_0 - 2] [i_0]) | (arr_1 [i_0 - 1] [i_0])))))), (((arr_1 [i_0 + 1] [i_0]) + (((arr_1 [i_0 - 1] [i_0]) - (arr_0 [i_0] [i_0 + 1])))))));
        var_15 -= 1534805031;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (min(var_16, (arr_2 [i_1] [i_1])));
        var_17 = (max((((max((arr_2 [0] [i_1]), (arr_3 [i_1]))) - (arr_4 [i_1] [i_1]))), var_2));
    }
    var_18 = var_8;
    var_19 = (min(0, -27611));
    #pragma endscop
}
