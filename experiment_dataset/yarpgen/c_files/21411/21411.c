/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = -8558992879528287360;
        arr_4 [i_0] [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [i_1]);
        arr_9 [i_1] = ((((((((1322235619 ? (arr_6 [i_1]) : (arr_6 [i_1])))) - (max((arr_5 [i_1] [i_1]), (arr_7 [i_1])))))) ? (max((((arr_7 [i_1]) ? 3888025882 : (arr_7 [i_1]))), var_14)) : (((((41444 ? (arr_6 [i_1]) : (arr_7 [i_1])))) ? (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_7 [i_1]))) : (((((arr_5 [i_1] [i_1]) <= var_14))))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (arr_10 [i_2]);
        arr_14 [i_2] = (((arr_5 [i_2] [i_2]) ? (((max((arr_11 [i_2]), 73)))) : (max((min((arr_10 [i_2]), (arr_12 [i_2]))), 112))));
        arr_15 [i_2] = (((~var_13) ^ 210));
    }
    var_17 = ((45 ? (max((!var_13), 14571138421748107090)) : var_13));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_23 [i_3] = (min(var_14, ((((~45) || 183)))));
                arr_24 [i_4] [i_4] [i_4] = (arr_20 [i_3]);
                arr_25 [i_4] [i_3] [i_3] = (((arr_10 [i_4]) ? (min(35677, 1751888841)) : 82232012));
                arr_26 [i_4] [i_3] [i_3] = (((arr_19 [i_3]) > ((min((arr_19 [i_4]), (arr_19 [i_3]))))));
            }
        }
    }
    var_18 |= ((max((!var_8), 211)));

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_29 [i_5] [i_5] = 255;
        arr_30 [i_5] [i_5] = (((max((arr_27 [i_5]), (min((arr_6 [i_5]), var_2)))) > (arr_27 [i_5])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_34 [i_6] = var_6;
        arr_35 [2] = ((-(((arr_10 [i_6]) ? 65 : (arr_5 [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_45 [i_7] = ((!(arr_11 [i_9])));
                    arr_46 [i_7] = (max((max((arr_6 [i_8 + 1]), (arr_6 [i_8 + 1]))), var_4));
                    arr_47 [i_7] [i_7] [i_9] = ((((min((min((arr_27 [i_8]), (arr_43 [i_9] [i_9]))), ((((arr_11 [i_7]) ? 53 : (arr_40 [i_9] [i_8] [i_7]))))))) ? var_7 : ((((min(141, 1)))))));
                    arr_48 [i_7] = (arr_40 [i_7] [i_8] [i_7]);
                }
            }
        }
        arr_49 [i_7] [i_7] = var_12;
        arr_50 [i_7] = (((((((-(arr_7 [i_7])))) ? ((((!(arr_28 [i_7]))))) : (arr_7 [i_7]))) < (((1 ? var_13 : (arr_10 [i_7]))))));
        arr_51 [i_7] = ((!(((arr_7 [i_7]) <= 14072))));
    }
    #pragma endscop
}
