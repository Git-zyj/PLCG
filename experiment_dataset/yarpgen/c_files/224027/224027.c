/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [5] [5]);
        var_20 = (arr_2 [i_0]);
        var_21 = arr_3 [i_0];
        var_22 = arr_0 [i_0] [i_0 + 1];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [2] [2]);
        var_23 = (min(var_23, (arr_5 [i_1] [i_1])));
        var_24 = (arr_6 [i_1]);
    }
    var_25 = var_15;
    var_26 = var_10;
    var_27 = var_3;
    #pragma endscop
}
