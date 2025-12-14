/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -16014;
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = var_3;
        var_16 = (~-70);
        var_17 = (((((((~-118) > var_8)))) > (max((max(var_2, 0)), var_3))));
        arr_2 [i_0] [i_0] = (var_5 & 9433);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] = 5999736630041216127;
        var_18 = -var_10;
    }
    #pragma endscop
}
