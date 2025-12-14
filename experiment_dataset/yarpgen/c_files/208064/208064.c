/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (-(arr_10 [i_0] [i_1 + 1] [i_4 - 1] [1] [i_4] [i_0]));
                                arr_11 [0] [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = var_8;
                                var_14 = (var_1 | var_0);
                                arr_12 [i_3] = (~3);
                            }
                        }
                    }
                    var_15 = ((!(~var_11)));
                }
                for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    var_16 = (max(var_1, ((352473026 ? 18446744073709551612 : 0))));

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_17 = ((~(var_3 > 18446744073709551612)));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_21 [i_7] [i_1] [i_5] [7] [i_7] = (((((max((arr_16 [i_0] [i_0] [1]), var_10))) ? var_10 : (((var_5 ? (arr_0 [i_1]) : -118))))) >= var_1);
                            arr_22 [i_0] [i_1] [6] [2] [i_7] [i_1 - 1] [i_1] &= (!var_1);
                            arr_23 [i_0] [1] [i_6] [i_6] [1] [i_7] = (!var_8);
                            var_18 = (min(((-(arr_2 [i_1 - 2] [i_5] [i_5 + 1]))), var_1));
                            var_19 = 0;
                        }
                        var_20 = (arr_16 [i_1 + 1] [i_1] [i_1]);
                        var_21 |= var_10;
                    }
                    arr_24 [i_5] [3] [i_0] = ((var_8 ? (((((var_0 ? var_10 : var_2))) ? var_4 : ((151 ? 464052013 : 1222933701)))) : 1));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_22 = ((((var_1 ? var_2 : var_6))) ? (arr_5 [i_1 + 1]) : var_6);
                                var_23 = ((var_5 < (!var_5)));
                            }
                        }
                    }
                    arr_32 [i_1] [i_8] = (2 >= 4194303);
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_24 ^= var_6;

                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
                        {
                            var_25 = ((var_11 ? (arr_7 [i_0] [i_1] [i_13] [i_1 - 2]) : var_10));
                            arr_41 [i_13] [i_12] [i_13] = var_6;
                        }
                        for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
                        {
                            var_26 = (arr_9 [i_14 + 1] [i_14] [i_14 + 1] [i_1] [i_1 - 2] [i_1]);
                            var_27 = -var_8;
                            var_28 = (~var_12);
                        }
                        for (int i_15 = 1; i_15 < 9;i_15 += 1) /* same iter space */
                        {
                            var_29 = (((arr_0 [i_0]) / var_11));
                            var_30 *= ((!((((!var_5) ? (max((arr_10 [i_0] [i_1] [i_11] [i_12] [i_12] [i_15]), var_3)) : var_6)))));
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_31 = (~var_4);
                            arr_52 [i_0] [i_0] [6] [i_11] [i_12] [i_16] = var_6;
                        }
                        var_32 |= var_3;
                    }
                    arr_53 [i_0] = (max((arr_6 [i_0] [i_1] [i_1] [i_11]), ((((max(var_8, var_6))) ? ((var_3 / (arr_46 [i_1] [i_0]))) : var_12))));
                }
                var_33 = var_4;
            }
        }
    }
    var_34 = var_11;
    var_35 &= (((((var_7 ? var_5 : -818337932))) ? ((((!(var_4 + var_1))))) : -var_11));
    var_36 = (max(var_36, (((-(max(var_2, var_10)))))));
    #pragma endscop
}
