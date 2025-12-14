/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_11;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = ((-((1 % (arr_1 [i_0 - 1])))));
        var_20 -= (min((arr_1 [i_0 - 1]), 51723));
    }
    var_21 = var_4;
    #pragma endscop
}
