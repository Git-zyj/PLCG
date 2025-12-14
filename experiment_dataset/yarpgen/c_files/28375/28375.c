/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 59470;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = (((-(!var_17))));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = (32766 | 0);
                        var_19 = (max(((((!59476) ? (min((arr_4 [i_0]), var_5)) : ((6045 ? var_1 : 1))))), 11437197527191361700));
                        var_20 = ((((!(arr_9 [i_2 + 2] [i_3 + 1] [i_2 + 2] [i_3])))) + (min(59476, -32765)));
                    }
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_2] = (max(-var_12, (min((arr_5 [i_0]), (arr_5 [i_0])))));
                        var_21 = (((((var_17 | (arr_4 [i_2]))))));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_0] [i_0] = (min(-1069028435, 0));
                        arr_20 [i_2] = ((min((arr_18 [i_2] [i_2 + 2] [i_5] [i_5 + 4]), (arr_18 [i_2] [i_2 + 2] [i_5] [i_5 + 4]))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_22 = 11706889208826404539;
                        var_23 = (((0 - var_16) ^ (((((max(6059, 1018374592))) || 5058487290050905983)))));
                        var_24 = min(var_13, (min(((max(var_18, var_11))), 47)));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_25 = var_8;
                            var_26 = var_15;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_29 [i_0] [i_2] [i_2] [i_6] [i_0] = var_14;
                            arr_30 [i_2] [i_6] [i_2] [i_2] [i_2] = var_0;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_27 = (97 & -32766);
                            var_28 = -8360546436895297884;
                            var_29 = (((arr_11 [1] [i_1] [i_1] [i_1]) != 58));
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_30 ^= (max((arr_28 [i_10] [i_10] [i_10] [i_10]), (min(var_7, var_12))));
        var_31 ^= 101;
        var_32 = var_9;
        arr_35 [i_10] [i_10] = min(((var_0 ? var_16 : (arr_17 [i_10] [i_10] [i_10] [i_10]))), (((63 || ((max(var_0, var_15)))))));
    }

    for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_33 -= (arr_37 [2]);
        arr_38 [18] &= (arr_36 [16]);
        var_34 = 159;
    }
    for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_49 [i_14] [i_14] [i_14] [i_14] = (((((~5058487290050905983) ? (var_12 > var_17) : ((var_15 ? (arr_43 [i_14] [i_14] [i_14]) : var_6)))) - var_2));
                        var_35 = 1;
                        arr_50 [i_14] = min((arr_36 [i_14]), (((arr_36 [i_14]) / 23)));
                        var_36 += ((((var_0 >= ((var_18 ? 59495 : (arr_44 [i_12] [i_12] [i_12]))))) ? (((+((((arr_37 [18]) <= (arr_43 [i_13] [i_14] [i_15]))))))) : (max(var_5, (max(var_13, (arr_39 [15])))))));
                    }
                }
            }
        }
        var_37 *= (max(var_1, var_1));
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_38 = (((max((arr_48 [i_16] [2] [2] [i_16]), (~var_5))) * (((max(1, 218))))));
        var_39 = (min(var_39, (((var_17 <= (var_1 || 1))))));
        arr_53 [i_16] [i_16] = ((-var_3 << (((-30 + 58) - 28))));
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        arr_58 [i_17] [i_17] = ((517820609 ? (((10731053116318263537 ^ (((1 % (arr_57 [i_17]))))))) : (min(7715690957391288093, var_7))));
        var_40 = max((arr_57 [i_17]), ((~(arr_57 [i_17]))));
        var_41 += ((159 <= (((var_5 >= (var_16 | var_2))))));
    }
    for (int i_18 = 2; i_18 < 23;i_18 += 1)
    {
        arr_61 [i_18] = 1;

        for (int i_19 = 3; i_19 < 21;i_19 += 1)
        {
            var_42 = (~((~(~var_3))));
            arr_64 [i_18] = max(((-(((arr_59 [i_19]) ? (arr_60 [i_18] [i_18]) : var_1)))), ((~(!0))));
            arr_65 [i_18] [i_18] [i_18] = (i_18 % 2 == 0) ? ((max((((192 > ((22893 ? 16033 : -30160))))), (min(((10731053116318263537 << (((arr_62 [i_18]) + 3671)))), (~var_1)))))) : ((max((((192 > ((22893 ? 16033 : -30160))))), (min(((10731053116318263537 << (((((arr_62 [i_18]) + 3671)) - 8266)))), (~var_1))))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            arr_70 [i_18] [i_18] = ((10731053116318263523 / (10731053116318263523 && 10731053116318263528)));
            var_43 = 127;
            var_44 = (((!(arr_66 [i_18] [i_18 + 1]))));
        }
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            arr_73 [i_18] = -25578;
            var_45 = (min(-var_2, 2123276981988728081));
        }
    }
    #pragma endscop
}
