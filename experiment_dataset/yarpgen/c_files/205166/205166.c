/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_0 [i_0 + 2] [9]);
        var_12 = (min(var_12, ((max(-13481, 13481)))));
    }
    var_13 = (((((var_6 ^ (~var_3))) + 2147483647)) << (var_1 - 15));
    #pragma endscop
}
