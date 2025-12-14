/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((~((max(var_5, var_0)))))) ? (((~var_14) ? (var_12 + var_2) : ((var_11 ? var_9 : var_11)))) : var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 *= (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = 2514003448242940767;
    }
    var_18 = (max((~0), ((((var_10 >> (var_11 - 61555)))))));
    var_19 = var_0;
    #pragma endscop
}
