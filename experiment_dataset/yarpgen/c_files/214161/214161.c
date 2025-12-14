/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_0 ? (var_0 + 1) : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (arr_0 [i_2]);
                                var_13 &= (((~(arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_4]))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_3] [i_2] = (arr_8 [i_4] [i_1] [i_4] [i_3]);
                                var_14 = (arr_12 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_15 = ((((arr_8 [i_0] [i_0] [i_5] [i_6]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_17 [i_5] [i_0]))));
                            var_16 = (max(((~(arr_16 [i_0] [i_0]))), (arr_3 [i_1] [i_1])));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_6] [i_0] [i_7] [i_0] &= (((arr_22 [i_0] [i_1] [i_5]) ? (((11364594923823930955 ? 538778932 : 91))) : (arr_17 [i_6] [i_7])));
                                arr_24 [i_7] [i_7] [i_7] [2] [i_1] [i_1] [i_0] = (arr_11 [i_0] [i_0] [i_5] [i_7]);
                            }
                            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                arr_28 [11] [i_5] [i_1] = (max((min((arr_7 [i_1] [i_0]), (arr_11 [i_1] [i_5] [i_1] [i_5]))), ((min(52627, 13)))));
                                arr_29 [i_0] [i_0] [11] [i_0] [i_0] = -1507;
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                            {
                                var_17 ^= ((((((arr_18 [i_0] [i_1] [i_0] [11] [i_9]) ? 216 : 1))) ? (arr_16 [i_1] [i_5]) : (((876305353996150339 && (arr_15 [i_0] [i_1] [i_5] [i_6]))))));
                                var_18 = (min(var_18, 32759));
                            }
                            for (int i_10 = 0; i_10 < 12;i_10 += 1)
                            {
                                arr_37 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [i_10] = ((!(1 && 57)));
                                arr_38 [i_0] [i_1] [i_5] [i_6] [i_5] [i_10] [i_10] = ((-(((!(arr_1 [i_6]))))));
                                var_19 = (min(var_19, (arr_9 [i_0] [i_0] [i_0] [i_10])));
                            }
                        }
                    }
                }

                for (int i_11 = 4; i_11 < 9;i_11 += 1)
                {
                    arr_41 [i_1] [i_11] = (arr_36 [i_0] [i_1] [i_1] [i_11] [i_11] [i_1]);
                    var_20 = 1;
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12 - 2] [i_13] [i_12 - 2] = (arr_6 [i_0] [i_0] [i_0] [i_13]);
                            var_21 &= (arr_16 [i_1] [i_12]);
                            var_22 ^= 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
