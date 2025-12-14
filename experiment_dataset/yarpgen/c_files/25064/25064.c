/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(2141609791, 9068563172936275471));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = ((arr_0 [i_0 - 1] [i_0 - 1]) ? (((arr_0 [i_0] [i_0 + 4]) ? var_11 : (max((arr_1 [i_0 - 2]), 1)))) : (arr_2 [i_0 + 2]));
        var_19 = (!320);
    }
    #pragma endscop
}
