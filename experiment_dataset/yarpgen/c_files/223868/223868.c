/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_6, ((((var_7 <= (arr_4 [i_1] [i_2] [i_1] [i_4]))) ? -4550891642112092592 : var_9))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                                arr_13 [i_1] [i_1] = ((((((arr_6 [i_4 + 4] [i_4] [i_4 + 1] [i_2] [i_2] [i_2 + 1]) ? (min((arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]), -4550891642112092592)) : var_5))) && (arr_3 [i_0])));
                                arr_14 [i_0] [i_2] [i_0] [i_0] = var_5;
                                var_16 -= -4550891642112092606;
                            }
                        }
                    }
                }
                var_17 = (!((min(((var_3 ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : var_4)), (arr_3 [i_0])))));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_6] [i_5 + 3] [i_1] [i_0] &= ((~(arr_20 [i_0] [i_0] [i_0] [i_6] [i_7])));
                                var_18 = (max(var_18, var_12));
                                var_19 = (((((((arr_20 [20] [i_1] [i_7] [i_6] [i_7]) == (arr_2 [i_1] [15] [12]))))) + -3709498200833651720));
                                var_20 = (arr_1 [i_1] [i_1]);
                            }
                        }
                    }
                    var_21 &= (arr_2 [i_0] [i_0] [i_0]);
                    arr_24 [i_0] [i_0] [i_5] = ((~(arr_17 [i_0])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_5] [i_1] [i_9] [18] [i_1] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_22 = var_0;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, (18014398509481984 / 3)));
                    var_24 |= (((((!(arr_26 [i_0] [i_1] [i_1])))) & (+-49)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_25 = (max((arr_28 [15] [i_1]), (max((((arr_9 [i_0] [i_1] [i_10] [i_0]) ? (arr_2 [i_11] [i_10 + 2] [11]) : var_12)), (arr_21 [i_0] [i_10 + 1] [i_10 + 3] [i_0])))));
                                arr_40 [i_10 + 3] = ((((((arr_3 [i_10 - 1]) ? (arr_3 [i_10 + 3]) : 18014398509481977))) ? ((((!(arr_7 [i_0] [i_1] [i_0] [i_11]))))) : ((5 ? 5423 : 2242116125))));
                                var_26 = (max(var_26, ((3709498200833651723 ? ((max((arr_21 [i_0] [i_0] [i_0] [i_12]), ((1370112599 ? (arr_32 [i_12] [i_11] [i_0] [i_0]) : var_1))))) : ((max(-4550891642112092582, -24399)))))));
                            }
                        }
                    }
                    var_27 = (min(var_27, 0));
                    var_28 += ((((((arr_33 [i_0] [i_1] [i_10 + 1] [i_10]) || (430003713 <= var_14)))) ^ 1));
                }
                arr_41 [i_0] = 18014398509481990;
                var_29 += ((13753 ? -2139167297258247143 : 10));
            }
        }
    }
    var_30 = max(((max(var_11, var_8))), var_5);
    var_31 = 55;
    var_32 -= ((((((1863578209133964367 || 69) % var_5))) && (~var_9)));
    #pragma endscop
}
