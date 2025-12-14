/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((--0) ? var_3 : ((var_10 ? ((127 ? 1 : 16457)) : ((var_6 ? 39682 : var_10))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0] [i_0]) / (max(((((arr_1 [1]) ? var_8 : var_10))), ((0 ? 9066051586588716274 : var_7))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_3] = (max(var_7, (1 == var_5)));
                        var_13 = ((((((arr_0 [i_2 + 3] [i_1]) - (arr_6 [i_2 - 2] [i_2] [i_2 + 2])))) ? (((((max(var_4, 0))) ^ (arr_3 [i_1])))) : (arr_5 [i_0] [i_2 + 3] [i_0] [i_2])));
                    }
                }
            }
        }
        arr_11 [i_0] = (((-48 / var_4) & (arr_7 [i_0] [i_0] [i_0] [11])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_15 [i_4] = (arr_14 [i_4 + 1] [i_4]);

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_18 [i_4] [i_4] [20] = (((arr_17 [i_4 + 1] [i_4]) ? (arr_17 [i_4] [i_4]) : (((arr_13 [i_4]) ? 16448 : 1))));
            var_14 *= ((((3664822977 ? -106 : 4668261604576857333)) * (arr_12 [1] [15])));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_15 = ((arr_19 [i_6] [i_6]) ? (arr_19 [i_6] [i_6]) : (arr_6 [i_6] [i_6] [i_6]));
        arr_22 [i_6] = var_9;
    }
    #pragma endscop
}
