/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = 1;
        var_19 = (min((((arr_0 [i_0]) + (arr_1 [3] [1]))), ((max((arr_1 [i_0] [8]), (min((-32767 - 1), 61937)))))));
        var_20 ^= (arr_1 [4] [i_0]);
    }
    var_21 = var_17;
    #pragma endscop
}
