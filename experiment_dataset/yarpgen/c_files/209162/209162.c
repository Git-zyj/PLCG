/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_3;
    var_21 = (max(var_21, var_0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? var_14 : (arr_0 [i_0]))) : ((23604402 ? var_5 : 10262))));
        var_22 = (min(var_22, var_4));
    }
    var_23 = (~(min(((max(127, 237))), var_19)));
    #pragma endscop
}
