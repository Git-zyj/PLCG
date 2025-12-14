/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = 12156;
        var_20 = (min(var_20, (((2047 ? ((var_9 ? var_6 : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
