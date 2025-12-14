/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_1 [2] [i_0 + 2])));
        var_11 = (arr_0 [2] [i_0]);
    }
    var_12 = ((~((var_4 ? (32 | var_4) : var_7))));
    #pragma endscop
}
