/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = (min((((arr_4 [i_0]) && var_8)), (2549097310 && 5493)));
                        arr_9 [4] [i_1] [i_1] [i_1] [i_1] [i_1] |= var_4;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {

                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            var_14 = (((var_8 ? var_7 : var_9)));
                            var_15 = (arr_13 [i_4 - 1]);
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_16 = -3;
                            var_17 = (var_11 > var_7);
                            arr_26 [i_9 + 2] [i_5] [15] [3] [i_9 + 2] [11] [14] = (((((var_11 ? var_8 : var_8))) ? ((((!(arr_14 [i_4] [i_5] [i_6]))))) : (arr_18 [i_4 + 1])));
                            arr_27 [i_4] [4] [6] [4] [i_7] [i_9] |= (61440 ? 1745869979 : 1745869995);
                            arr_28 [13] [i_5] [i_6] [i_7 + 3] [i_9] = (((arr_17 [i_4 - 2]) ^ var_3));
                        }

                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            var_18 -= ((var_10 > ((var_6 + (arr_29 [i_4] [i_7 + 1] [i_4] [i_4] [i_4])))));
                            var_19 ^= (647618725 || -647618725);
                            var_20 = ((var_5 <= ((((arr_10 [22]) || var_3)))));
                            arr_31 [i_10] [i_10] [i_5] [i_10] [i_10] = ((var_3 ? ((~(arr_10 [i_6]))) : (!-3925)));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_21 = (!0);
                            var_22 -= (((((-(arr_30 [1])))) ? (arr_30 [i_4 - 2]) : (arr_15 [i_4 - 2] [i_4 - 2])));
                            arr_35 [i_4 + 1] [24] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] = ((((((arr_14 [i_4] [i_6 - 1] [19]) ? (arr_12 [i_4] [i_4]) : (arr_24 [i_11] [i_11] [i_5] [i_5] [i_6 + 1] [i_5] [i_4 - 1])))) ? var_4 : (((var_1 ? var_3 : var_11)))));
                        }
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            arr_40 [i_12] [i_5] [19] [i_7] [21] [2] = ((((((arr_18 [i_6]) - var_6))) ? var_2 : (arr_29 [i_4 + 1] [i_6 + 1] [1] [i_7 + 3] [i_12 - 4])));
                            var_23 -= var_10;
                            var_24 = var_10;
                            arr_41 [i_4] [i_5] [i_6] [i_7] [i_7] = (((arr_23 [0] [i_12] [i_12 - 1] [i_7 + 2] [i_4]) ? (((var_11 << (var_8 - 2734515943)))) : (((arr_37 [i_4]) ? (arr_37 [i_4]) : var_9))));
                        }
                        var_25 *= (var_3 <= var_11);
                    }
                }
            }
        }
        var_26 = var_11;

        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        var_27 = ((var_9 ? (arr_32 [i_4] [i_4] [15] [i_4 - 1] [i_4]) : ((((arr_46 [i_4] [i_13 - 1] [i_14] [i_15]) ? (arr_45 [i_4 + 1] [i_13] [i_14]) : var_6)))));

                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_52 [i_13] [13] [i_14] [i_15] [i_16] = var_6;
                            arr_53 [i_13] [21] [8] [i_15] [8] [i_13] [i_13] = (((arr_19 [i_13 - 1] [i_13] [i_4 - 2] [1]) - (arr_39 [i_4 - 1] [i_13] [i_14] [i_13 + 1] [i_14])));
                            arr_54 [i_13] = (((((var_10 ? var_8 : (arr_23 [i_4] [i_13 + 1] [i_14] [i_4] [i_16])))) ? (arr_21 [1] [i_15] [i_14] [i_15] [i_16]) : var_11));
                            var_28 -= -var_1;
                            arr_55 [i_4] [i_13] [i_14] [i_15] [i_13] = ((var_0 ? (arr_12 [4] [i_13 + 1]) : (arr_29 [i_13] [i_13] [i_13 - 1] [i_13 + 1] [i_13 - 1])));
                        }
                        for (int i_17 = 2; i_17 < 24;i_17 += 1)
                        {
                            var_29 = ((~(arr_33 [i_4] [i_13] [20] [i_15] [i_15])));
                            arr_59 [i_13] [i_15] [18] [18] [i_13] = (((((arr_46 [i_4] [i_13] [i_14] [1]) ^ var_10)) & var_5));
                            arr_60 [i_4] [i_13] [i_13] [i_15] [22] = (var_1 ? 647618724 : 2549097310);
                        }
                        for (int i_18 = 1; i_18 < 23;i_18 += 1)
                        {
                            var_30 = ((((((arr_25 [i_18] [i_18] [i_18] [8] [8] [i_13 + 1] [i_4]) | var_7))) | ((~(arr_47 [i_4] [23] [8])))));
                            var_31 = var_3;
                        }
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            arr_66 [i_4] [14] [9] [1] [i_13] = (!var_1);
                            arr_67 [i_13] [9] [i_14] [i_15] [21] [i_19] = ((!(var_7 && var_11)));
                            var_32 = var_7;
                            arr_68 [i_4 - 2] [i_13] [i_4 - 2] [i_15] [i_13] = var_8;
                        }
                    }
                }
            }
            arr_69 [8] [i_13] = var_1;
        }
    }
    #pragma endscop
}
