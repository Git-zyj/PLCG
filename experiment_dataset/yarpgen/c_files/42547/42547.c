/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 = (max((arr_1 [i_0]), (max((max(-7441902370531269685, -7441902370531269685)), (!-7441902370531269685)))));
        var_11 = (max((((!(var_2 / 1688102981)))), (arr_1 [13])));
    }
    var_12 = 0;
    #pragma endscop
}
