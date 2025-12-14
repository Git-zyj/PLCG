/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (!5206440911085921136);
    var_17 = var_10;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_18 = (min(((min(((~(arr_0 [i_0]))), (arr_0 [i_0 + 2])))), ((((max(72057594037927936, (arr_0 [i_0 + 1])))) ? ((var_0 ? (arr_0 [i_0 + 1]) : -9177404716665796188)) : var_0))));
        var_19 = (~1);
        arr_2 [i_0] [i_0 - 2] = (min((min(1, (arr_0 [i_0 + 2]))), (min(3566550376, (arr_1 [i_0 - 2] [i_0 - 1])))));
        var_20 = (((min(-1, var_4)) * -var_8));
        var_21 = arr_0 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (min(var_22, ((((~(arr_3 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] = 1406137748;
        arr_8 [i_1] [i_1] = (arr_5 [i_1]);
    }
    #pragma endscop
}
