/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18014398509465600;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = var_0;
        var_14 -= (arr_3 [i_0] [i_0]);
    }
    #pragma endscop
}
