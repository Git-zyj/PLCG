/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 += 4294967285;
    var_20 = 4294967282;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = ((13 ? (arr_0 [i_0]) : (((arr_0 [14]) + var_1))));
        var_22 = (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (var_1 / -7)));
        var_23 = (arr_0 [i_0]);
        var_24 = (var_13 & 8);
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_25 = (min(var_25, ((min(2009332631, (((((-(arr_2 [0] [0])))) ? ((((arr_2 [8] [8]) ? 1 : 0))) : -21)))))));
        arr_4 [i_1] [i_1] = var_12;
    }
    #pragma endscop
}
