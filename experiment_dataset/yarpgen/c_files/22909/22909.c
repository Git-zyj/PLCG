/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~((min(-6528, 1))))) & ((((1 && 1) || (min(1, 1))))));
    var_13 = ((((var_10 && (var_7 && var_0))) || -16226));
    var_14 = (((10413 ^ var_11) ^ (min(1, var_1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_15 = max(((((max((arr_8 [i_0] [i_0]), var_10))) + (arr_1 [i_0]))), 1);
                    var_16 = (arr_0 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 ^= max((arr_12 [i_3] [14]), (-1150847335 < 1));
                                var_18 = ((~(arr_9 [i_0 + 1] [i_2] [1] [i_4 - 2])));
                            }
                        }
                    }
                    var_19 += arr_7 [i_0 - 2] [i_1] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = ((~(((max((arr_2 [i_0]), var_8))))));
                                var_21 = 2147483647;
                                var_22 = ((((min(1562485257, (arr_9 [i_5] [i_5] [i_5] [i_5])))) ? (((1 + 1) + (((arr_3 [i_0]) + -7814681754806063822)))) : ((((((arr_15 [i_0] [i_2] [i_5] [i_6]) - (arr_17 [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3]))) + ((-(arr_2 [i_5]))))))));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_23 |= -27;
                        var_24 -= (arr_8 [i_8 + 2] [i_7]);
                        var_25 = (min(var_25, (((~(arr_19 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_26 *= (((((((arr_16 [i_7] [i_7] [i_7] [i_9 + 1] [8] [i_9 - 1] [8]) + 2147483647)) << (arr_6 [i_9] [i_9 - 3] [i_9 - 1] [i_9 - 3]))) & 1));
                        arr_29 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_9 + 1] [i_9 + 1] = -55122;
                        arr_30 [0] [i_9 + 1] [i_1 - 1] [11] [i_0] [1] = (((!(10413 > 1))) && ((min((!1990535107323545381), (arr_2 [i_1])))));
                        var_27 *= (-(((min(936, 55114)))));
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_34 [i_10] [i_0] [i_10] [i_10 + 1] = (((arr_2 [i_7]) || var_3));
                        var_28 = ((55130 + (((1 < (arr_10 [i_0] [i_0] [i_7] [i_10]))))));
                    }
                    var_29 = (min(var_29, 20123));
                    arr_35 [i_0 - 2] [i_0] [i_0 - 3] = ((!((max(5638494856648215652, (arr_13 [i_1 - 1] [i_0] [i_7] [i_7] [i_7]))))));
                }
                for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_40 [i_0] = ((1 ^ (((!(arr_4 [i_0 - 1] [i_0]))))));

                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_30 = ((!((max(-4050, (arr_4 [i_0 - 2] [i_0]))))));
                        var_31 = (~26126);
                        var_32 += (arr_23 [i_0] [i_0 - 1] [i_0 + 1]);
                    }
                }
                for (int i_13 = 4; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_33 = (max(var_33, (((55138 < ((((arr_19 [i_0 - 3] [i_1 - 1] [i_13 - 2] [i_13]) && (arr_44 [i_13 - 1] [i_13 + 3] [i_13] [i_13 + 3])))))))));
                    var_34 = (arr_22 [i_0 + 1] [i_1 - 1] [i_13 + 2]);
                    arr_45 [i_0] [i_0] [i_1 - 1] [i_13 - 2] = (((((arr_10 [i_1] [i_0] [i_1] [i_13]) < var_3)) ? ((max(((var_0 ? (arr_22 [1] [10] [1]) : var_10)), (1 * 1)))) : 55139));
                }
                var_35 += 1;
            }
        }
    }
    #pragma endscop
}
