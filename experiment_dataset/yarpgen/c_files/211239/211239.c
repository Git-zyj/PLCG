/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [i_0] &= var_9;
        arr_4 [i_0] &= ((var_4 ? (arr_1 [i_0]) : var_1));
        var_12 = (((((arr_0 [i_0]) ? var_6 : var_5))) ? (((var_1 | (arr_0 [i_0])))) : var_5);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_13 = (arr_12 [i_1] [i_2] [4] [19] [16] [i_4]);
                        var_14 = var_10;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_2] = (((15865546051362921560 + 9223372036854775807) << (var_10 - 22)));

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_15 = (max(var_1, var_8));
                            var_16 = (~-2542164033013124422);
                        }
                        var_17 ^= ((~((max(var_1, ((max(var_8, (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [11])))))))));
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        arr_24 [2] [i_2] [i_7] = ((!(max((arr_18 [i_7] [i_7] [i_7] [20] [i_7 - 2] [i_7 - 2]), (arr_18 [i_7 - 1] [i_7 - 2] [12] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                        var_18 = (var_2 / -var_5);
                        var_19 += (((arr_22 [i_3] [i_3] [i_3] [i_7]) + (max((arr_21 [i_7 - 3] [i_7 - 3] [i_7] [i_7] [i_7]), (arr_22 [i_3] [i_3] [i_3] [i_7])))));
                        arr_25 [i_2] [12] [i_3] [12] [i_3] = ((!((max(var_10, var_0)))));
                        var_20 = max(((((max(var_7, var_6))) ? ((1 << (1282256206 - 1282256178))) : var_10)), (arr_11 [i_7] [i_7] [i_7 + 1] [i_7 - 2] [i_7] [i_7]));
                    }
                    var_21 = ((var_1 << ((((-var_5 ? (((~(arr_21 [i_2] [i_2] [i_3] [i_1] [i_2])))) : (max(var_7, var_9)))) - 1888885924))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_22 -= (var_5 != var_10);
                                arr_32 [i_2] [1] [i_2] [i_2] [i_8] [6] [i_9] = (!var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
