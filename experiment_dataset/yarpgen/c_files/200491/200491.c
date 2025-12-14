/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_11;
        var_20 = (max(var_20, (arr_1 [i_0] [15])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = arr_1 [i_1 - 1] [i_1 - 1];
        arr_5 [i_1] = var_12;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = max(((max(var_0, (arr_0 [i_2] [7])))), (arr_1 [i_2] [i_2]));
        arr_10 [i_2] = (((arr_7 [i_2] [i_2]) ? ((min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))) : (!var_9)));
        arr_11 [i_2] |= ((!(((+(min((arr_8 [i_2]), 11979141357898557397)))))));
    }
    #pragma endscop
}
