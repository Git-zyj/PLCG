/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((((4014690725360629839 ? -26 : 1)), 6336223540385374453))));
    var_14 = var_12;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 += (((arr_3 [1]) ? (arr_3 [i_0 + 1]) : 12));
        var_16 = (((arr_2 [i_0 - 1]) || (((-(arr_0 [i_0 + 2]))))));
        var_17 = -2703049328;
    }
    #pragma endscop
}
