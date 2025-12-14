/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(var_4, var_15));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((1 ? 1 : 0));
        arr_4 [i_0 + 1] [i_0] = (min(1, var_4));
    }
    #pragma endscop
}
