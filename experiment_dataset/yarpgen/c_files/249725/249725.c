/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(77066710, 18775));
        arr_3 [i_0] = 1;
        var_19 = ((~(1079416850 && var_12)));
    }
    #pragma endscop
}
