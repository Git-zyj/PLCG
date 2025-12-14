/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 = var_4;
        arr_2 [1] = 31;
    }
    #pragma endscop
}
