/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [6] [i_0] = 40751;
                                var_13 = ((((((~15191641015680764982) ? ((min(30608, 1))) : (((arr_8 [i_3] [10] [10] [i_0]) ? (arr_3 [i_0]) : 37))))) ? (arr_10 [2] [i_3] [i_2] [i_1] [i_1] [2]) : (((2266616352 ? 0 : -161318205)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = arr_3 [i_1 + 2];
                    arr_15 [i_0] [i_1 - 2] [i_0] = ((((+((((-127 - 1) > (arr_0 [i_1 - 2])))))) == (arr_12 [i_1 - 2] [i_1 + 1] [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                arr_23 [8] [i_5 + 1] [i_5] = ((2709384672 ? (((arr_17 [i_5 + 1]) + (arr_17 [i_5 - 2]))) : (arr_17 [i_5 + 2])));
                arr_24 [i_5] = (65535 || 0);
                var_14 = ((!(arr_11 [i_5] [4] [i_5 + 1] [i_6] [i_5])));
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_15 = (arr_26 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_7] = (var_11 + 0);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_39 [i_7] [i_7] = 65524;
                                var_16 = (arr_36 [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    {
                        var_17 = (arr_28 [i_12] [i_12]);
                        var_18 *= ((~(((arr_38 [i_15 + 2] [i_15] [i_15 - 1] [i_15] [i_15] [i_15] [i_15]) ? (arr_38 [i_15 + 2] [1] [i_15 - 1] [i_15] [i_15 + 2] [i_15] [i_15 + 1]) : (arr_38 [i_15 + 1] [i_15] [i_15] [i_15] [i_15] [i_15] [10])))));
                        var_19 = (max(((max((arr_50 [i_15 + 1] [i_13] [i_14] [i_13]), (arr_50 [i_15 + 1] [i_12] [i_15 - 1] [i_13])))), (max((-2147483647 - 1), 1332544720))));
                        var_20 = (max(var_20, (((((min(2980937420840064632, 134217696))) ? 476406924 : 3831819592)))));
                    }
                }
            }
        }
        arr_52 [i_12] = (((!(arr_33 [i_12] [12] [12] [i_12]))));
    }
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                {
                    arr_62 [i_16] [i_16] = var_8;
                    arr_63 [i_16] [i_18] [i_17] = (arr_53 [i_16]);
                }
            }
        }
    }
    #pragma endscop
}
