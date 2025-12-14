/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = (((((arr_0 [i_0 + 2]) >> (((arr_0 [i_0 + 1]) - 47)))) ^ (((arr_0 [i_0 + 4]) ? (arr_0 [i_0 + 3]) : 1))));
        var_18 = (var_5 / (min(1, var_13)));
    }
    #pragma endscop
}
