/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0 - 1] [i_0 - 3]) ? (min(16148701000424831014, 2298043073284720601)) : var_14));
        arr_2 [i_0] [i_0 + 1] = (max(((min((arr_1 [i_0 - 3] [i_0 - 1]), (arr_1 [i_0 - 3] [i_0 - 1])))), (((arr_1 [i_0 - 3] [i_0 - 1]) * (arr_1 [i_0 - 3] [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_5 [i_1 + 1])));
        arr_6 [i_1 + 1] = (((arr_4 [i_1 - 2]) * (arr_3 [i_1 - 2])));
        arr_7 [i_1] = 1;
        var_21 = (arr_5 [i_1 - 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 = (min(var_22, (arr_9 [i_2])));
        var_23 = ((+(((arr_9 [i_2]) | var_0))));
    }
    var_24 = var_6;
    var_25 = (var_16 ? var_13 : var_14);
    #pragma endscop
}
