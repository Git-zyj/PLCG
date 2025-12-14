/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_14 = ((-var_3 ? 15623598834252322911 : var_9));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = var_12;

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((var_7 ? (arr_2 [i_0 + 1] [i_0 - 4] [i_1 - 1]) : (arr_2 [i_0 + 3] [i_0 - 4] [i_1 - 2]))))));
                        var_17 = ((2823145239457228705 ? var_12 : var_1));
                        var_18 = (max(var_18, 15623598834252322900));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_13 [i_2] [i_0] [i_2] [i_2] [i_2] = (arr_8 [i_4] [i_2] [i_1 + 1] [i_0]);
                        arr_14 [i_1] [i_0] = (((arr_9 [i_1 - 2] [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_0]) ? (arr_0 [i_0]) : 2823145239457228725));
                        arr_15 [i_0] [7] [i_0] = var_11;
                        arr_16 [i_0] [i_1 - 1] [i_2] [i_0] = (((((840427397 >> (var_7 + 1533338514)))) ? (37118 && var_0) : var_3));
                        var_19 = ((39397 ? (arr_11 [i_0]) : 62));
                    }
                    arr_17 [i_0] [18] [18] [i_0] = (((arr_7 [i_0 - 3] [i_1 - 2] [i_0] [i_1 + 1]) ? (arr_11 [i_0]) : var_2));
                }
            }
        }
        var_20 += ((!(((var_12 ? 18446744073709551615 : (arr_12 [i_0] [i_0 - 2] [i_0 + 3] [12]))))));
        arr_18 [i_0] = -2147483639;
    }
    var_21 = var_10;
    var_22 = var_11;
    #pragma endscop
}
