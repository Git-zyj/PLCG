/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 3] |= ((((!(arr_0 [i_0]))) ? ((2147483647 ? var_12 : (arr_0 [i_0 - 4]))) : (1 * var_0)));
        var_13 = 1;
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_14 |= 229546161;
                        var_15 = (max(var_15, (((min((arr_5 [i_3]), (arr_5 [i_4])))))));
                    }
                }
            }
        }
        arr_17 [i_1] |= (((min((min((arr_1 [i_1]), var_11)), ((((arr_16 [i_1]) >= 31744))))) * 15));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_16 -= (((((573 + 9) ? (arr_18 [i_5 - 1]) : (var_2 + 570))) - ((((max((arr_18 [i_5 - 1]), var_7))) ? (arr_20 [i_5]) : 6026772358202321401))));
        var_17 ^= 1509059100;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_18 -= var_6;
                    var_19 = (((((12267 ? (var_6 <= var_0) : (((arr_19 [i_5] [i_5]) & 1))))) <= ((((max((arr_23 [i_5] [i_7 + 1]), (arr_27 [23] [23] [23] [23])))) ? ((var_6 ? var_1 : var_9)) : (-19 & var_5)))));
                    var_20 &= (((((~(max(8388607, 17179869183))))) * (min(6188179908750801054, ((min((arr_22 [i_5 - 1] [2]), var_6)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_21 = ((var_3 - var_1) * (arr_21 [i_9 - 1] [i_9 - 1]));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_22 = var_5;
                            arr_42 [i_8] [i_9] [i_10] [i_11] [i_12] [i_10 + 2] [i_11] = (((arr_37 [i_8] [i_9 + 4] [i_10 + 2] [i_11]) ? (arr_22 [i_8] [i_8]) : (arr_22 [i_9 - 1] [i_8])));
                            var_23 *= (5565 ? (arr_38 [i_8] [1] [i_10] [i_12 + 1] [i_12 - 4]) : (arr_24 [i_8] [8] [i_8]));
                        }
                    }
                }
            }
            arr_43 [i_8] [i_8] [i_8] = ((4294966784 ? ((((!(arr_1 [i_9 + 4]))))) : var_1));
            arr_44 [i_8] [i_8] = (arr_0 [i_9 - 1]);
            arr_45 [i_8] = 9223372036854775803;
        }
        arr_46 [i_8] = ((var_3 ? (arr_22 [i_8] [i_8]) : (arr_26 [i_8] [i_8] [i_8] [i_8])));
        var_24 = (((((var_9 % (arr_0 [i_8])))) ? (arr_35 [i_8] [i_8] [i_8]) : ((5870390378257954723 ? (arr_40 [i_8] [1] [i_8] [i_8] [i_8] [i_8]) : var_9))));
        var_25 = (arr_0 [i_8]);
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 18;i_16 += 1)
                    {
                        var_26 += (((arr_55 [i_16] [i_15] [i_15] [i_13]) & (((var_2 ? var_12 : (arr_48 [i_15]))))));
                        var_27 = ((var_0 - (arr_18 [i_13 + 1])));
                        arr_58 [i_16 + 4] [i_15] [i_13] [i_15] [i_13] |= (var_6 % ((var_1 - (arr_23 [i_13] [i_13]))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            {
                                var_28 &= (var_4 <= var_7);
                                arr_65 [i_14] [i_15] [i_14] [i_14] = ((((((((var_5 ? var_6 : (arr_21 [i_13] [i_15])))) ? (((!(arr_25 [i_13] [1] [i_13] [i_13])))) : (arr_57 [21] [21] [i_13 + 1] [i_17 - 1] [i_17 + 2])))) ? ((min(var_7, (max((arr_57 [i_14] [i_14] [i_15] [i_17 + 2] [i_18]), (arr_63 [i_15] [i_15] [i_18])))))) : (~var_6)));
                                var_29 ^= var_12;
                            }
                        }
                    }
                    var_30 *= ((var_10 != (-1390604420 >= 681388003)));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 20;i_20 += 1)
                        {
                            {
                                var_31 = (min(var_7, (((arr_48 [i_13 + 1]) ? var_11 : (arr_70 [i_13] [2] [i_15] [i_13 + 1] [i_20 + 2])))));
                                var_32 = (max(var_32, 57897));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = (((((~(var_2 % 2625066695096478425)))) ? ((~((max(125, 20602))))) : var_5));
    #pragma endscop
}
