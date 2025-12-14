/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_10 = (min(var_10, ((((1 || 55) || ((min(((1 ? 8557002886214565677 : 0)), (!17)))))))));
        var_11 += 1;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = 28024;
        var_13 += ((var_6 ? ((var_7 + (4083864018 - var_0))) : 512160991));
    }
    var_14 = (max(var_14, var_9));
    #pragma endscop
}
