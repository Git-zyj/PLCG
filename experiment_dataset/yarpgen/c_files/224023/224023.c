/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(max((var_5 || var_8), (max(5778994246452539428, 65535))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 &= (arr_0 [i_0] [i_0]);
        var_12 -= var_2;
        arr_2 [0] [i_0 + 1] &= var_1;
    }
    #pragma endscop
}
