/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = var_5;
        var_16 = ((((min(((max(var_13, 0))), (arr_1 [i_0])))) | ((((min(var_9, (arr_0 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? var_10 : var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [i_0] [i_0] = (((((arr_4 [i_2]) >= (max(var_6, var_4)))) ? 0 : 780634050013930892));
                    var_17 = (~449763932);
                    arr_9 [i_0] [i_0] [i_0] = ((((((min(9223363240761753600, var_11))) || (arr_5 [i_0]))) ? var_10 : var_12));
                    arr_10 [i_0] = (min(449763939, 449763925));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [14] [i_0] = ((!(var_8 - var_2)));
                        arr_14 [i_3] [i_0] [i_0] [i_0] = var_7;
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_18 = 41443;
        var_19 = ((((arr_11 [i_4] [i_4]) ? 780634050013930892 : (arr_11 [i_4] [i_4]))));
        arr_18 [10] [13] = (~0);
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_20 ^= (arr_11 [20] [i_5]);
        var_21 = (var_1 ? (arr_11 [2] [2]) : (min(0, 9174765777211851346)));
        var_22 = (min(var_22, (arr_0 [10])));
    }
    #pragma endscop
}
