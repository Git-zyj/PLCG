/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((4 ? ((min(4086, var_7))) : (var_7 <= var_0)))) / (min(9, ((var_14 ? 11706199233075982262 : var_11)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 -= 0;
        var_17 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
