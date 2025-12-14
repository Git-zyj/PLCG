/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_18;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 += ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_22 *= (((arr_1 [i_0]) / (arr_1 [i_0])));
    }
    var_23 = 8992;
    var_24 = (min(var_24, var_10));
    #pragma endscop
}
