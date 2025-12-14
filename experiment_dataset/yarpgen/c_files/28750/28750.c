/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_4 [11] = (((98 || -6932533449262279032) ? 1 : (var_2 || 1)));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
        {
            arr_9 [7] [i_1] [i_0] = (((arr_3 [9]) ? ((1070369342 ? 18115 : 0)) : ((((arr_1 [i_0]) <= (arr_6 [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [9] [i_2] [i_2] [i_1] = (((arr_2 [i_0 + 1]) ? (arr_2 [i_2]) : (arr_2 [i_3])));
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_2] [i_2] [i_3] = ((~(arr_3 [i_1 + 3])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_25 [i_1] [i_5] [i_4] [i_5] = ((~(((arr_5 [i_5 + 2] [i_1] [i_1]) ? var_2 : var_0))));
                            arr_26 [i_1] [i_5] [i_4] [i_1] = (!var_0);
                        }
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
        {
            arr_29 [10] [10] [i_0] |= (+((((((arr_18 [i_0] [10] [i_7]) ? (arr_19 [9] [i_0] [5]) : (arr_16 [4] [6] [4])))) ? 224 : (arr_3 [i_7]))));
            arr_30 [i_7] [i_7] = -1;
            arr_31 [i_0 + 1] [8] [i_7] &= ((-1070369342 ? (max(var_4, ((1 ? 5921103065214059868 : (arr_2 [i_7]))))) : (((+((min((arr_17 [i_0 + 1]), var_4))))))));
        }
        arr_32 [i_0] = (((((10777 ? -1 : 1))) | (min((max(var_10, (arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [3]))), -43274))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        arr_36 [2] |= (arr_3 [i_8]);
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_45 [i_8] = (~(((arr_43 [i_11] [i_11] [i_9 - 4] [i_9] [9]) ? (max((arr_43 [i_8 + 1] [i_9 - 3] [8] [i_9 - 3] [i_9 - 3]), var_3)) : (((var_9 ? var_5 : 1))))));

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_49 [i_8] [i_9] [i_8] [i_11] [i_11] [i_8] = (((-var_4 != (arr_42 [i_9 - 4] [i_9 - 2] [i_9] [i_8 + 1] [i_8 + 1]))));
                            arr_50 [i_8] = (((-6932533449262279033 / 7937) || 3071160762));
                            arr_51 [11] [i_8] [i_8] [i_9] = ((((var_9 ? -1 : (min(2428144666045147043, (arr_17 [i_8]))))) + -var_0));
                            arr_52 [i_8] = (min(var_11, (~0)));
                            var_13 = (arr_1 [i_8]);
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_14 ^= ((155 ? 12525641008495491754 : 1070369342));
                            arr_55 [9] [i_10] [0] [i_8] [i_10] [i_10] = (max(0, 176));
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                        {
                            arr_60 [i_14] [i_11] [i_8] [4] [i_8] = (arr_10 [i_10] [10]);
                            arr_61 [i_8] [i_9 - 4] [i_8] = ((~((~((~(arr_23 [i_10] [i_10] [i_10] [8] [i_10])))))));
                        }
                        var_15 = (arr_18 [i_8] [i_8] [i_11]);
                        var_16 = (min((min((arr_34 [7]), var_1)), ((((((var_10 ? 17979214137393152 : 5))) ? (arr_33 [i_10]) : (arr_10 [i_11] [i_9]))))));
                    }
                }
            }
        }

        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            var_17 = (-(arr_39 [i_8 + 1] [i_8]));
            arr_64 [i_8] = (arr_11 [i_8] [i_8] [3] [i_8]);
        }
    }
    var_18 = var_4;
    #pragma endscop
}
