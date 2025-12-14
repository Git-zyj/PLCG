/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min(28, var_6)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 -= (((1 ? 56124 : -1336400972)));
        var_12 = (max((((arr_1 [i_0]) >> (((min(28943, (arr_0 [i_0]))) - 28938)))), (((arr_1 [i_0]) + (0 & var_2)))));
    }
    #pragma endscop
}
