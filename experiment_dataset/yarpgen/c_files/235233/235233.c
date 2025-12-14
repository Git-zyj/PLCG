/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = (min(var_18, ((((((var_15 ? var_1 : var_4))) ? (var_4 ^ var_12) : var_2)))));
            var_19 = (~var_16);
            arr_5 [1] [i_0] = (((~var_16) + var_14));
            var_20 = (max(var_20, var_13));
            arr_6 [i_0] = var_13;
        }
        var_21 = (min(var_21, var_15));
    }
    #pragma endscop
}
