/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (1 + var_10);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_15 |= (max((((max((arr_3 [i_0]), (arr_1 [8]))) * ((((arr_1 [i_0]) ? (arr_2 [i_0 - 1]) : var_4))))), -1657910861821693377));
        var_16 = -var_13;
    }
    var_17 = (min((max((max(var_13, var_9)), var_9)), var_4));
    #pragma endscop
}
