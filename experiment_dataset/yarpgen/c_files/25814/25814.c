/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (11760618595923828707 - 65535);
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_20 = var_17;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = (min(var_21, ((((((((max(var_1, 38687))) / 38687))) - 0)))));
        arr_7 [i_1] = var_6;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [1] &= ((16 * (min(((2771889643793119339 ? 112 : 26851)), (var_4 * 38685)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = 3422824554;
                    arr_16 [i_3] [i_3] [i_2] = 1;
                    var_23 = (max(var_23, -11608));
                    var_24 = (min(var_24, 59867));
                }
            }
        }
    }
    var_25 = (-1585344528 & var_8);
    #pragma endscop
}
