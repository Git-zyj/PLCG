/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((~(~48714)))));
    var_12 = (min(var_12, (((((~(~var_9))) << (var_6 - 5184735650979858189))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 ^= (-(((arr_1 [i_0]) / var_2)));
        var_14 = var_6;
    }
    var_15 = 1784780734220513136;
    #pragma endscop
}
