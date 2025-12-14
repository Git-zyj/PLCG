/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = min(((min(2670028056570270831, (154 >> 0)))), ((-5241279760953698739 ? (0 > -5241279760953698751) : (80 ^ 8866289698844952694))));
        var_16 = var_8;
        var_17 = (max(var_9, ((((arr_2 [i_0 + 2]) | var_11)))));
    }
    var_18 = (17515683938226980953 <= -5241279760953698739);
    #pragma endscop
}
