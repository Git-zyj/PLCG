/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_12 += min(32758, (min(-var_2, var_3)));
        var_13 = (arr_1 [i_0 - 1]);
    }
    var_14 = ((var_2 ? ((~((32746 ? var_8 : var_3)))) : ((max(var_8, (18714 || 32758))))));
    #pragma endscop
}
