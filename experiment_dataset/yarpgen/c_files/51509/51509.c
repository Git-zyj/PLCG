/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = -7370;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] = (min(((((var_15 && (arr_1 [i_1]))) ? var_0 : ((-(arr_3 [i_0 - 2] [i_1]))))), var_3));
                        var_19 -= ((47947436 ? var_4 : (min((arr_8 [i_0] [i_2] [i_0 - 2] [i_3]), (arr_8 [1] [1] [i_0 - 1] [1])))));
                        var_20 -= -67;
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_21 *= ((-(((((arr_2 [i_4] [1] [1]) && (arr_5 [i_4] [i_4] [i_4 - 1] [i_4]))) ? -748294224438377019 : ((((arr_6 [i_4]) * 0)))))));
        arr_13 [i_4 - 2] = var_8;
        arr_14 [i_4] [i_4] = ((-(((!(arr_9 [i_4]))))));
        var_22 = (max(var_22, var_9));
        var_23 = (max((((!(arr_2 [i_4] [i_4 + 1] [i_4 - 2])))), (((arr_0 [i_4] [i_4 - 2]) ? ((min((arr_12 [i_4]), (arr_9 [i_4])))) : ((max((arr_12 [i_4 - 3]), 189)))))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_24 ^= ((((-1534655654 >= (min(1, 619327093)))) ? ((47947437 ? 1 : 4122037865509361969)) : (arr_23 [i_5 - 1] [i_6] [i_9] [i_8])));
                                arr_26 [i_5 - 1] [i_6 + 1] [6] [i_8] [i_5] = (((((((((arr_22 [6] [i_5]) - var_11))) ? -var_1 : (((arr_19 [8] [i_7] [i_5]) ? (arr_25 [i_5]) : 47947436))))) ? (47947430 ^ 2147483644) : -2147483640));
                                var_25 = (min(var_25, ((((arr_22 [i_5 - 1] [i_7]) == var_4)))));
                                var_26 = (((((arr_19 [i_5] [i_6] [i_5]) ? ((((arr_18 [i_5] [i_8] [i_5]) || (arr_15 [i_5] [i_9])))) : (((arr_25 [i_5]) ^ 102426455)))) | (((arr_17 [i_5 - 1]) ? (arr_17 [i_5 - 1]) : (arr_17 [i_5 - 1])))));
                                arr_27 [i_5] [i_5] [i_6] [i_7] [8] [i_9] = ((-(+-188)));
                            }
                        }
                    }
                    arr_28 [i_5] [i_6 + 1] [i_5] = (arr_15 [i_6] [i_5]);

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_27 = (max(var_27, 39));
                        var_28 -= -72;
                        var_29 = ((((min(1486704023, (max(var_0, (arr_20 [i_5] [i_6 - 1] [i_5])))))) ? var_1 : (36298 / 188)));
                        var_30 &= (-198770471528942163 ? 187 : -65);
                        arr_33 [i_5] [7] [i_7] [i_10] = (min((((+(((-2147483647 - 1) ? 1 : 1))))), (min((((arr_16 [i_5]) ? (arr_23 [i_10] [i_5] [i_5] [i_5]) : 11682508984686908191)), (((-(arr_29 [i_5] [i_6] [i_7] [i_10]))))))));
                    }
                }
            }
        }
        arr_34 [i_5] [i_5] = (((((-76 ? (arr_17 [i_5]) : (!40)))) ? (((min(1071644672, (arr_22 [i_5] [i_5]))) % (((arr_29 [i_5] [i_5] [i_5] [i_5 - 1]) ? (arr_25 [i_5]) : (arr_24 [i_5] [i_5] [i_5] [i_5] [14] [i_5 - 1] [i_5]))))) : (!var_12)));
        arr_35 [6] &= 1;
        arr_36 [7] [i_5] = var_9;
        arr_37 [i_5] = -var_14;
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 16;i_11 += 1)
    {
        arr_41 [i_11] = (((((1 ? 55947 : var_4))) ? (((-(arr_40 [i_11])))) : (arr_38 [i_11])));
        arr_42 [i_11] = (arr_38 [i_11 + 3]);
    }
    var_31 = (max(var_31, (((396909076 ? (((!128) ? var_0 : var_3)) : ((min(var_6, var_4))))))));
    #pragma endscop
}
