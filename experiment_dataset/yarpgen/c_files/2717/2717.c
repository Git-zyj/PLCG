/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_4));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_16 = (((((!((max(168, 168)))))) + var_5));
        var_17 &= var_4;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = max(var_10, (arr_5 [i_1] [i_1]));
        var_18 = (max((~32767), 11991249995128217937));
    }
    #pragma endscop
}
