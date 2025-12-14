/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_3);
    var_13 = var_4;
    var_14 = (max(var_14, var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 += 2086504570;
        arr_4 [i_0] [i_0] |= var_1;
    }
    #pragma endscop
}
