/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_15 = max(((-708629512 & (max(-6893079154515758521, 708629528)))), 708629524);
        var_16 = (((!200845074206375972) < var_1));
    }
    var_17 = (((708629516 ? (var_2 && var_5) : -1868244212)));
    var_18 = 25;
    #pragma endscop
}
