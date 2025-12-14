/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 &= (arr_1 [i_0] [i_0]);
        var_21 = (arr_0 [i_0 - 1]);
        arr_2 [i_0] = (!128);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 *= (((((~((var_13 ? var_15 : var_7))))) ? (((~var_7) ? ((127 ? var_16 : var_18)) : ((var_3 ? 127 : (arr_0 [i_1]))))) : (arr_4 [i_1])));
        arr_6 [i_1] [14] |= (arr_4 [i_1]);
        arr_7 [i_1] [i_1] = (min(((min((arr_0 [i_1]), var_1))), (arr_4 [i_1])));
    }
    var_23 = var_3;
    var_24 = (min(var_13, var_16));
    #pragma endscop
}
