/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 *= ((((-(arr_0 [1] [i_0]))) * ((((76 ? var_2 : 1)) * (var_4 % 1)))));
        var_11 = (min(var_11, -6584));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (min(var_12, (((var_0 ? 72 : (arr_0 [15] [0]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_7 [6] [i_2] = ((179 ? var_8 : (arr_4 [i_1] [i_2] [i_2])));
            var_13 = (min(var_13, (((var_2 ? -40 : (arr_4 [3] [i_2] [3]))))));
            var_14 = (min(var_14, (-16 / var_7)));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_15 = 1;
            var_16 = var_8;
            var_17 *= 198162069;

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_18 = (((arr_10 [1]) ? -var_9 : ((((arr_8 [i_4 - 1] [1] [i_1]) > var_3)))));
                arr_14 [i_4] [i_3] [10] [i_4] = (((arr_10 [i_3]) ? (arr_9 [i_3]) : (arr_8 [i_4 - 1] [16] [i_4])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_19 = (arr_3 [13] [i_3]);
                arr_17 [19] [1] [6] [i_1] = ((var_3 ^ (arr_1 [i_5])));
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 = 174;
                            var_21 = -1;
                            var_22 = ((+((~((((arr_15 [i_8]) && var_4)))))));
                        }
                    }
                }
                var_23 = (((((~(arr_25 [7] [i_6 + 2] [i_6])))) ? ((((arr_8 [i_1] [i_6 - 1] [i_6]) ? (arr_25 [i_1] [i_6 + 1] [i_6]) : (arr_8 [i_1] [i_6 + 1] [11])))) : (arr_25 [16] [i_6 + 2] [i_6])));
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_24 = ((~(arr_18 [i_1] [5] [i_1] [i_9])));
            var_25 = (min(var_25, (((124 ? (((arr_19 [i_9] [0] [1]) << (((18 ^ 145) - 115)))) : var_8)))));
            var_26 = (((((14 ? var_0 : 13752684184936199924))) && (((2355 * (arr_11 [i_9]))))));
            var_27 = (((((240 ^ (arr_29 [i_1] [9]))) / (((arr_1 [18]) ? var_7 : -257373915)))));
            var_28 = (min(var_28, (((var_9 | (arr_4 [i_9] [i_9] [0]))))));
        }
    }
    var_29 = (min(var_29, var_1));
    var_30 = var_9;
    #pragma endscop
}
