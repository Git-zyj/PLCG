/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = var_13;
        var_17 = (((((var_11 ? (arr_1 [i_0] [i_0]) : 397460494))) ? -249278538 : (max(109, 3897506783))));
    }
    var_18 = ((((((!-1487099883255296311) & 397460494))) ? (1 ^ var_12) : ((((max(var_2, var_15)))))));
    #pragma endscop
}
