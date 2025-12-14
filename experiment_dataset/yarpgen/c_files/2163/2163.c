/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [4] = var_7;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (~var_0);
            arr_7 [i_0] = (arr_5 [i_0] [i_1]);
        }
        var_13 = 1796657729;
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_14 = ((((min((arr_9 [i_2] [i_2 - 1]), 1796657729))) ? ((var_11 ^ (arr_10 [i_2] [i_2]))) : ((1796657715 ? (arr_8 [i_2]) : (~2498309567)))));
        var_15 = (min(var_15, ((min(2498309594, (1796657717 || var_11))))));
        var_16 = (max(var_16, ((((max(2498309567, 1796657729)) % 2498309554)))));
        var_17 = ((-2498309578 ? var_8 : 1796657729));
    }
    var_18 ^= (var_10 & ((((min(var_5, 2498309586))) ? var_8 : var_3)));
    #pragma endscop
}
