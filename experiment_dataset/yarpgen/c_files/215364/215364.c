/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~var_8), (~var_14)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_1 [i_0]) | (max((arr_0 [i_0] [i_0 + 1]), -19657)))))));
        var_17 = (((min(var_10, (arr_1 [i_0 - 1]))) <= (~127)));
    }
    #pragma endscop
}
