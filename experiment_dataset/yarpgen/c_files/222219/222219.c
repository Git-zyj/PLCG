/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 = (max((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))), (min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
        arr_3 [i_0] = (((arr_0 [i_0]) >= (((1656474305 <= 15809) ? 15793 : ((var_2 ? (arr_0 [i_0]) : var_8))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = -15793;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((~((((arr_7 [i_1]) && ((((arr_7 [i_1]) ? var_8 : (arr_6 [i_1] [i_1])))))))));
        arr_9 [i_1] = ((((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_7 [i_1])))) ? (((arr_6 [i_1] [i_1]) * (arr_7 [i_1]))) : (arr_7 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((~((min((arr_11 [i_2]), (arr_11 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_11 = (max(var_11, ((min(((~(arr_10 [i_4 + 3] [i_4 + 2]))), (arr_10 [i_4 + 1] [i_4 + 1]))))));
                    var_12 = 255;
                    var_13 = (min(var_13, (((((min(19400, 220))) ? (((1 + 32010) / var_6)) : ((((((arr_11 [i_4]) * (arr_18 [i_3])))))))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_22 [i_2] [i_4] [i_5] = (((arr_15 [i_4 + 3] [i_3]) || ((((arr_11 [i_2]) ? (arr_20 [i_4 + 3] [i_4 - 1] [i_4 + 2]) : (arr_10 [i_4 - 1] [i_4 + 3]))))));
                        var_14 = (((((!(arr_17 [i_2] [i_3] [i_4] [i_4])))) <= (arr_20 [i_3] [i_4 - 1] [i_4])));
                        arr_23 [i_2] [i_3] [i_4] [i_4] [i_5] = ((((-(arr_16 [i_2] [i_4] [i_2]))) | (((var_6 >= (arr_21 [i_4] [i_4] [i_4] [i_5]))))));
                        arr_24 [i_2] [i_4] [i_4] = ((!(((~((4992554766745321375 ? var_2 : 99)))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_15 = (max(var_15, 252));
                        var_16 = min((arr_17 [i_2] [i_6] [i_4] [i_6]), (arr_19 [i_2] [i_2] [i_4 + 3] [i_4 - 1] [i_6] [i_6]));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_2] [i_4] [i_4] [i_3] [i_2] = (((((1 ? 1 : 37998))) ? (((-(arr_16 [i_4 + 1] [i_4] [i_4 + 3])))) : 4294967295));
                        arr_30 [i_2] [i_4] [i_4] [i_4] = (arr_18 [i_4]);

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            arr_33 [i_4] [i_4] [i_4] [10] [i_8] [i_4] [i_7] = 3125;
                            var_17 = (((arr_17 [i_2] [8] [i_4 + 1] [8]) <= (((arr_31 [i_4 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) ? ((~(arr_31 [i_2] [i_3] [i_3] [i_7] [i_8 + 1]))) : (arr_11 [i_7])))));
                            var_18 &= -11473;
                            arr_34 [i_4] [3] [i_4] [i_3] [i_4] = (arr_15 [i_8] [i_4]);
                            var_19 = (((((~(arr_31 [i_7] [i_3] [i_4 - 1] [i_7] [i_8 - 1])))) ? ((((arr_31 [i_8] [i_3] [i_4 + 2] [i_8] [i_8 + 1]) == (arr_31 [i_3] [i_3] [i_4 + 1] [i_2] [i_8 - 1])))) : ((((arr_31 [i_2] [i_3] [i_4 - 1] [i_3] [i_8 + 1]) != -2074561204)))));
                        }
                        arr_35 [i_4] [i_4] [i_4] = 50;
                        arr_36 [i_2] [i_7] [i_4] [i_4] = ((~(((arr_31 [i_2] [i_4 + 3] [i_4 + 3] [i_7] [i_3]) ? (arr_31 [i_2] [i_4 + 3] [i_4 + 2] [i_3] [i_3]) : (arr_27 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_20 -= (((arr_20 [i_2] [i_4 + 1] [i_4 + 3]) ? (((1 | 1) ? (~27538) : ((max((arr_14 [i_2] [i_3]), 114))))) : (arr_21 [i_2] [i_3] [i_2] [i_2])));
                        arr_41 [i_2] [i_4] [i_3] [i_3] [i_4] [i_9] = 1;
                    }
                }
            }
        }
        var_21 = (max(var_21, var_5));
        var_22 = (arr_17 [i_2] [i_2] [i_2] [i_2]);
    }
    var_23 = 36028797018963967;
    var_24 = (min(var_6, ((((((-671287871 ? var_9 : var_9))) & -2397203012)))));
    var_25 = var_0;
    #pragma endscop
}
