/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = var_4;
    var_20 = var_10;
    var_21 = (max(0, (min((~41332), var_9))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 = (((((min((arr_1 [i_0]), 2296533183)) / (max(1998434105, 1)))) > 0));
        var_23 = (max(var_23, (((-6 ? (~10) : ((min((((arr_0 [14]) != (arr_1 [1]))), ((!(arr_1 [8])))))))))));
        arr_2 [i_0] = 17245645693134552927;
    }
    #pragma endscop
}
