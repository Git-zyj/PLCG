/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 -= (((0 / 125) ? (arr_2 [12] [i_0]) : (~17502984396984222609)));
        arr_4 [i_0] = var_4;
    }
    #pragma endscop
}
