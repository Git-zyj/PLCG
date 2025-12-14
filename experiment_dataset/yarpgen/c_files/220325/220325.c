/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_3));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = -var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_17 = (~6037);
                    arr_9 [i_0] [i_1] [i_1] = arr_0 [i_0] [i_2];
                    var_18 = (min(var_18, ((((arr_2 [i_2]) && (arr_2 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_0] = (!125);
                    var_19 = (((((((max(-6038, 2147483636))) ^ (((arr_2 [i_0]) & (arr_1 [i_0])))))) ? (8310416489672067474 | -116) : (((~(arr_10 [i_3] [i_3] [i_3] [i_0]))))));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_3] [i_4] [i_3] &= (max((((var_6 <= ((var_13 ? var_11 : var_7))))), (arr_8 [i_1] [i_0])));
                        var_20 = (((((arr_11 [i_4] [i_3] [i_1]) >= (arr_11 [i_0] [i_1] [i_4]))) ? (((arr_11 [i_3] [i_1] [i_0]) ? (arr_11 [i_0] [i_3] [i_4]) : var_10)) : 11471305520451065550));
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_21 = (((~(arr_17 [i_5] [i_5 - 1] [i_5 + 1] [i_5]))));
                        var_22 = ((((max(var_13, (((arr_1 [i_0]) ? var_10 : (arr_18 [i_5] [i_3] [i_0])))))) ? (max((arr_1 [i_5 - 1]), var_7)) : (max((arr_4 [i_5] [i_5 - 1] [i_5 + 1]), (((arr_4 [i_0] [i_1] [i_3]) - var_2))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_23 = ((!((((arr_3 [i_3]) ? ((~(arr_14 [i_1] [i_6]))) : (((arr_4 [i_0] [i_1] [i_6]) ? var_2 : (arr_5 [i_6] [i_1] [i_0]))))))));
                        arr_21 [i_0] [i_6] [i_0] [i_0] [i_0] = -102;
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_24 -= ((((~(arr_22 [i_8] [i_7] [i_0]))) & (((var_6 != (((3526 >= (arr_17 [i_1] [i_8] [i_7] [i_1])))))))));
                                var_25 *= (((arr_2 [i_7]) ? ((-((((arr_2 [i_7]) >= 16132))))) : ((var_12 ? (arr_22 [i_1] [i_7] [i_8]) : (arr_10 [i_9] [i_7] [i_1] [i_0])))));
                                var_26 = ((var_3 ? (((arr_4 [i_1] [i_7] [i_8]) ? -102 : (arr_4 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1] [i_7])));
                                arr_28 [i_0] [i_1] [i_8] [i_8] [i_9] &= (((((var_10 ? var_10 : var_2)) + 2068742402)));
                                var_27 = (min((max((arr_0 [i_7] [i_9]), (arr_1 [i_8]))), (arr_2 [i_0])));
                            }
                        }
                    }
                    var_28 = ((((((arr_14 [i_0] [i_1]) % (arr_14 [i_0] [i_7])))) ? ((((arr_14 [i_0] [i_7]) && var_4))) : ((33 << (((-1645767338996695003 + 1645767338996695034) - 15))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_0] |= 315588211;
                                var_29 = (((((7603 ? 0 : 106))) * ((var_11 / (arr_26 [i_1] [i_1] [i_1] [i_10 + 1] [i_11] [i_0] [i_11 - 3])))));
                                var_30 = (min(var_30, (((+(((arr_22 [i_11] [i_11] [i_11 + 2]) ? (arr_22 [i_11] [i_11] [i_11 - 2]) : (arr_22 [i_11] [i_11] [i_11 + 3]))))))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_31 = ((182 ? var_9 : (((((((arr_31 [i_12]) / var_12))) ? (((!(arr_15 [i_0] [i_12] [i_13])))) : (arr_38 [i_0] [i_1] [i_12] [i_14]))))));
                                arr_44 [i_0] [i_0] [i_1] [i_12] [i_12] [i_13] [i_14] = (((arr_7 [i_14] [i_1] [i_0]) ? ((min(192, (arr_8 [i_0] [i_1])))) : (arr_11 [i_0] [i_12] [i_14])));
                            }
                        }
                    }
                    var_32 = -1067701713;
                }
            }
        }
    }
    var_33 = ((min(var_2, var_2)));
    var_34 = (((var_12 || (1645767338996694997 || 13458357156730475365))) ? (-29986 || var_11) : ((0 ? 118 : 26)));
    #pragma endscop
}
