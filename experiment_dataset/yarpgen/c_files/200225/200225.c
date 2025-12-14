/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, var_10));
        var_17 += ((((arr_0 [2]) ? var_9 : (arr_0 [6]))));
    }
    var_18 *= var_4;
    var_19 = max(var_15, var_9);
    #pragma endscop
}
