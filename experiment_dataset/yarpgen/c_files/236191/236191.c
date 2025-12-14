/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 0;
        var_20 = (min((max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (arr_3 [i_0])));
        var_21 = arr_1 [i_0];
        var_22 &= (((!30429) == (max(var_9, -8192))));
        arr_4 [i_0] = ((~(max((arr_2 [7] [i_0]), var_11))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] = (((((-14 ? var_8 : var_14))) ? var_3 : ((min(4745, -8185)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2 + 1] [i_2] = var_2;
        var_23 = (max(var_23, (((var_10 ? (arr_9 [i_2 + 2] [i_2 + 3]) : -30429)))));
    }
    var_24 += var_14;
    #pragma endscop
}
