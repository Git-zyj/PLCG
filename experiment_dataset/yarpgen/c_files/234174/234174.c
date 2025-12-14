/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (~var_4);
        var_15 = var_11;
        var_16 *= ((arr_1 [i_0]) * ((1918142959 + (arr_1 [i_0]))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((arr_1 [i_0]) | (arr_0 [i_0])));
            var_17 = (max(var_17, var_10));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] = (var_7 + ((-(arr_6 [i_0] [i_2]))));
            arr_12 [i_0] = (max(-var_3, -var_14));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] = var_7;
            arr_16 [i_0] [i_0] = var_13;
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_18 = var_3;
            arr_19 [i_4] [i_4] [i_0] = (var_13 + var_8);
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_19 = var_5;
        arr_23 [i_5] [6] |= (~(arr_14 [i_5]));
        arr_24 [i_5] |= (((((arr_18 [i_5] [i_5] [i_5]) ? (arr_18 [i_5 - 1] [i_5 + 2] [i_5]) : var_3)) & (((arr_18 [i_5] [i_5] [i_5]) | (arr_18 [i_5] [i_5] [i_5])))));
        arr_25 [i_5 - 2] = ((var_3 ? -2095306191 : (!var_10)));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        var_20 = (max(var_20, var_14));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_35 [i_6] [i_7] [i_8 - 1] [i_8 - 1] = (((1 || 1) ? (max((max(2038048990, 50)), (arr_32 [i_6] [i_6 + 1] [i_6 + 3]))) : ((max((arr_30 [i_8 - 1] [i_7]), var_13)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_42 [i_6 + 3] [i_7] [i_8] [i_9] [i_6] [i_6 + 3] = (((var_13 ? var_12 : var_12)) << 14);
                                var_21 += ((1 ? var_4 : (arr_31 [i_6 + 1])));
                                arr_43 [i_6] [i_7] [i_8] [i_9 + 1] [i_10] = max(((var_13 ? (arr_37 [i_6] [i_9 + 1] [i_6 - 1] [i_8 - 1]) : var_7)), ((((arr_40 [i_6 + 3] [i_6 + 3] [i_8 - 1] [i_8 - 1] [1] [i_7]) != var_7))));
                            }
                        }
                    }
                }
            }
        }
        arr_44 [i_6] = max(var_6, 80);
        var_22 = (min(var_22, (((((2147483647 ? -118957686 : var_13)) + var_13)))));
        arr_45 [i_6] = (max(150, 2038048979));
    }
    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        var_23 = (arr_17 [i_11 + 2] [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                {
                    var_24 = var_8;
                    var_25 = var_3;
                }
            }
        }

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_26 = (min(var_26, 1298564152));
            arr_58 [i_11 - 2] [13] = ((((arr_52 [13] [i_11 - 1] [i_11 - 2] [i_11 + 3]) ? (arr_52 [1] [i_11 + 1] [i_11 - 2] [i_11 - 2]) : (arr_52 [i_11] [i_11] [i_11 - 1] [i_11 - 2]))));
            var_27 *= (-((((arr_51 [i_11 - 1] [i_11 - 1] [i_11 + 2]) && var_1))));
        }
    }
    var_28 = (var_11 == ((var_4 ? ((-2095306218 ? var_13 : var_12)) : (max(var_10, 87)))));
    #pragma endscop
}
