/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (var_11 - var_0);
    var_19 = (max(var_19, var_16));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_20 = 370836466;
        arr_4 [i_0] [i_0] = (!65011712);
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max((min(-18868323, -12220)), ((((((min(var_13, (arr_7 [i_1])))) + 2147483647)) >> (var_0 - 461)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = (min((min(0, (arr_2 [i_1]))), ((min((~12219), -12220)))));
                    arr_14 [i_1 + 2] [i_1] [i_1 + 2] = (arr_12 [i_1]);
                }
            }
        }
        var_21 = (min((((arr_6 [i_1] [i_1 + 1]) ? (((arr_2 [i_1]) >> (((arr_11 [i_1 - 1] [i_1] [i_1 + 2]) - 33995)))) : (arr_12 [7]))), (min((((arr_0 [i_1]) & (arr_2 [i_1]))), (min((arr_9 [i_1]), 9078035400683400016))))));
    }
    #pragma endscop
}
