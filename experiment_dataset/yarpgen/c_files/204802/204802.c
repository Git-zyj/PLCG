/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 &= ((var_13 ? 7 : var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (65528 == 7974086191559594242);
        var_18 *= 7427;
        arr_2 [i_0] = (((max((arr_1 [i_0]), -4870)) < (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    #pragma endscop
}
