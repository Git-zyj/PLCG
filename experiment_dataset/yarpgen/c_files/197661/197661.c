/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_10, var_12));
    var_21 = var_5;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_22 = (max(var_22, var_6));
        var_23 = (arr_0 [i_0]);
    }
    #pragma endscop
}
