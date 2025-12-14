/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((13 ? var_7 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_20 ^= (arr_12 [4] [i_1] [i_1] [8] [i_1] [i_1]);
                                var_21 ^= ((min((arr_8 [i_4] [0] [i_1] [i_4]), var_12)));
                                var_22 = (max(var_22, (((((~((~(arr_1 [i_0] [8])))))) ? ((~(((arr_10 [i_3] [i_3] [i_2] [i_1] [0] [i_3]) ? var_11 : (arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4]))))) : var_5))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_2] = var_8;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_23 -= (min(((max((arr_9 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6] [i_1]), (arr_9 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6] [i_1])))), (arr_6 [i_0] [i_0] [1] [1])));
                                arr_19 [i_0] [i_0] [i_2] [1] [i_5] [i_6] = ((2020412523 ? ((-(56 % 65))) : -25751));
                                arr_20 [i_2] [i_0] [1] [i_0] [i_0] = ((-(max(((((arr_16 [5] [i_1] [i_2] [i_5] [0] [9] [4]) ? (arr_4 [i_0] [i_1]) : 25751))), (max(var_18, -9122))))));
                            }
                        }
                    }
                    var_24 += ((var_13 || (!16)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_25 = var_13;
                                var_26 = 10;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_27 = var_7;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_35 [i_0] [i_10] [3] [i_10] [i_10] = (((((((((arr_25 [6] [i_1]) ^ (arr_16 [i_0] [i_0] [i_0] [i_10] [i_0] [i_11] [i_1])))) ? (arr_33 [i_11] [i_10] [i_9] [i_10] [i_9] [i_0] [i_0]) : (max((arr_15 [i_0] [i_1] [i_10] [i_0]), 3536954403))))) ? (((93 > -9113) ? ((~(arr_34 [i_0] [i_0] [i_0] [i_0] [5]))) : (((arr_21 [i_0] [i_0] [i_0] [9]) ? 9127 : 252)))) : (25754 && 18446744073709551615)));
                                arr_36 [i_0] [i_11] [i_11] [i_11] [i_11] = (max((arr_8 [i_0] [i_0] [i_0] [i_0]), (~1996234047413431077)));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                {
                    var_28 = (max((((~var_17) ? (arr_0 [i_0]) : (((arr_21 [i_0] [i_0] [2] [i_0]) ? (arr_3 [i_0]) : var_10)))), ((-((var_14 ? var_12 : (arr_30 [i_1])))))));
                    arr_40 [i_0] = max(((~(arr_5 [i_12] [i_1] [i_0]))), ((~(arr_34 [i_0] [i_0] [i_1] [1] [i_12]))));
                    arr_41 [i_0] = ((-((~(arr_0 [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_29 = ((+((((arr_3 [i_14]) || (((-(arr_33 [i_0] [1] [1] [4] [8] [4] [i_14])))))))));
                            arr_47 [i_0] [1] [i_14] [i_0] [i_1] [i_0] = (min((((~(arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_13])))), ((~(arr_8 [i_0] [i_0] [i_0] [i_14])))));
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(((((min(-25751, -110))) ? (var_8 && var_16) : var_3)), var_2));
    #pragma endscop
}
