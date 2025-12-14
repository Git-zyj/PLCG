/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_3] = ((-((-(max(1190310185, (arr_4 [i_0])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [2] [i_4] [i_0] = ((1 == ((((var_16 ? (arr_1 [i_0]) : (arr_8 [i_5] [i_1] [i_1] [i_0]))) - (arr_12 [i_0] [i_0] [1] [i_0])))));
                                var_19 = (min((max(30462, (arr_14 [1] [i_5] [5] [i_5] [i_5 - 1] [i_4]))), (arr_15 [i_5] [7] [i_5] [i_5 - 1] [i_1])));
                            }
                        }
                    }
                    var_20 = 0;
                }
            }
        }
        arr_17 [i_0] [i_0] = (149 && (arr_6 [i_0]));
        arr_18 [i_0] = ((((((arr_1 [i_0]) * (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (min(-2086485918, var_18)) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
        arr_19 [i_0] [i_0] = (((arr_3 [i_0]) > (((1 > 16362) ? ((max(var_13, var_13))) : (((!(arr_14 [i_0] [1] [22] [i_0] [i_0] [1]))))))));
    }
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        var_21 = (min((((((var_18 ? (arr_6 [i_6]) : 4032))) ? (min((arr_21 [i_6]), (arr_20 [i_6]))) : 2147483647)), ((16081652171473245282 ? 2365091902236306334 : -258167906))));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_22 += (((-32011 ? 1 : 1)));
            arr_27 [10] [i_7] [0] |= min(((var_18 ? (arr_7 [i_7] [2] [i_6] [i_6]) : var_10)), 87);
            arr_28 [i_7] [i_7] [0] = (min(((!(arr_0 [1]))), (((arr_5 [i_6] [i_6]) || (min((arr_22 [i_6]), 1))))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_23 *= 2097148;
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_24 = (min(var_24, 16081652171473245282));
                            var_25 = (var_2 & (+-2365091902236306334));
                            arr_42 [i_10] [i_8] [10] [1] [9] [i_10] [i_11 - 2] = (arr_24 [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_26 = var_15;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_27 = (max((((!((min(5430941735521752574, 2743227480)))))), (var_14 | 2147483647)));
                                var_28 = -1;
                            }
                        }
                    }
                }
                arr_56 [i_13] = 1;
            }
        }
    }
    #pragma endscop
}
