/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_10 = ((-(arr_1 [i_0 + 1] [i_0 - 1])));
        var_11 = -2147483647;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = arr_0 [i_1];
        arr_6 [i_1] |= ((15 ? -68 : -13393));
        arr_7 [i_1] = 1661627935;
        var_12 = (arr_4 [18] [0]);
        var_13 = (min(var_13, (((15 <= (arr_4 [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 -= (((((var_4 ? (arr_10 [i_2]) : ((-(arr_4 [15] [i_4])))))) ? var_9 : 13393));
                                arr_22 [i_2 - 2] [i_2 - 2] [i_4] [i_5] [i_2 - 2] = ((((var_9 ^ ((var_9 ? (arr_11 [i_3]) : 1878407667)))) >= ((min((!-13395), 67)))));
                                arr_23 [i_2] [i_3] [10] [i_5] [i_6 + 2] = ((-(~var_0)));
                                var_15 = ((-var_8 ^ (arr_8 [i_2 - 1])));
                                var_16 = var_0;
                            }
                        }
                    }
                }
                var_17 = (min(var_17, var_1));
                arr_24 [i_2] [i_2] = (var_0 ? ((-(arr_9 [i_2]))) : 13395);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    var_18 += ((-51 ? (((!(arr_12 [i_7 + 1] [i_8] [i_9 + 2])))) : ((max(1, -68)))));
                    arr_33 [12] [i_7] = 33776997205278720;
                    arr_34 [i_7] [i_7] [i_7] = ((-21307 ? ((((!(arr_12 [i_9 - 1] [i_7 + 1] [i_7]))))) : ((var_2 ? 3236571949 : (!var_1)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {

                    for (int i_13 = 4; i_13 < 17;i_13 += 1)
                    {
                        arr_48 [i_13 - 3] [i_12] [i_11] [i_10] = (max(((min((arr_47 [i_13 - 2] [i_13 - 3] [i_13 - 2] [i_13] [i_13 - 4] [i_13]), (arr_47 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])))), 22));
                        var_19 = (max(var_19, ((min((((13394 >= 33) < (!23449))), ((-71 || ((((-20829 + 2147483647) << (((-441793027294722916 + 441793027294722942) - 26))))))))))));
                        arr_49 [i_10] [i_11] [i_12] [i_12] [10] [i_13] = arr_19 [i_13] [i_12] [i_11] [i_10] [i_10];
                        arr_50 [i_10] [5] [i_12] [i_13 - 2] = (arr_3 [i_10]);
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        arr_54 [i_10] [i_11] [i_12] [i_14] = (arr_36 [i_12]);
                        var_20 = 92;
                        arr_55 [i_10] = (-33776997205278715 || var_0);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_21 -= 32767;
                        arr_59 [5] [5] [5] [i_15] [i_15] = arr_16 [i_10] [i_11] [16] [i_10];
                        arr_60 [7] [i_11] [i_12] [i_11] [i_11] [i_15] = (((arr_53 [i_10] [i_11]) ? var_1 : -8179154745737358645));
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_22 *= ((748575394 ^ 3651767379) ^ (((max((arr_12 [i_12] [i_11] [i_10]), (max((arr_1 [i_10] [i_12]), (arr_53 [i_10] [i_12]))))))));
                        arr_63 [i_10] [i_11] [8] [i_12] = var_7;
                        var_23 = ((-1 ? -20829 : 52));
                        var_24 |= var_3;
                        var_25 -= var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 16;i_18 += 1)
                        {
                            {
                                arr_72 [i_10] [i_10] [i_10] [i_17] [i_10] = ((15 ? (min((~var_2), (arr_18 [i_18] [i_18] [i_18] [i_18] [i_18 + 1]))) : 13393));
                                var_26 = (max(var_26, (((-(max(var_8, (~var_8))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
