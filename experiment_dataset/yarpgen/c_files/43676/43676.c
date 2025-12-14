/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = max(1716972953, -13162);
        arr_5 [i_0] = (~-1716972954);
    }
    #pragma endscop
}
