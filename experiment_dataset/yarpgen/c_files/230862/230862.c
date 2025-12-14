/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((~(var_1 != var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_1] = (((((((96 - (arr_0 [i_1] [i_0])))) ? (((-99 ? (arr_6 [i_0] [i_0] [i_0] [i_2]) : (arr_4 [i_0] [i_0])))) : 17971839956412766602)) + (!var_4)));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (min(((max(96, (arr_4 [i_0] [i_2 - 1])))), var_1));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 6;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_13 = ((((!-99) ? (min(var_9, var_5)) : (((99 ? var_3 : (arr_2 [1] [i_3])))))));
                                arr_22 [i_4] [i_4] = (arr_4 [i_4] [i_4]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        arr_25 [i_4] [i_4] = ((~(arr_23 [i_5 - 1])));
                        arr_26 [i_3] [i_4] = ((-87 ? (arr_18 [i_4] [i_8 - 1] [i_5 - 1] [i_5 - 1] [i_4]) : (arr_6 [i_8 - 1] [i_4] [i_4] [i_4])));

                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            arr_30 [i_5] [i_5] [i_4] = -118;
                            arr_31 [i_8] [i_4] = (((((var_6 ? var_4 : (arr_14 [i_4])))) ? ((-738400034 ? -758 : var_1)) : (arr_19 [i_3] [i_8 + 2] [i_9 + 1] [i_8 + 2] [i_5 - 1])));
                            var_14 *= (((arr_24 [i_8 + 2] [i_3] [i_5 - 1] [i_3]) ? (arr_15 [i_9] [8] [8] [i_3]) : (((var_5 ? var_6 : var_6)))));
                        }
                        for (int i_10 = 1; i_10 < 7;i_10 += 1)
                        {
                            var_15 = (max(var_15, ((((var_6 >> (757 - 729)))))));
                            var_16 -= (((arr_27 [i_3] [i_4] [i_5] [i_8] [0] [i_5] [i_10 + 3]) != -89));
                        }
                        var_17 &= (((arr_28 [i_8] [i_8 + 1] [i_5 - 1]) / (((var_2 ? 95 : 62358)))));
                        arr_36 [i_4] [i_5] [i_4] [i_4] = ((((((arr_16 [i_8] [i_4] [i_8 + 1]) ? var_11 : (arr_29 [i_4] [i_3] [i_4] [i_4] [8] [i_8])))) ? (arr_35 [i_4] [i_5] [8] [i_4] [i_4] [i_4]) : (4056759322 || var_6)));
                    }
                }
            }
        }
        arr_37 [i_3] = ((-var_8 ? var_3 : ((+(((arr_7 [i_3] [i_3]) & (arr_12 [i_3])))))));
    }
    #pragma endscop
}
