/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = ((((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0]) : ((1 ? (arr_1 [i_0] [i_0]) : var_7))))) ? (((arr_1 [i_0] [i_0 + 2]) ? ((max(var_9, 26814))) : (arr_0 [i_0 - 1]))) : ((((~0) < var_1)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = ((((max((arr_5 [i_2] [i_1] [i_1 - 2] [i_0 - 2]), 1))) ? (max((arr_5 [i_2] [17] [17] [17]), (arr_4 [i_0] [i_1 + 4] [i_2]))) : (((((min(var_6, var_1))) - 4219)))));
                    var_13 -= ((((arr_3 [i_1 + 4]) <= (arr_3 [i_1 + 3]))));
                    var_14 = (max(var_14, (((var_7 & ((((arr_2 [i_0 + 1]) <= (((var_6 - (arr_4 [i_0] [i_1 + 1] [i_2]))))))))))));
                }
            }
        }
        var_15 = (min(var_15, (var_10 < var_6)));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_9 [i_3] [i_3] [i_0] = -14287;
            arr_10 [8] [6] = ((+((26812 ? (arr_2 [i_0 + 2]) : var_11))));
            arr_11 [i_3] = (max(((((arr_1 [i_0] [i_0]) < ((((arr_2 [i_0 - 1]) == var_2)))))), ((7 << ((((-(arr_1 [i_3] [9]))) + 90))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max((arr_15 [12] [12] [6] [8] [i_0 + 1] [i_3]), (((((min(var_3, (arr_15 [i_0] [i_3] [i_4] [i_4 - 2] [i_5] [2])))) ? (arr_4 [i_4 + 2] [i_0 + 1] [i_0]) : ((max((arr_5 [i_0] [i_0] [i_4] [i_3]), (arr_4 [i_0 - 1] [i_0] [i_4]))))))))))));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_17 ^= (((((arr_17 [14] [14]) ? (((max((arr_0 [i_4]), 26808)))) : (((arr_4 [i_0] [i_4] [i_0]) / var_10)))) ^ (arr_18 [3] [i_5] [i_4 + 2] [i_3] [i_0])));
                            arr_21 [i_6] [i_6] [i_6] [8] [i_6] [i_6] [i_6] = (((((-(arr_19 [i_0] [i_0 + 2] [i_4 - 1] [i_5] [17])))) ? ((((max((arr_18 [i_0 - 1] [i_3] [1] [i_5] [i_6]), var_10))) ? ((((var_0 < (arr_5 [i_6] [i_6] [11] [6]))))) : (arr_15 [i_0 + 2] [i_3] [i_4 + 2] [i_5] [13] [i_6]))) : var_8));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [8] [i_0 + 2] [i_0 + 2] [i_3] [i_5] [i_5] [i_7] |= max(-68, ((var_11 ? 20 : ((26028 ? var_4 : var_2)))));
                            arr_25 [i_4] [i_4] [i_4] [18] [i_4] &= var_4;
                            var_18 = (((arr_7 [i_3] [i_5]) ? (max((((arr_1 [i_7] [i_4]) ? (arr_19 [i_5] [i_3] [i_4] [i_5] [4]) : 1023)), (arr_18 [i_4 - 1] [i_4 - 1] [i_7] [i_4 - 1] [i_4]))) : var_5));
                            arr_26 [i_0] [18] [i_4] [i_0] [i_0] &= -12501;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_19 = min((((!(arr_28 [i_0] [i_3] [i_4 - 2] [i_5])))), 9223372036854775799);
                            var_20 += (((((max((arr_12 [i_3]), var_5))) || (var_9 <= var_7))));
                        }
                        arr_29 [i_0 + 2] [i_0 + 2] [i_4] [i_0 + 2] [i_5] = var_5;
                    }
                }
            }
        }
        var_21 = (((((arr_20 [i_0] [i_0 + 2] [i_0] [i_0 - 2] [i_0]) ? (arr_3 [i_0]) : (arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 1]))) > (max(989969366, (arr_23 [11] [i_0] [7] [i_0 - 2] [i_0 + 1] [1])))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] = ((((-7 ? -5295853675418920463 : (arr_27 [i_9] [i_9] [10] [10] [i_9]))) < (18 * var_11)));
        var_22 *= (((((var_11 ? var_4 : var_7))) ? (((arr_12 [i_9 + 2]) ? var_9 : (arr_22 [4] [i_9] [i_9] [4]))) : (!var_5)));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        arr_37 [13] = (((arr_34 [i_10]) - ((((min((arr_34 [i_10]), (arr_34 [i_10])))) ^ ((var_0 >> (117 - 92)))))));
        arr_38 [4] = (((((-var_8 + (arr_34 [i_10])))) ? ((((((arr_33 [i_10]) ? 1 : (arr_34 [i_10])))) ? (((arr_36 [i_10]) ? 2251799813685247 : (arr_34 [i_10]))) : ((((arr_36 [i_10]) + (arr_35 [i_10] [i_10])))))) : (arr_34 [i_10])));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_43 [i_11] = (min(((max((arr_12 [i_11]), (arr_12 [i_11])))), (((arr_12 [i_11]) * 1))));
        arr_44 [i_11] [i_11] = ((((!(arr_22 [i_11] [i_11] [i_11] [i_11]))) ? var_4 : (((26287 ? var_5 : (arr_23 [16] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
    }
    var_23 = ((((((min(var_2, var_9))) ? (((-32767 - 1) ? var_8 : var_8)) : var_8)) < var_7));
    #pragma endscop
}
