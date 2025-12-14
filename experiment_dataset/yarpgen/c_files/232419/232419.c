/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_12 = (arr_0 [i_0 - 2]);
        var_13 -= (arr_1 [i_0]);
        var_14 = (~-18);
        var_15 -= (((((!(arr_0 [i_0])))) == (((~var_1) ? 18 : (((arr_0 [i_0]) & (arr_0 [i_0])))))));
        var_16 = ((!(arr_1 [i_0 + 3])));
    }
    var_17 = (17 || 1060949760);
    var_18 = var_10;
    #pragma endscop
}
