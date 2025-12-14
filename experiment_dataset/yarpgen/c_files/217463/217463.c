/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 ^= ((~((-19491 ? var_10 : var_1))));
                    var_18 = ((((((5 ? var_13 : 512140531)) ? (arr_8 [i_1 - 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]) : ((min(var_0, (arr_3 [i_0]))))))));
                    var_19 += (min((((var_8 ? (max(var_1, var_7)) : -var_0))), var_4));
                }
            }
        }
    }
    var_20 = var_15;
    var_21 = 1;
    var_22 = var_15;

    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_23 = var_5;
        var_24 |= ((!((250 < ((var_14 ? (arr_8 [i_3] [i_3] [1] [1]) : 1))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_25 |= (max(1, (((~2663362493) ? var_2 : (var_13 ^ 58952)))));
        arr_15 [15] = 36425;
    }
    #pragma endscop
}
