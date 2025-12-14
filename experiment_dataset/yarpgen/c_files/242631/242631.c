/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 * (((((65532 ? var_3 : var_12))) / var_5))));
    var_15 = -7822;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [4] [i_2 - 1] [i_0] [i_0] [4] = (((((var_10 ? -157017406 : 28949))) ? ((-(arr_5 [1] [i_2] [i_3]))) : ((var_2 >> (var_0 - 17179)))));
                        arr_10 [i_0] [0] [3] [i_2] [i_0] = ((~(arr_8 [i_2 + 3] [i_0])));
                        var_16 *= ((!(((var_6 ? var_4 : var_13)))));
                    }
                }
            }
        }
        var_17 = (max(var_17, var_6));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = (((arr_12 [i_5] [i_0]) ? -65 : var_9));
                        var_19 = (max(var_19, (((769520153 ? -3520 : 5313866066576365231)))));
                        arr_20 [17] [i_4] [i_0] [i_6] = (((1 % var_5) ? (((!(arr_1 [8] [15])))) : 3));
                        arr_21 [i_0] = var_7;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = (min(255, 17974948071820829935));

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_21 *= (!251);

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_22 *= (max((((((var_12 / (arr_23 [10])))) ? (18 > var_9) : var_4)), (((~3232119551190143570) ? 1 : ((min(0, (arr_17 [i_7] [i_8] [i_10] [i_11]))))))));
                            arr_36 [i_10] = -1933939411;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_23 += (((arr_24 [i_8]) ? ((max(127, 252))) : (!3366029433)));
                            var_24 = ((-928937856 * (arr_3 [i_12])));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_25 &= ((~((((arr_1 [i_7] [5]) >= (arr_12 [i_7] [i_8]))))));
                    var_26 = ((((32745 ? ((max(2097151, var_10))) : ((var_0 ? 251658240 : var_0)))) & 25922));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_27 ^= (((((!((min(0, (arr_34 [i_7] [i_7] [i_9] [1] [i_16]))))))) >= -909040445));
                            arr_50 [i_7] [i_7] [i_9] [i_9] [7] [9] = 1;
                            arr_51 [i_7] [i_8] [i_9] [8] [i_16] = ((var_11 ? ((3984287847 ? ((18446744073709551605 ? 12 : 255)) : (18446744073709551593 & 1))) : (min(var_1, var_3))));
                        }
                    }
                }
            }
            var_28 *= ((((((max(1520075810, var_6)) & ((var_13 ? var_4 : var_11))))) ? (max((9 >> var_10), 12)) : var_6));
        }
        arr_52 [i_7] = (arr_18 [i_7] [i_7] [i_7] [i_7]);
    }
    var_29 = var_10;
    #pragma endscop
}
