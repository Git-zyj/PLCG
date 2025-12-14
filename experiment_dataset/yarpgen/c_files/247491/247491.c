/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_9 | 29) ^ var_2))) ? (max((min(2080374784, var_3)), var_1)) : ((((~4955) & (max(var_0, var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] = ((min(var_7, (arr_11 [i_0] [i_3] [i_0] [i_1] [i_0 + 1]))));
                                arr_15 [i_0] [10] [i_2] [i_2] [i_2] = (min((var_9 && 105), var_5));
                                arr_16 [i_0] [i_3] [i_3] [i_3] [11] [11] [i_3] = ((-((var_0 ? 61 : var_3))));
                                arr_17 [i_0] [9] [i_0] [i_3] [i_4] = (((((var_3 + (var_4 & 2351409221)))) ? (((((min(255, 21036)))) & -var_10)) : var_11));
                                var_15 += ((248 + ((min((arr_10 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 3] [i_3 + 2]), (arr_10 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 2] [i_3 + 2]))))));
                            }
                        }
                    }
                    var_16 = ((~(((!(((var_8 / (arr_7 [i_0] [i_0] [i_2] [i_2])))))))));
                }
            }
        }
    }
    var_17 = ((((~((2 ? 962848448076183401 : var_5)))) % ((((59 ? 93 : 13015149819522013372)) | (-110 | 105)))));

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_18 = -99;
        arr_20 [i_5] = ((!((min(var_2, ((min((arr_18 [i_5]), 93))))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_19 = ((~(arr_22 [i_5] [i_6] [i_6])));

            for (int i_7 = 3; i_7 < 17;i_7 += 1)
            {
                var_20 = (min(var_20, var_3));
                var_21 = (!219);
                arr_26 [i_6] = -547059040;
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_22 = (max(var_22, (!-var_8)));
                var_23 = ((var_11 ? (arr_27 [i_6] [i_6] [i_8 + 3] [i_8 + 2]) : (arr_27 [i_6] [i_6] [i_8 + 3] [i_8 + 2])));
                arr_29 [i_6] [i_6] [i_6] = ((!(((arr_23 [i_6] [i_8]) || (arr_19 [18])))));
            }
            for (int i_9 = 2; i_9 < 18;i_9 += 1)
            {
                var_24 = ((-(arr_23 [i_6] [i_9 + 2])));
                var_25 = (((arr_31 [i_9 + 2] [i_6] [i_9 + 1] [i_9 - 2]) ? var_11 : (arr_30 [i_6] [i_6] [i_9 + 1])));
                var_26 = (((17483895625633368226 - 55) ? var_9 : -221));
                arr_32 [i_5] [i_5] [i_6] [i_6] = ((-(20 & 17483895625633368214)));
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_27 = (((!-4956) ? -896667174 : ((-(arr_31 [i_5] [i_10] [i_10] [i_10])))));
            var_28 = (max(var_28, 1943558069));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            var_29 = (var_2 >= var_10);
            var_30 = ((((((arr_19 [i_5]) ^ (-2147483647 - 1)))) & (var_5 ^ 223)));
            var_31 |= ((((2351409226 >> (((((-9223372036854775807 - 1) - -9223372036854775788)) + 32)))) % 105));
            arr_37 [i_5] = (((arr_34 [i_5] [i_5] [i_5]) == (arr_22 [i_5] [i_11] [i_11])));
            var_32 = (var_3 ? (arr_27 [i_5] [i_11] [i_11] [i_11]) : (arr_27 [i_11] [i_5] [i_5] [14]));
        }
        arr_38 [i_5] [i_5] = ((-((var_1 ? (arr_31 [i_5] [i_5] [i_5] [16]) : (arr_35 [i_5])))));
        var_33 = 2147483641;
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_44 [i_12] [i_12] = ((-(((arr_42 [i_12] [i_12] [i_12]) ? var_0 : (arr_34 [i_12] [i_12] [i_12])))));
            arr_45 [i_12] [i_12] = var_13;
            arr_46 [i_12] = var_4;
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_34 = (min(var_34, (((((((var_1 >= var_12) / ((var_8 - (arr_42 [i_12] [i_14] [i_14])))))) ? ((-(max((arr_24 [i_12] [i_12] [i_14]), var_2)))) : ((145876961 ? -127 : 1)))))));
            var_35 += (max((((((((arr_0 [i_12] [i_14]) & 113))) >= 1943558070))), (~480)));
        }
        var_36 = (min(((((arr_7 [i_12] [i_12] [i_12] [0]) / 789))), -var_13));
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_51 [i_15] [i_15] = (arr_33 [i_15]);
        var_37 = (((arr_33 [i_15]) == (-32767 - 1)));
    }
    #pragma endscop
}
