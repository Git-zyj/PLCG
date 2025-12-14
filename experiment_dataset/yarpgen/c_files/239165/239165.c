/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_15 = var_10;
        var_16 = ((~(((min(1, -10))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_5 [1] = ((max((~0), (~2295247479069643554))));
        var_17 = ((-var_3 - (arr_4 [i_1 - 2])));
    }
    #pragma endscop
}
