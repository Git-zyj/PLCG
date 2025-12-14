/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [19] = var_2;
        var_16 = (max(var_16, ((!(arr_0 [i_0])))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = (((arr_1 [i_2 - 1]) ? ((16 ? 18 : var_14)) : var_6));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_17 = (var_12 ? (arr_9 [i_2] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 1]));
                        var_18 = (arr_8 [i_2] [i_2 - 1]);
                        var_19 = (((arr_9 [i_1] [i_1] [8]) < (arr_6 [i_2])));
                        arr_13 [i_2] [3] = (((arr_5 [i_2 - 1] [i_2]) ? (arr_5 [i_2 - 2] [i_2]) : (arr_5 [i_2 - 1] [i_2])));
                        arr_14 [i_1] [i_2] [i_2 + 1] [7] [i_2] = arr_8 [i_2] [8];
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            var_20 = (arr_11 [i_1]);
            var_21 = (min((arr_0 [1]), var_1));
            arr_18 [i_5] [i_5 + 2] = 3550;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_21 [2] [i_6] [i_1] = ((18446744073709551615 >> (arr_10 [i_6] [i_6] [i_6] [i_1] [9])));
            var_22 = (min(var_22, (arr_19 [i_6] [i_6])));
        }
        var_23 = var_7;
        arr_22 [2] &= (arr_5 [i_1] [i_1]);
        var_24 = 32207;
    }
    var_25 = (min(var_25, var_0));
    #pragma endscop
}
