/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (arr_1 [i_0 - 1] [i_0 + 1]);
        var_17 = 851592825268133923;
        var_18 |= var_3;
    }
    var_19 = (max((var_14 <= 1), 1));
    var_20 = var_0;
    #pragma endscop
}
