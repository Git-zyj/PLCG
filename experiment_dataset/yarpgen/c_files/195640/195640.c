/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, (32 && var_3)));
        var_17 |= ((var_7 ? 0 : ((0 ? 1048575 : (arr_1 [i_0])))));
    }
    var_18 = (max((((((var_0 ? 56406 : 16383))) ? var_10 : 1)), var_12));
    var_19 = (max((40448 == 1), 1));
    #pragma endscop
}
