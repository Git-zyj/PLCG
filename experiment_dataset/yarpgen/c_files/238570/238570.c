/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (arr_0 [i_0]);
        var_11 ^= (arr_1 [i_0] [10]);
        var_12 = arr_1 [i_0] [i_0];
        var_13 = (arr_0 [i_0]);
        var_14 = (!28);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] [10] = (~-1);
        var_15 = var_8;
    }
    var_16 = var_2;
    var_17 = ((var_1 ? ((min((var_7 & 3554347156), 0))) : 758341607812451679));
    var_18 = (max(var_18, -var_3));
    #pragma endscop
}
