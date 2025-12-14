/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-2147483647 - 1) & 378488113712194774));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 += (arr_1 [i_0] [i_0]);
        var_14 += (((arr_0 [i_0]) + (((min((arr_0 [i_0]), (arr_0 [i_0])))))));
    }
    #pragma endscop
}
