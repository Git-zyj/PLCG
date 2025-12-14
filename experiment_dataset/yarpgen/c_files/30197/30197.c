/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1 + 2] [i_1] = (arr_5 [i_0 + 2] [i_1]);
                arr_7 [i_1] = (((1 ? 1 : -4647678087447735427)));
                var_11 = (min(((var_9 ? var_4 : (arr_4 [i_1] [i_1 + 3]))), -1));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (!(!110));
        arr_11 [i_2] [i_2 - 3] = var_6;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_16 [1] [i_3] = (max(1, (~var_3)));
        var_12 = (max((arr_8 [i_3 + 1]), ((((arr_8 [i_3 + 1]) > var_2)))));
        arr_17 [i_3] = var_2;
        arr_18 [i_3] [i_3] = ((~((0 ? (((var_1 ? 896 : var_2))) : var_8))));
        arr_19 [i_3] = ((-(arr_8 [i_3 + 1])));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        arr_24 [0] = var_9;
        arr_25 [i_4 + 3] = var_5;
    }
    var_13 = ((var_1 < (((((1 ? 1 : var_0))) ? ((var_5 ? 65530 : var_0)) : (var_9 || 6306133987179668381)))));
    var_14 = (((var_8 ? var_6 : (max(65535, var_9)))) ^ (min(var_8, var_1)));
    #pragma endscop
}
