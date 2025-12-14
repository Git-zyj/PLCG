/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += 0;
        var_14 = (max(var_14, (((max((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_0 [i_0])))))))));
    }
    var_15 += 1;
    var_16 = (((((9311 / 1) / (max(1, var_11)))) - var_4));
    #pragma endscop
}
