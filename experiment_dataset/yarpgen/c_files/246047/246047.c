/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((-25430 && 25444) || ((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_16 = ((((((25430 <= 1) || (((-4911 ? 32765 : 72)))))) | (arr_2 [i_0])));
        arr_5 [i_0] = -25430;
    }
    var_17 = (min(var_17, 6746887380226839994));
    #pragma endscop
}
