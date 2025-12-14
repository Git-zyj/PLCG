/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 += ((12971423613672368416 ? 0 : (-2147483647 - 1)));
        var_16 = (max(var_16, ((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [1]) : (arr_0 [i_0]))))));
        var_17 &= (((arr_1 [i_0] [16]) >= (arr_0 [i_0])));
        var_18 = (((arr_2 [i_0] [i_0]) >> ((((0 ? 4053188323486327057 : 4053188323486327030)) - 4053188323486327018))));
    }
    #pragma endscop
}
