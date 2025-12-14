/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? (((max(var_14, -207273209)))) : (max((((var_9 ? 65535 : var_18))), 664555509027282606))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = var_7;
        var_22 = (((arr_0 [1] [i_0]) ? (min(((65535 | (arr_1 [14]))), var_4)) : (((((arr_3 [i_0]) > (!167)))))));
        var_23 = (arr_1 [i_0]);
        arr_4 [i_0 - 2] [i_0] = (~-var_2);
    }
    var_24 |= var_5;
    #pragma endscop
}
