/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 << (4453 - 4452)));
    var_11 += var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 &= (((!1) != ((var_3 ? 1 : -2019447002))));
        arr_2 [i_0] [i_0] |= (var_5 ? (var_7 / 14) : 1);
        var_13 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (((((853197026 ? var_5 : 120259084288))) || 839438616));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_13 [i_1] = (!(((1 >> (1536 - 1525)))));
                        var_15 = (min(var_15, (!var_2)));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_16 &= ((~((3913835209 ? -118057697 : var_9))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_17 |= (!6904);
                            var_18 = (min(var_18, ((((arr_18 [i_5] [i_6] [i_5] [i_5] [i_3] [i_5] [i_5]) ? 14336 : var_9)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_19 = -6909;
                        var_20 += (((((arr_18 [i_1 + 1] [i_2] [i_1] [i_7] [0] [i_2] [i_1 + 1]) || 193)) ? (arr_10 [11] [i_1 - 1]) : 48));
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        var_21 = ((arr_5 [i_1 + 1]) ? (186 % var_8) : 48);
                        arr_23 [i_1] [i_2] [i_3] [i_1] [i_8 - 3] = ((~(arr_18 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                        var_22 *= (96 - 89);
                    }
                    var_23 -= 8188;
                }
            }
        }

        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_24 = var_4;
                        arr_32 [i_11] [i_9] [i_9] [i_11] = (((~(arr_9 [i_1] [i_9]))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_25 = (8529 - -4455);
                            var_26 |= ((134217727 ? (arr_12 [i_13] [i_9 - 3] [i_12] [i_13] [i_14 - 1] [i_14]) : 252));
                        }
                    }
                }
            }
            arr_41 [i_9] [i_9] [i_1] = ((~((2109138656124724258 ? 35184355311616 : (arr_40 [i_1 + 1] [i_9] [i_1] [7] [i_9] [i_9])))));
            var_27 -= var_0;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            arr_44 [i_15] [i_15] = 853197026;
            var_28 = (((arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) ? 2 : (arr_40 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
        }
        var_29 ^= var_4;
        var_30 = (var_6 > var_0);
    }
    #pragma endscop
}
