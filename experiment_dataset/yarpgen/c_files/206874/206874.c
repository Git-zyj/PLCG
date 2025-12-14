/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((-3893016903116020632 ? (arr_1 [i_0]) : ((var_1 ? ((-3893016903116020635 ? var_2 : var_5)) : (((max(var_0, (arr_2 [i_0])))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] = (arr_4 [i_0] [1] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] [i_3] = ((~(arr_8 [i_0])));
                        var_18 = (max(var_18, (((-254 ? (3893016903116020634 != 206) : (arr_10 [i_2] [i_0] [i_2] [i_0] [i_1] [i_2]))))));
                        var_19 = (max(var_19, var_5));
                        var_20 = ((var_9 ? (~var_0) : 1));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_17 [i_0] [i_0] = (1 ^ 126);
            arr_18 [12] [i_4] [i_4] |= (arr_0 [5]);
            arr_19 [i_0] [6] [7] = ((-(arr_10 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4])));
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_21 = (min(var_21, ((min(1, var_0)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {
                        var_22 = 19;
                        arr_29 [i_5] [i_6] [i_5] = (max((min((arr_15 [i_6]), var_0)), 0));
                        var_23 = (max(var_23, (((((((min((arr_0 [i_5]), (arr_27 [i_6] [i_6] [10])))) + -var_4)) * (((min((arr_26 [i_6] [0] [i_7]), var_3)))))))));
                        var_24 *= ((var_8 ? ((((!(arr_4 [i_6] [16] [i_6]))))) : (min(((0 ? 8160 : -104)), (arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 + 2])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        var_25 *= ((~(arr_30 [i_9 + 1])));
        arr_32 [i_9] [i_9] = -55;
        arr_33 [i_9] = (33554431 / (arr_14 [i_9 + 1] [i_9] [17]));
    }
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_26 = (arr_47 [i_10] [i_11 + 1] [i_10] [i_10] [5]);
                            arr_48 [i_10 + 3] [i_11] [9] [1] [i_11 + 1] = ((-(arr_35 [i_14])));
                            var_27 = ((var_10 >> (((arr_46 [i_13 + 3] [i_13 + 1] [i_13 + 1] [i_13 + 3] [i_13 + 2]) - 51065))));
                        }
                        arr_49 [i_12] [i_11 + 1] = ((~(((arr_42 [i_10 - 3]) - (arr_42 [i_10 - 1])))));
                        arr_50 [i_10 + 3] = ((1 ? ((min(var_15, (!-1)))) : var_12));
                        var_28 = (min(var_28, (((((max((((arr_45 [i_10] [i_11] [i_12] [i_13 + 3] [21]) * var_15)), ((max(123, 0)))))) ? (arr_46 [i_10] [1] [12] [1] [i_13]) : (255 + -46))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 24;i_16 += 1)
            {
                {
                    arr_58 [i_10] [i_10] [21] [4] = ((((min((((var_13 >> (-734239755 + 734239780)))), ((-111 ? -2494113483482405282 : var_2))))) && (arr_34 [0] [1])));
                    arr_59 [10] [i_15] [i_16 - 4] = var_17;
                    var_29 *= 120;
                    var_30 = ((22 - (((arr_40 [10] [i_16 - 4] [i_10 - 3]) ? -5019355662226301203 : (arr_37 [i_10 + 4] [i_10 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
