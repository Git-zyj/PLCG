/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_12);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (((((min((arr_0 [i_0]), (arr_0 [i_0]))))) || (arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_22 -= (((arr_5 [14] [14] [14]) && var_11));
            var_23 = (((arr_5 [i_1] [i_1 - 2] [i_1 + 1]) && (var_10 & var_11)));
        }
        var_24 = var_19;
    }
    #pragma endscop
}
