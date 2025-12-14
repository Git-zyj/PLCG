/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0] = (arr_1 [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = var_7;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((!(arr_7 [i_0] [i_2 + 2] [i_2 + 1] [i_3 + 1]))) ? (arr_1 [i_4]) : ((max(var_10, var_9)))));
                                arr_13 [i_0] = ((((min((arr_4 [i_1] [i_2 - 1] [i_3 + 2]), (arr_4 [i_1] [i_2 - 1] [i_3 - 1])))) != ((((arr_4 [i_0] [i_2 - 1] [i_3 + 1]) < (arr_4 [i_0] [i_2 + 2] [i_3 + 2]))))));
                                var_13 = (((!((((arr_10 [i_0] [i_1] [i_2 + 1] [0] [i_4]) ? (arr_0 [i_0]) : var_6))))) ? (((((arr_2 [2] [i_4]) + 2147483647)) << (9223372036854775808 >= -2))) : ((min((arr_11 [i_3 + 2]), (arr_8 [i_0] [i_2 + 2] [i_0] [i_3] [i_3 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [i_2] [i_1] [i_0] = ((-((-1 ? 21 : (1937422913 | 10715877063613909910)))));
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] &= ((((!(arr_11 [i_0])))));
                                var_14 = (max(var_14, ((((~(((var_11 >= (arr_8 [i_6] [i_5] [i_5] [i_1] [i_0]))))))))));
                                arr_22 [i_0] [i_2 + 1] = ((((min((arr_10 [i_1] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1]), (arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1])))) ? (arr_10 [i_1] [i_2 + 1] [i_2] [i_2 + 2] [i_2 - 1]) : (((arr_10 [i_1] [i_2 + 2] [6] [i_2 + 1] [i_2 + 2]) & (arr_10 [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 - 1])))));
                            }
                        }
                    }
                    var_15 -= (min((((!(~9223372036854775808)))), ((-(arr_16 [i_0] [22] [i_2] [i_0] [i_0])))));
                    var_16 = (max(var_16, -var_2));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_17 -= ((!(var_2 != var_2)));
                    arr_25 [i_0] [i_0] = (((arr_7 [i_7] [i_7] [i_1] [i_0]) * (arr_8 [i_7] [i_7] [i_0] [i_1] [i_0])));
                    var_18 = (((!var_1) ^ (((((~(arr_4 [24] [i_1] [i_7]))) != (101 | 155))))));
                    arr_26 [i_0] = ((((~(arr_16 [i_0] [i_0] [i_1] [i_7] [i_7]))) == (arr_16 [i_7] [i_0] [i_1] [i_0] [i_0])));
                    var_19 ^= var_2;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_20 = ((~(arr_18 [i_0] [i_1] [i_8] [i_9])));
                                var_21 = (min(var_21, (-73 > -69)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_41 [i_0] [i_0] [i_1] [i_0] [i_11] [i_12 - 1] = (((var_9 == var_5) ? (arr_8 [i_12 - 4] [i_12 + 1] [i_0] [i_1] [17]) : (arr_5 [i_12 - 2])));
                                arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = (!6149);
                                arr_43 [16] [i_0] [i_8] [i_11] [i_12] = 10715877063613909910;
                            }
                        }
                    }
                    var_22 = ((-((var_11 - (arr_15 [i_8] [i_1] [i_0] [i_0])))));
                }
                arr_44 [i_0] = (((((((arr_17 [i_1] [9] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0])))) ? (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]) : ((197 << (9223372036854775808 - 9223372036854775803))))));
                var_23 = var_7;
            }
        }
    }
    var_24 = (~var_8);
    var_25 = ((!((((!-12365) ? var_1 : 95)))));
    var_26 = var_5;
    var_27 = min((!17), var_5);
    #pragma endscop
}
