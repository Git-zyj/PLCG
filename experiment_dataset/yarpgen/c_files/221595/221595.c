/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((~0) ? (~88) : (min(var_7, 23532)))));
                arr_7 [i_1 - 1] [1] = ((~((((((arr_5 [i_1] [i_1]) ? 4503599627370495 : (arr_1 [i_1]))) <= (((1 ? (arr_4 [i_0] [i_1 - 1] [i_1]) : -4256))))))));
                var_16 = (max((max((arr_5 [i_0] [i_0]), (-127 - 1))), (arr_4 [21] [13] [8])));
                var_17 = (max(var_17, (((max(((max(-23522, (arr_4 [i_0] [i_0] [i_0])))), (~-4469113487296342935)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] = var_3;
                    arr_16 [i_2] [i_3 - 1] [i_2] &= (arr_13 [i_2 + 1] [i_3] [i_4] [i_2 - 1]);
                    var_18 = (!3226318786);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_19 = ((((arr_2 [i_5] [i_7]) ? (arr_2 [i_7] [i_5]) : (arr_2 [i_5] [i_5]))) * 213);

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_20 ^= ((((max((arr_14 [i_5] [i_6]), -111))) ? (max((arr_14 [i_5] [i_8]), 913142405)) : (((arr_14 [i_5] [i_6]) ^ (arr_14 [i_5] [i_5])))));
                        var_21 = ((((((arr_14 [i_5] [1]) * (arr_14 [i_8] [i_6])))) ? ((((((arr_19 [i_6] [i_6]) ? var_12 : (arr_19 [i_6] [i_6])))) * (min(1, var_4)))) : (arr_10 [i_8])));
                        var_22 &= arr_3 [i_5];
                        var_23 -= (min((((32758 & var_14) ? var_11 : (arr_14 [1] [i_6]))), (arr_26 [i_7] [4] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = (((((!(((var_9 ? var_3 : 31342)))))) >> ((((~(!var_11))) + 16))));
                        arr_31 [i_6] [i_6] [4] [4] [6] = (((((arr_14 [i_7] [i_6]) && (arr_14 [i_5] [i_7]))) ? (((!(((var_13 ? var_4 : (arr_21 [8] [8]))))))) : ((31728 ? (max(87, -2050706657)) : (arr_4 [i_5] [9] [i_7])))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_25 = (1 <= 7182343009106571121);
                        arr_34 [i_5] [i_6] [i_6] = (max((((min(var_4, -4794)) & (((948000111 ? (arr_14 [i_5] [i_6]) : (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5])))))), (((1 ? var_14 : var_5)))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_6] [i_6] [i_11] = arr_22 [i_6] [i_6];

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_43 [2] [i_6] [i_6] [i_11] [i_12] = (!var_11);
                            var_26 = ((-((((arr_26 [i_6] [i_6] [i_12]) > (arr_26 [i_6] [i_6] [i_7]))))));
                            var_27 = (min(var_11, ((((min((arr_21 [4] [i_12]), 1))) ? (arr_19 [i_6] [i_6]) : (((arr_26 [i_6] [i_6] [5]) ? (arr_23 [3]) : var_4))))));
                            var_28 ^= (max((arr_25 [i_5] [i_5] [5] [i_5] [i_5]), (min((arr_25 [i_12] [i_11] [7] [i_6] [i_5]), (arr_33 [i_5] [i_6] [i_7] [i_11])))));
                        }
                    }
                    arr_44 [i_6] [i_6] = (((arr_2 [i_6] [i_6]) | var_11));
                }
            }
        }
    }
    #pragma endscop
}
