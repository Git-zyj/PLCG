/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-2026418568 ? (arr_1 [i_0]) : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((262143 ? (arr_3 [i_1 + 1] [i_1] [i_2 + 1]) : var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 -= ((var_11 - (arr_10 [i_1] [i_1 + 1] [i_2] [i_2 + 1] [8] [i_2])));
                                var_18 = (((arr_11 [i_0] [i_2 + 1]) && (arr_3 [i_1 + 1] [i_1] [i_2 + 1])));
                                var_19 |= (((-262143 + 2147483647) << (((-262139 + 262170) - 31))));
                                var_20 |= (((((-262139 ? 42555 : (arr_12 [i_0] [1] [8] [i_0] [i_4])))) ? (!var_16) : (arr_4 [8] [i_0])));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((-((11761596176913124694 ? 4294967295 : 2581636149072769558)))))));
                    var_22 = (((arr_9 [0] [i_0] [i_1 + 1] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_2 - 1] [i_2 + 1])));
                }
            }
        }
        arr_14 [i_0] [i_0] = -53646;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_23 *= (arr_11 [1] [i_5]);
                        arr_24 [i_0] [i_5] [i_6] [i_0] = ((var_0 <= (arr_11 [i_0] [1])));
                        arr_25 [i_0] = ((-(arr_6 [i_6 - 2] [8] [i_0])));
                        arr_26 [i_0] [i_0] [1] [i_0] = 1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_33 [i_0] = (var_15 - var_3);
                    var_24 = ((var_1 ? var_1 : (arr_10 [i_0] [9] [i_8] [i_8] [i_8] [i_9])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_10] [i_9] [i_8] [i_0] = ((+(((var_14 + 2147483647) << (var_12 - 196)))));
                                var_25 = (((arr_13 [i_0] [i_8] [i_9] [i_10] [5]) / 360800997));
                                arr_39 [3] [9] [i_0] [3] [8] [3] = 7747643446731496695;
                                var_26 = ((-((((arr_11 [i_0] [8]) >= var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_27 = (((arr_9 [i_8] [i_0] [i_12 + 1] [i_12]) ? ((var_6 ? var_14 : var_10)) : -31329));
                                arr_45 [i_0] = ((var_9 ? (((arr_29 [i_0]) ? (arr_37 [6]) : (arr_10 [8] [8] [7] [0] [0] [i_12]))) : 2122556171));
                                arr_46 [i_0] [i_8] [i_0] = var_11;
                                var_28 = (((arr_4 [i_0] [i_0]) && 38148));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 |= var_13;
    var_30 = (((64275 - var_10) <= (max(var_16, (var_4 ^ var_14)))));
    var_31 = (min(((((((53654 ? 0 : 3))) && 7))), var_3));
    var_32 = (max(var_32, var_7));
    #pragma endscop
}
