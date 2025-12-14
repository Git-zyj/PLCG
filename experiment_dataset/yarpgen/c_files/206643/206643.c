/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_14 ? 3178835438 : (3756997640076101357 < 255)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_18 += 5717486201964293579;
                            arr_14 [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                            var_19 &= 21;
                        }
                        var_20 -= (((arr_2 [i_0 - 1]) ? ((-3756997640076101358 ? 0 : 1643082426760959911)) : (((var_10 ? var_10 : 676267849)))));
                        arr_15 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = (((arr_1 [i_0]) ? var_9 : (arr_10 [1] [i_1] [i_0] [i_1] [i_1 + 4] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_5] [i_0] = 1;
                            arr_23 [i_6] [i_0] [i_2] [i_2] [i_1] [i_0] [11] = (-1726913817607723525 ? 7175053676728603358 : (arr_17 [i_0]));
                            arr_24 [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_6] = (((arr_7 [i_5] [i_1 + 1] [i_2]) > ((~(arr_8 [i_1] [7] [7])))));
                            arr_25 [i_0] [2] [i_2 - 1] [i_0] [i_6] [i_1 + 2] [3] = (((1116131858 * var_15) ? (arr_18 [i_0] [i_1 + 1] [i_2] [i_5] [i_1 + 1] [i_0]) : ((var_16 ? var_13 : 4294967283))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_29 [i_0] [i_5] [i_0] [i_7] &= (var_12 ? var_3 : (arr_0 [i_5] [i_2 - 1]));
                            var_21 = 3756997640076101357;
                        }
                        arr_30 [i_0 - 1] [i_0] = var_7;
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_22 ^= (arr_16 [i_0] [i_8] [i_0] [1]);
                        arr_35 [6] [i_1] [i_2] [i_0] [8] = var_1;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_23 = (1066022466 != var_6);
                        arr_40 [i_0] [i_0] [i_1 + 4] [6] [i_0] [10] |= (((1116131862 << (3756997640076101357 - 3756997640076101335))));
                        var_24 += (!4159731978);
                        var_25 &= arr_28 [4] [4] [i_1] [i_2] [4] [0] [i_9];
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_48 [i_0 - 1] [i_2 + 1] [i_0] [i_11] = ((((-(arr_2 [i_0])))) % 15471607802570421783);
                                arr_49 [i_0] [i_1 + 4] [i_0] [i_10] [i_11] = ((((arr_0 [i_0] [i_1]) & (arr_27 [i_0] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_15;
    #pragma endscop
}
