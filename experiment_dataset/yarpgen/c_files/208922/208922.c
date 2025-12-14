/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max((min(-1, 0)), (((-26 ? var_6 : -var_3)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((14 ? ((((!(arr_1 [i_0]))))) : (arr_1 [i_0])));
        arr_3 [i_0] = ((8870941430228013091 ? 1061177137102068831 : 137));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (min(((-((var_3 ? 4983 : (arr_6 [i_1]))))), (arr_6 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [2] = ((43 ? ((-(!var_1))) : var_1));
                    arr_14 [i_1] [i_2] [i_1] = ((!(((-915174314 ? 536838144 : 40)))));
                }
            }
        }
        arr_15 [10] [10] = (min((arr_4 [0]), var_10));
        arr_16 [i_1] = (((805306368 ? 18446744073709551600 : var_11)));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_20 [0] = (arr_4 [4]);
        arr_21 [i_4] = ((arr_1 [i_4]) ? ((((var_10 < (arr_1 [i_4]))))) : ((var_1 ? (arr_1 [i_4]) : (arr_1 [i_4]))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_5] = ((-(((728334954584126496 >= (arr_17 [i_5]))))));
            arr_25 [i_5] = 56594;
            arr_26 [i_4] [i_4] [i_5] = (((arr_7 [10]) && (arr_10 [10])));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_29 [i_4] &= var_4;
            arr_30 [i_4] [i_4] [i_6] = -var_10;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_33 [i_7] [16] [i_4] = 7;
            arr_34 [4] [i_7] = (((arr_11 [i_4] [i_4] [i_7]) ? var_6 : -84));
            arr_35 [i_4] = var_1;
            arr_36 [i_7] [i_4] = (((arr_23 [i_7] [i_7]) ? var_7 : (arr_17 [i_4])));
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_40 [14] [i_8] = (((20 ? 82 : 487791635554598183)));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_44 [i_9] = ((!(((1 ? 98 : 18)))));
            arr_45 [4] [i_8] [i_9] &= (max((arr_41 [i_8]), -13869));
            arr_46 [i_9] [i_8] = var_10;
            arr_47 [i_9] = 18446744073709551609;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_53 [i_8] [i_9] [i_9] = ((((23 >= (arr_5 [i_8]))) ? var_8 : (arr_19 [i_8])));
                        arr_54 [i_8] [i_9] [i_9] [i_11] = (((!1) ? (arr_51 [i_9]) : (((!(((221 >> (2654 - 2635)))))))));
                        arr_55 [i_8] [i_8] [i_9] [2] [i_10] [i_10] = (((arr_4 [i_9]) == 84));
                    }
                }
            }
        }
        arr_56 [i_8] = var_8;
        arr_57 [i_8] [i_8] = 2147483628;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    arr_63 [i_8] [i_8] [i_8] = ((((min((arr_4 [0]), (!0)))) ? 236 : (arr_7 [8])));
                    arr_64 [i_8] = (var_4 ? (((var_7 ? ((-(arr_59 [i_12] [5] [i_13]))) : (arr_18 [i_8])))) : 8817383668818741228);
                    arr_65 [i_8] [i_12] [i_12] [i_13] = 26726;
                }
            }
        }
    }
    #pragma endscop
}
