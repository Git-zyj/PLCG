/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 ^= 6814069139900355627;
        var_15 *= (min((min((((arr_0 [8]) ? var_7 : (arr_0 [6]))), (arr_1 [i_0]))), 92));
    }
    #pragma endscop
}
