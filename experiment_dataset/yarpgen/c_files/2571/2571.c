/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-1813 & 1);
        arr_3 [i_0] = ((+((var_10 ? (arr_0 [i_0]) : 6807))));
        arr_4 [i_0] = ((var_5 ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_16 = (arr_0 [i_0]);
        arr_5 [i_0] [4] = ((14864434871606040853 ? (58734 || -48) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_1] [i_1] = (arr_6 [i_1]);
                        var_17 = (max(var_17, ((min(((((~var_9) <= var_3))), var_6)))));
                    }
                }
            }
            var_18 = (max(var_18, (((max((arr_6 [i_2]), var_8))))));
            var_19 |= (((((-3805 ? (((arr_12 [i_1] [i_2] [i_1] [i_2]) ? var_11 : (-127 - 1))) : var_12))) ? var_1 : ((var_15 * (105 / -119)))));
            var_20 = 119;
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((arr_8 [i_1] [8] [i_6]) & var_11)))));
                        var_22 = (max(var_22, ((max((-127 - 1), -1245363754)))));
                    }
                }
            }

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_23 |= ((((((arr_25 [i_5] [i_5]) / var_11))) ? (((max(-1552360586, var_15)) * var_9)) : -118));
                            var_24 = (min((max((arr_24 [i_10] [i_1] [i_1] [i_5]), (arr_15 [i_10] [i_1] [5] [i_1] [5]))), (arr_24 [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                }
                var_25 = (max(var_7, (max(-1, 8785))));
                var_26 = (max(var_13, ((40 ? 32764 : (arr_15 [i_1] [i_1] [i_1] [i_5] [i_8])))));
                arr_31 [i_1] = 18446744073709551596;
                arr_32 [10] [i_1] [i_1] [2] = var_7;
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_27 = (max(var_27, (arr_18 [i_11])));
                        arr_41 [i_1] [i_1] [i_1] = (((-1444551796 + 2147483647) << (((1 ^ 476015739) - 476015738))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                {
                    arr_49 [i_1] = arr_47 [i_1] [i_1] [i_1];
                    arr_50 [i_1] [i_1] [i_1] = 1124800395214848;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        arr_53 [i_16] = (((arr_30 [i_16] [i_16] [1] [i_16] [i_16]) ? (arr_30 [i_16] [i_16] [4] [i_16] [4]) : (arr_30 [9] [9] [i_16] [i_16] [i_16])));
        var_28 = (min(var_28, (12130366266633595758 > 12244)));
    }
    var_29 |= (-((17967967254917332060 ? ((min(var_12, var_5))) : var_12)));
    var_30 |= (~var_9);
    #pragma endscop
}
