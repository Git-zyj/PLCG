/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = 1847831010;
        var_13 = (((arr_2 [i_0]) & 2408316279));
        var_14 = (2447136261 != 66380008);
        var_15 *= var_4;
    }
    var_16 = (max((((!(((254079524 ? 2461131202 : -8841011093832915435)))))), var_4));
    #pragma endscop
}
