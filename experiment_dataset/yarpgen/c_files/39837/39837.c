/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(var_12, var_8))) >= (max(var_5, 4294967295)))));
    var_17 = (~var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (arr_0 [11] [11]);
        var_19 = ((var_0 && (1646482273 | var_1)));
    }
    #pragma endscop
}
