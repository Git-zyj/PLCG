/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_16 -= ((!(arr_2 [i_0 + 3])));
        arr_3 [18] &= 794500405;
        var_17 *= -794500406;
    }
    #pragma endscop
}
