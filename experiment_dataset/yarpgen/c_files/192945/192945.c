/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = -1;
        var_18 += 8196420687298901859;
    }
    var_19 = var_11;
    #pragma endscop
}
