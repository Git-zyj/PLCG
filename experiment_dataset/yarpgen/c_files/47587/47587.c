/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] [i_0] = (~1);
        var_18 = (min(var_18, (!1)));
        var_19 = -26679;
        arr_4 [i_0] = -1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = 1;
        var_21 = (65535 ^ 255);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((-(!-1)));
        var_22 = 1;
        arr_11 [i_2] = ((min(var_17, 1)));
    }
    var_23 = var_13;
    #pragma endscop
}
