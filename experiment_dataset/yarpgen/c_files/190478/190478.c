/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_2 [i_0]) ? ((((min(128, -30))) ? (arr_2 [i_0]) : (arr_1 [17]))) : (((arr_1 [i_0]) ? ((96 ? var_2 : 56240)) : (arr_2 [i_0])))));
        arr_3 [12] = (((!((min((arr_1 [i_0]), var_7))))));
        var_17 = ((1 / ((-97 ? (1781366438 & 222) : ((33 ? (arr_1 [9]) : 1))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((min((arr_4 [i_1]), (arr_4 [i_1]))))) != (arr_1 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_17 [i_3] [i_2] [15] [i_4] = (max((-2 ^ 0), ((-4552853055474335156 ? 1545228655 : 14784))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= (((arr_15 [i_3] [i_3] [i_3] [11] [i_3]) & (min((arr_8 [i_1] [18] [i_1]), ((64 ? 6133 : 1))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_28 [i_5] &= (min((((max(2266363999, (arr_5 [18]))) << ((-1 ? (arr_4 [1]) : 28162)))), ((max((((arr_12 [i_5] [i_5] [1] [1]) || 1)), ((!(arr_21 [i_6]))))))));
                    arr_29 [i_5] [i_5] [i_7] = (-644075787235486734 == 1);
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_18 ^= (max((max((arr_2 [i_9 + 3]), (arr_2 [i_8]))), (min((arr_2 [i_5]), (-2147483647 - 1)))));
                                var_19 |= (max((((arr_26 [i_5] [i_7 + 2] [i_7 + 1] [i_8]) ? 1 : (arr_26 [i_5] [i_7 - 1] [i_7] [i_9]))), (arr_26 [i_5] [i_7 + 3] [i_5] [i_7 + 3])));
                                var_20 += (min((((max(2874724559038999913, 1081734725)))), (((((var_13 / (arr_16 [i_9] [i_5] [4] [i_5] [4])))) / (arr_14 [1] [i_5] [i_8 + 1] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
        arr_36 [i_5] [i_5] = (min(-21935, (min(-1618905418, 2147483647))));
        arr_37 [i_5] [i_5] = ((max(((6133 ? 6133 : -11)), ((-66 ? var_5 : var_13)))));
        var_21 ^= (arr_25 [i_5]);
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_22 = (((max((arr_39 [i_10 + 1] [i_10]), (arr_39 [i_10 + 1] [i_10]))) == ((((!(arr_39 [i_10 + 1] [i_10])))))));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_23 = (max(1, ((15772 ? ((var_9 ? -43 : 15854354029628571478)) : 62084))));
            arr_43 [1] [i_10] = (min((arr_30 [i_11] [i_11] [i_11]), (((arr_30 [8] [i_11] [i_11]) ? (arr_30 [i_10 + 1] [i_11] [i_11]) : 3932160))));
        }
    }
    var_24 ^= (-9223372036854775807 - 1);
    #pragma endscop
}
