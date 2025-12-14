/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = var_2;
                    arr_9 [i_2] [i_2] [i_2] [11] = (((((var_5 ? var_6 : var_1))) ? (((max((arr_4 [i_0]), (arr_4 [i_1]))))) : (((arr_7 [i_2] [i_2] [i_2]) ^ (arr_4 [i_2])))));
                }
            }
        }
        var_19 = -1;
        arr_10 [i_0] [i_0] = (max(var_5, ((((arr_2 [i_0] [i_0]) || (arr_7 [i_0] [i_0] [i_0]))))));
        var_20 = 4238436060;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_21 = 48;
                    var_22 = (arr_2 [i_4] [i_4]);

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_3] [i_5] = (((arr_17 [i_6] [i_5]) || (arr_1 [15])));
                        var_23 = (~var_6);
                        arr_23 [i_3] [i_4] [i_5] [2] = (((arr_2 [i_3] [i_3]) - var_17));
                        arr_24 [16] [i_3] [i_4] [16] [i_6] |= 104;
                    }

                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        var_24 = (max(var_24, (arr_26 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7])));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_29 [i_3] [i_3] [i_4] [i_7] [13] [i_7] [i_8] = ((((arr_17 [i_5] [i_8]) + 9223372036854775807)) << (var_9 - 15753966553656366179));
                            arr_30 [i_8] [1] |= ((var_10 ? (var_4 || 56531236) : var_17));
                            var_25 = ((~(arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1] [2] [i_7])));
                        }
                        var_26 = (arr_26 [i_3] [i_4] [i_4] [i_7 - 3] [i_3]);
                        var_27 = var_3;
                    }
                }
            }
        }
        var_28 = (min(var_28, (((-((var_1 ? var_2 : var_3)))))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_29 = (max(var_29, (((((((var_15 ? var_2 : var_6))))) % 2870515142))));
        var_30 = (min(var_30, (arr_0 [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_31 |= ((((-2147483644 ? (((max(55662, 68)))) : (var_6 ^ 1900956667))) & ((((arr_4 [i_10]) ? (arr_4 [i_10]) : (arr_4 [i_10]))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        var_32 = var_7;
                        arr_44 [i_13] [i_12] [i_10] [i_13] = ((var_9 ? ((((arr_3 [i_13] [i_11] [i_12]) + (arr_5 [i_10] [i_10] [i_12])))) : (min(((var_15 / (arr_6 [i_13] [i_13]))), ((max(var_11, var_7)))))));
                        var_33 = (max(var_33, (arr_40 [i_10])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    arr_51 [i_10] [i_14] [9] [i_15] = ((~(arr_42 [i_10] [i_10] [6] [i_10])));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_34 = (max(var_34, (arr_37 [i_16] [i_16] [i_15])));
                                arr_57 [i_17] [i_10] [12] [i_10] [i_10] &= (min(var_10, (!var_1)));
                                var_35 = ((((min((arr_34 [i_14] [i_15]), var_13))) - var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = (max(var_5, (65 || var_13)));
    #pragma endscop
}
