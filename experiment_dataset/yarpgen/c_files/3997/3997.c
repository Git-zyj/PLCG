/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 = (arr_9 [i_3] [i_3] [i_3 - 1] [i_3]);
                        var_17 -= ((7 || ((((65151 && 1) ? ((max(-31856, (arr_7 [i_0] [i_0] [i_2] [i_2])))) : 31222)))));
                        var_18 = (((var_11 > (arr_1 [i_3 - 1] [i_3 + 1]))));
                    }
                }
            }
        }
        var_19 = var_6;
        var_20 = var_11;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = min((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_11 [i_4]) : var_8)), (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]));
        var_22 = (-2147483647 - 1);
        var_23 = ((~(var_12 >= var_4)));
        var_24 = (max(var_24, ((((((-23 ? -75 : -24))) % (max((arr_4 [i_4]), (arr_4 [i_4]))))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_25 = (((((!(arr_18 [3] [i_6] [i_6])) ? (((var_7 << (arr_9 [i_6] [i_6] [5] [5])))) : var_9))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_26 = (((((var_2 && var_6) <= var_4)) ? (min(var_12, (arr_15 [i_8 - 1] [i_8 - 3]))) : ((((!var_3) ? var_11 : (((var_1 % (arr_10 [i_6] [i_8])))))))));
                        var_27 -= var_5;
                        var_28 = var_14;
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_29 = (((((var_8 ? var_6 : (arr_20 [17] [i_7] [i_7])))) ? var_2 : (arr_7 [13] [i_9] [i_9] [i_9 + 1])));
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] = var_0;
                        arr_28 [i_5] [i_5] [i_5] = (var_11 == (arr_8 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 2]));
                        var_30 -= (var_5 - var_9);
                    }
                    for (int i_10 = 4; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_33 [1] [1] [i_7] [i_10] &= var_3;
                        var_31 *= (min(var_13, -25));
                        var_32 = (((arr_14 [i_7]) ? var_0 : (((var_4 + 2147483647) << (((arr_29 [i_10 + 1] [i_10 + 1]) - 1897151661))))));
                        var_33 = (min(var_33, (((min(var_7, -var_1))))));
                        var_34 = (arr_30 [i_10 - 4] [i_5] [i_5] [i_7] [8] [i_5]);
                    }
                    arr_34 [i_5] [i_6] [i_5] [i_5] = var_2;

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_35 = (min(var_5, (arr_19 [i_5])));
                            arr_41 [i_7] [i_11 + 1] [i_6] [i_7] &= ((arr_30 [i_5] [i_6] [i_6] [i_7] [i_7] [i_12]) ? (((-(arr_9 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1])))) : var_9);
                            var_36 = ((~((max((arr_18 [i_5] [i_5] [i_12]), (arr_25 [i_5] [i_7] [8]))))));
                        }
                        var_37 = (arr_14 [i_5]);
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_38 = var_8;

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_39 = max(var_14, (((!(arr_43 [i_13] [i_13] [i_7] [i_6] [i_5])))));
                            var_40 += (((((var_1 - ((var_11 ? var_3 : var_6))))) ? -68 : (max(var_9, -var_13))));
                            arr_47 [i_5] [4] [5] [i_5] [i_7] = (((~var_14) >= (arr_39 [i_6] [i_6] [i_7] [19] [i_13])));
                            var_41 = ((~((min(((max(var_4, var_13))), (min(var_10, var_0)))))));
                        }
                        var_42 = ((((((-32767 - 1) ? 1 : var_9))) ? (((((var_11 ? var_3 : var_3))) ? ((-(arr_38 [i_5] [i_5] [i_7] [i_7]))) : (arr_6 [i_6] [i_7] [i_6]))) : var_0));
                    }
                }
                arr_48 [i_5] = ((!((max((min(var_8, (arr_14 [4]))), (((!(arr_35 [i_5] [i_5] [i_5] [i_5])))))))));
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_43 += ((var_0 != (((arr_45 [i_16 + 1] [i_15 - 1] [i_15 - 2]) + (arr_45 [i_16 + 1] [i_16 + 1] [i_15 - 2])))));
                            var_44 = (min((((arr_19 [i_15 + 1]) ? (arr_23 [i_16] [i_16] [8] [i_5] [i_5]) : (32760 != 4975))), (((((-32763 ? 4294967290 : 3370928435846600027)) > ((((var_11 > (arr_31 [i_5] [i_5] [i_5] [i_5]))))))))));
                        }
                    }
                }
                var_45 += var_3;
            }
        }
    }
    #pragma endscop
}
