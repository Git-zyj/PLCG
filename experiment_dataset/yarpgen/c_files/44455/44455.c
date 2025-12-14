/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = (arr_0 [i_0 - 1] [i_0]);
        arr_2 [i_0] [i_0] = 47;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_4 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_13 = (min(var_13, (((var_2 ? (((((883611220 / (arr_4 [i_3])))) ? (65528 / var_0) : -225)) : (((((arr_1 [i_2]) != 0)) ? ((-883611220 ? 883611220 : var_3)) : 0)))))));
                        var_14 = (((((arr_9 [i_2] [i_2] [i_2] [i_4]) ? 0 : (arr_9 [i_1] [i_1] [i_3] [i_1])))) ? ((((-883611240 || (arr_10 [i_2] [i_2] [i_2]))) ? (var_8 - 11332871612743320497) : 44)) : (~26));
                        var_15 = (max(var_15, ((((var_3 % (arr_5 [i_1])))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_16 = var_4;
                            var_17 = (((min(var_7, (arr_16 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) - ((((arr_15 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 2]) - (arr_15 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 2]))))));
                            var_18 = (((arr_7 [i_1] [i_4]) != var_1));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((-1806489417 && (arr_19 [i_6])))) + (arr_17 [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_20 = 0;
                        arr_27 [i_7] = 0;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_21 = arr_28 [i_10 + 1];
                        var_22 = 0;
                        var_23 = (((arr_23 [i_6] [i_6] [i_10]) ? (arr_23 [i_6] [i_12] [i_10]) : (arr_23 [i_10] [i_11] [i_10])));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_24 = (arr_33 [i_13] [i_13] [i_13] [i_13]);
        var_25 += var_7;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 12;i_15 += 1)
            {
                {
                    var_26 &= (min((((((max((arr_40 [i_13] [i_13] [i_13]), 2305843008945258496))) ? -var_5 : (arr_34 [i_15 - 1] [i_15 - 3] [i_15 - 3] [i_15])))), (max((max((arr_33 [i_13] [i_14] [i_13] [i_13]), 18446744073709551615)), (((225 ? 143 : 1)))))));
                    var_27 = 1;
                }
            }
        }
    }
    var_28 = var_5;
    var_29 |= ((var_5 > (~-41)));
    #pragma endscop
}
