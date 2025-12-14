/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_16 = (arr_0 [i_0] [i_0]);
    }
    var_17 *= var_3;
    #pragma endscop
}
