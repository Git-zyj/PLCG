/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += max((min(-2147483642, (var_0 || 9))), ((((((var_7 ? var_8 : 65024))) || ((max(var_6, 25)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_10;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] = ((!(arr_14 [i_4] [i_4 + 2] [i_4] [i_4 - 2] [9])));
                                var_12 = (((((~(arr_8 [i_4 - 4] [i_3 - 4])))) ? (((((~(arr_1 [i_3])))) & var_7)) : ((((arr_0 [i_0] [i_0]) & var_3)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = (((((min((arr_1 [i_0]), -1169395468)))) ^ (min((~-1169395467), (~var_7)))));
                var_13 = (max(var_13, ((((!(arr_13 [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_14 &= (((var_10 ^ 15) & ((~(!var_7)))));
                            var_15 = (max(var_15, 3));
                            var_16 = ((!((min(5776588752212526795, (max(-1507612262, var_5)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_17 = (min(var_17, ((((((var_6 ? (((arr_10 [i_7] [i_8] [i_8] [i_7] [i_7] [i_8]) & var_0)) : (arr_3 [i_7])))) ? (((arr_25 [i_8]) ? (max(var_0, 5776588752212526801)) : ((((!(arr_26 [i_7] [i_8] [i_7]))))))) : -78)))));
                arr_28 [i_8] [i_8] = (((min((arr_8 [i_8] [i_7]), (arr_8 [i_7] [i_7])))) ? (((arr_8 [i_7] [i_7]) ? (arr_8 [i_8] [i_7]) : (arr_8 [i_7] [i_7]))) : -var_3);
                arr_29 [i_8] = (min((((!(arr_3 [i_7])))), (min((arr_25 [i_7]), (arr_25 [i_8])))));
                arr_30 [i_8] [i_8] [i_8] = ((~(~var_10)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_38 [0] [i_10])));

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_42 [i_11] [i_11] [4] [i_12] = 8;
                        var_19 = ((~-1) ? ((((arr_37 [i_11 + 3] [i_11] [i_11] [i_9 + 1]) <= ((~(arr_38 [i_11] [i_11])))))) : ((min((arr_40 [i_9 + 1] [i_11] [i_11] [i_12]), var_0))));
                        var_20 = (max(var_9, var_9));
                        arr_43 [i_9] [i_10] [i_11] [i_12] = (5387789580742794450 ? (((!((max((arr_41 [1] [1] [16] [i_11] [i_11] [i_11 - 1]), (arr_35 [i_12]))))))) : -7894704409171757107);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        arr_47 [i_11] [i_10] [i_10] [i_10] = (var_2 & var_3);
                        var_21 = (min(var_21, var_5));
                        var_22 = (((((arr_46 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1]) ? 5776588752212526807 : var_9)) & (~var_8)));

                        for (int i_14 = 3; i_14 < 16;i_14 += 1)
                        {
                            arr_50 [i_11] [i_13] [i_11 + 4] [i_11] [i_11] = (~-17);
                            var_23 = (((arr_38 [i_11] [i_9 + 1]) - var_0));
                        }
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            var_24 = (min(var_24, 5));
                            var_25 = var_8;
                            var_26 = (min(var_26, (arr_44 [i_11 - 1] [i_10] [i_9 + 1] [i_9 + 1])));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_27 = var_5;
                            arr_57 [i_11] [i_10] [i_10] [i_10] [i_10] = var_7;
                            arr_58 [i_16] [i_9] [i_11] [i_10] [i_9] = ((-1507612259 ? var_1 : 1169395467));
                            var_28 = (~(arr_33 [i_13 + 1]));
                        }
                        arr_59 [i_11] [i_9] [i_11] = (var_4 ? var_0 : (arr_44 [i_9] [i_9] [i_9 + 1] [i_9]));
                    }
                    var_29 = (min(var_29, ((min(((var_9 & (arr_36 [i_9 + 1]))), ((~(arr_36 [i_9 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
