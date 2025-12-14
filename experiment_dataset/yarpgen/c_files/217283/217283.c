/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_1] = (((arr_2 [i_0]) ? (arr_1 [i_0] [i_1]) : var_2));
            var_13 += 0;
        }
        arr_8 [i_0] = arr_6 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_0] |= (arr_14 [i_0] [7] [i_3] [i_3]);
                                arr_22 [i_4] [i_4] [i_4] [i_3] [21] [i_4] = (arr_9 [i_0] [i_2]);
                            }
                        }
                    }
                    var_14 = (arr_1 [i_2] [i_2]);
                    arr_23 [i_0] [i_0] [i_3] = (arr_10 [i_0]);
                    arr_24 [i_3] = (max((((((((arr_18 [i_2] [i_2]) ? var_5 : 5261))) != (max(var_11, var_0))))), var_0));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_15 = (((arr_26 [i_0] [i_2] [i_2] [i_2]) ? (110 / 676719819) : (((max((arr_13 [i_0] [i_0] [i_3] [i_6]), var_3))))));
                        var_16 = ((!((((arr_9 [i_0] [i_6]) >> (var_5 - 20492))))));
                        arr_28 [i_0] [i_2] [i_3] [i_3] = ((((max(var_4, -3506985253))) ? (((!(!-111)))) : (arr_5 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_17 = var_4;
                        arr_33 [13] [13] [i_7] [i_7] = var_7;
                        arr_34 [i_2] [i_7] = (~1);
                        arr_35 [i_7] [i_7] = ((20545 <= (((-127 - 1) ? 1 : 125))));
                        var_18 ^= (arr_32 [i_7] [i_2] [i_7] [i_7]);
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        var_19 *= ((((max((((-66 ? 27 : 20553))), 1231387470))) ? ((max(var_1, (arr_0 [i_8] [i_8])))) : (((((7528 ? -3 : var_3))) ? (((arr_3 [20]) ? (arr_6 [i_8] [1]) : 124)) : 1))));

        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            var_20 = (((((!((max(4032, -36)))))) & ((~(arr_27 [i_9 + 1] [i_9 - 3] [i_9])))));
            var_21 = var_3;
        }
        var_22 = ((((((min(var_8, (arr_20 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8]))) < (arr_18 [i_8 + 1] [i_8 + 1]))))));
        var_23 ^= (arr_16 [i_8] [2] [i_8 - 2] [2] [18]);
    }
    var_24 = (max(var_9, var_10));
    #pragma endscop
}
