/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_0, ((((~var_0) ? var_2 : 3412256422)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 &= (~var_10);
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = ((-(((var_13 - var_12) ? (var_10 + var_9) : ((52455 ? -1 : 104))))));
        arr_5 [i_1] [i_1] = (68 ^ 43311);
        var_18 = (arr_4 [i_1]);
        var_19 = (min((~var_5), var_8));
    }
    var_20 = var_1;
    var_21 += ((((((((var_8 ? var_6 : var_3))) ? ((var_7 ? var_6 : var_2)) : (var_2 && var_9)))) || (!-83)));
    #pragma endscop
}
