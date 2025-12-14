/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(2065762902, (((arr_1 [i_0] [i_0]) % 17736656264950851284))));
        var_16 = -75;
        arr_3 [i_0] &= (arr_2 [i_0]);
    }
    var_17 = ((((max(var_1, var_12))) && ((max((min(var_10, var_6)), -var_0)))));
    #pragma endscop
}
