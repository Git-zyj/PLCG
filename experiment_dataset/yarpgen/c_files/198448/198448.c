/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 ^= -190086728;
        var_12 = (min(var_12, ((((~33) < ((var_0 ? var_3 : -190086710)))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = (!-var_3);
        arr_6 [i_1] [i_1] = 0;
        arr_7 [i_1] = var_4;
    }
    #pragma endscop
}
