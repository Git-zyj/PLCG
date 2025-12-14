/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_2 + 1] = ((-(((arr_6 [i_0 + 1] [i_0 - 1] [i_1 - 1] [i_1]) ? 57754 : var_10))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] = var_12;
                        var_20 = (max((((arr_10 [i_3] [i_2] [i_1 + 1] [i_0]) | 3152653002)), 247));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = (max((arr_10 [i_4] [i_3] [i_2] [i_0 - 1]), ((((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [8] [i_2]) : (arr_2 [i_1])))) ? 8 : (min((arr_6 [i_1] [i_2] [i_3] [i_1]), 26))))));
                            var_21 = (min(var_21, (2047 && 25)));
                            var_22 ^= (arr_3 [i_4]);
                            var_23 |= (min((((((65308 << (107 - 100)))) ? 1 : (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))), ((79 ? (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_0 + 1] [i_0]) : (arr_9 [i_1 - 2] [i_1] [i_2] [i_0 + 1] [i_4])))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = (min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = 145;

                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            var_25 = 1;
                            var_26 ^= (((var_0 <= 137438953344) << (!var_10)));
                            arr_23 [i_0 + 1] [i_0 - 1] [10] [i_1] = (i_1 % 2 == 0) ? ((((arr_3 [i_1]) >> (((arr_3 [i_1]) - 736344130))))) : ((((arr_3 [i_1]) >> (((((arr_3 [i_1]) - 736344130)) - 1825658633)))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_27 ^= arr_2 [i_0];
                            var_28 ^= ((((var_15 ? var_2 : var_2)) - 61731));
                            var_29 = (min(var_29, ((((arr_8 [i_1 - 1] [i_7] [i_7] [i_1 - 1] [i_1] [i_1]) - (arr_18 [i_2 + 1]))))));
                            var_30 = (max(var_30, var_17));
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_0] [i_8] [i_0] [i_5] [4] &= (4095 && -12343);
                            arr_30 [i_2] [i_1] [i_2] [i_2] [i_8] [i_2] = (((arr_8 [i_0] [i_1] [i_2] [i_5] [i_8] [i_5]) ? (((arr_22 [i_1] [7] [i_2] [i_2] [i_1]) * (arr_2 [i_0]))) : var_15));
                            var_31 = var_12;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_32 ^= ((41 ? 44 : (var_0 && -103)));
                            var_33 = var_16;
                            var_34 = ((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : 18))) ? 5522 : (arr_17 [i_1 - 1] [i_2] [i_1] [i_2] [i_2 + 1] [i_9])));
                            arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [i_1] = (arr_28 [i_2 + 1] [i_1] [i_2 + 1] [i_1 + 1] [i_9] [i_0 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_35 = ((-(arr_20 [i_0] [i_0] [i_1] [i_0] [i_2 + 1])));
                            var_36 += ((-var_11 ? (-5304672443430012504 | 1) : (!var_16)));
                            var_37 = 252;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_46 [8] [i_1] [i_0] = (min((min(3211714549887225275, 1)), 105));
                                arr_47 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [5] [i_0] = ((+((1 ? (arr_4 [i_1] [i_1]) : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = ((var_18 + (((~(-1 / var_3))))));
    var_39 &= (((107 * 127) ? var_2 : var_6));
    #pragma endscop
}
