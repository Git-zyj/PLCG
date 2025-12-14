/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = ((-(max((arr_0 [i_0 - 1]), (~22965)))));
        var_12 = (min(var_12, (((var_8 << (((arr_0 [i_0]) + 1649)))))));
        var_13 = (min(var_13, (arr_1 [i_0 + 1] [i_0])));
    }
    var_14 = (min(var_14, (((var_0 / (((((13117452341212766218 ? var_2 : var_10))) * ((0 ? 5329291732496785387 : var_8)))))))));
    var_15 = var_0;
    #pragma endscop
}
