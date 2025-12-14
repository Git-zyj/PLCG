/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) / 5058629937020516368));
        var_15 = -158590481621904430;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_16 = var_0;
        var_17 = (((arr_3 [i_1] [i_1]) << (((max(var_2, -var_5)) - 43203))));
        arr_5 [i_1] = (arr_4 [i_1] [i_1]);
    }
    #pragma endscop
}
