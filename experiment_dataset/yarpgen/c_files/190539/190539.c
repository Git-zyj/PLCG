/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0 + 3]) % (arr_2 [i_0])))) && 7));
        var_13 = ((((max((arr_2 [i_0 - 3]), (arr_0 [i_0 - 3])))) ? (min(((96 ? var_5 : 0)), (arr_2 [i_0 + 3]))) : ((((arr_0 [3]) - (max(var_12, 2585642076)))))));
        var_14 *= (~((((min(var_9, (arr_0 [14])))) ? var_8 : (max((arr_1 [i_0]), 92398078)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_4] = ((((-((var_8 ^ (arr_9 [i_2 - 1] [i_2] [8])))))) ? ((((arr_11 [2] [2]) > var_0))) : (((((arr_6 [i_1]) ? var_7 : 125829120)))));
                        var_15 = (max(var_15, ((((~-77) ? (min((var_0 % var_8), ((var_9 % (arr_6 [i_2 - 2]))))) : ((min((arr_12 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1]), (arr_5 [i_2 - 2])))))))));
                        arr_15 [16] [i_1] [i_1] [16] [i_1] = arr_6 [i_1];
                        var_16 = -var_7;
                    }
                    arr_16 [i_1] [13] = ((-(~-56534)));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            arr_22 [i_1] [i_2 - 2] [i_3] [i_5] [i_6] [i_6 + 3] [i_6 - 1] = arr_11 [i_3] [i_2];
                            var_17 = ((19 ? 1023 : 0));
                        }
                        var_18 = (min((((((arr_20 [8] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]) ? (arr_12 [6] [i_2] [i_2] [i_2] [i_2 - 2]) : var_9)))), (max(((min(var_3, (arr_11 [i_2] [i_5])))), var_9))));
                        var_19 &= ((((((((var_2 | (arr_4 [i_2])))) ? (~239) : (max((arr_10 [9] [i_2] [i_3]), var_7))))) ? (((((arr_11 [i_1] [i_1]) ? 118 : (arr_7 [i_1] [i_1]))) ^ ((max((arr_4 [21]), (arr_7 [i_2] [6])))))) : (arr_18 [i_1] [i_2 - 1] [i_3] [i_5])));

                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [5] [0] [i_3] [3] [i_7 + 1] = (arr_24 [i_1] [17] [8] [i_7 + 1] [i_7] [i_5]);
                            arr_26 [i_2 - 1] [i_2] [i_2] [16] [9] [i_2 + 1] = (min(13, 146));
                            var_20 = var_7;
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            arr_31 [i_8] = ((511 ? ((((arr_13 [i_8] [i_8 + 3] [i_8] [i_8 + 2] [i_2 + 1] [11]) ? var_8 : var_8))) : (arr_9 [i_8 - 1] [0] [i_2 + 1])));
                            arr_32 [15] [i_8] [i_3] [i_3] [i_2 - 1] [i_8] [i_1] = (-1419107203 && -74);
                        }
                        arr_33 [i_2] [i_1] [i_3] [i_1] [i_3] [i_1] = (arr_28 [i_1] [8] [i_2]);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (min(66, ((~(arr_29 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 1])))))));
                        var_22 = (min((min(var_7, ((var_5 ? 6962152235310344199 : (arr_7 [i_1] [i_9]))))), 9626444336124312555));
                        arr_37 [i_1] = (min((((arr_18 [i_2 - 2] [i_2 - 2] [3] [i_1]) ? (~var_5) : var_7)), var_9));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_41 [i_1] [8] [8] [1] = (min(var_11, ((((min((arr_23 [i_1] [i_1] [i_3]), (arr_28 [i_1] [i_1] [i_10]))) / (arr_35 [i_2] [i_2 - 2] [i_3] [3] [i_3]))))));

                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            var_23 = ((~(min((max(-51, 2147483647)), 146))));
                            var_24 += (((-var_8 && var_5) ? var_2 : (((((min(var_6, (arr_13 [i_1] [i_2] [i_1] [22] [i_10] [i_11]))))) ^ ((0 & (arr_20 [i_3] [9] [i_3] [i_3] [i_3] [i_3])))))));
                        }
                        var_25 = ((-((((max((arr_34 [i_3]), (arr_23 [i_1] [i_3] [i_10])))) ? (max(var_0, (arr_10 [i_1] [i_3] [i_3]))) : (((min(146, (arr_45 [i_1] [7] [10] [i_1] [i_1])))))))));
                        var_26 = ((-(((var_7 > (arr_24 [i_1] [i_1] [i_1] [i_2 - 2] [i_3] [i_10]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_52 [i_1] [i_2] [21] [i_1] = (arr_38 [18] [13] [i_3] [i_12] [i_13]);
                                arr_53 [i_1] [i_2] [i_2] [i_12 - 1] [i_13] = (arr_38 [i_3] [22] [i_3] [22] [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_0;
    var_28 *= (min(var_3, ((((var_0 ? -51 : -17374))))));
    #pragma endscop
}
