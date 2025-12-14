/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (max(var_14, -21598));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (((((0 ? (min(2767124895, var_8)) : (((min(32764, -21598))))))) ? -21598 : (min((min(var_9, (arr_2 [i_0]))), (((var_7 ? var_4 : var_9)))))));
        var_16 = -21591;
    }
    var_17 = var_3;
    var_18 = var_10;
    #pragma endscop
}
