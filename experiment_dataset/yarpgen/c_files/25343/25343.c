/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((min(738211035, ((var_9 ? var_3 : var_6))))) ? (~1) : ((var_7 ? (!var_5) : (var_9 <= var_10)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = var_7;
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    var_13 = (~((var_8 ? (var_1 && var_7) : (127 < var_10))));
    var_14 = (min(var_14, var_3));
    #pragma endscop
}
