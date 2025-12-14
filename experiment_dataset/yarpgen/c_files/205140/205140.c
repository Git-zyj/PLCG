/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(575897802350002176, 32767));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_14 = (max(var_14, -32761));
        var_15 = ((var_3 & (arr_1 [i_0 - 1])));
        var_16 = (min(var_16, ((((arr_1 [i_0 - 1]) > (arr_1 [i_0 + 1]))))));
    }
    var_17 = (max(var_17, ((var_6 & ((var_1 ? (121 || -32759) : var_4))))));
    #pragma endscop
}
