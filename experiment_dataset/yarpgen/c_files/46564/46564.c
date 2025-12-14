/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_2 + var_0);
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((max((arr_4 [i_1] [i_1] [i_0]), (var_10 % var_10))) + ((max((arr_1 [i_0] [i_1]), (arr_4 [i_1] [i_1] [i_0])))))))));
                var_15 = -var_5;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 += (~6009594777808313049);
        var_17 = (((234 * var_2) ? 0 : (arr_7 [i_2])));
        var_18 = var_9;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = (max(var_19, (!36)));
        arr_13 [8] = (arr_12 [i_3] [i_3]);
        var_20 = ((~((var_4 ? var_3 : 10941))));
    }
    #pragma endscop
}
