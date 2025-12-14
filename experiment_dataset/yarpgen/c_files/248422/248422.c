/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((1 ? (var_4 & var_0) : var_2))) ? ((var_9 ? ((1 ? var_0 : var_8)) : var_9)) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_1] = (min((((-(((arr_4 [i_1] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : 2190308932))))), (max((((arr_5 [i_0] [i_0] [i_0]) ? 1 : (arr_4 [i_1] [i_1]))), (arr_2 [i_1])))));
                    arr_7 [i_2 - 1] = 54409;
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    arr_10 [i_0] = (arr_0 [i_1] [i_3]);
                    arr_11 [i_3 + 1] [i_1] = (max(1965380231, 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_0] [i_5] = 1;
                                arr_18 [i_5 - 1] [i_0] [i_0] [i_1] [i_0] = (arr_12 [i_1] [i_3] [i_1]);
                                arr_19 [i_5 + 2] [i_4] [i_0] [i_1] [i_1] [i_0] &= var_2;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_1] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                    arr_25 [i_0] [i_0] [i_0] = (((arr_1 [i_0] [i_1]) ? (((arr_23 [i_0] [i_1] [i_6] [i_6]) ? var_0 : (arr_16 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0]))) : (((-(arr_14 [i_0] [i_6] [i_0] [i_6]))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] = (((arr_9 [i_7] [i_7] [i_0] [i_0]) ? 1026252795 : 0));
                    arr_30 [i_1] [i_7] = (arr_21 [i_7] [i_1]);
                    arr_31 [i_7] [i_1] [i_0] [i_0] = arr_12 [i_7] [i_1] [i_0];
                    arr_32 [i_7] [i_7] [i_7] = (arr_21 [i_7] [i_1]);
                    arr_33 [i_0] [i_0] [i_0] [i_0] = 0;
                }

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_36 [i_0] [i_1] [i_8] = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                    arr_37 [i_0] [i_0] [i_0] [i_0] = var_4;
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_43 [i_9] [i_9] [i_1] [i_9] = (min(var_7, (((((arr_3 [i_9] [i_1] [i_0]) + (arr_14 [i_0] [i_1] [i_9] [i_9]))) / (arr_34 [i_10 + 2] [i_9] [i_0])))));
                            arr_44 [i_0] [i_0] [i_1] [i_9] [i_10 - 1] = (max(65524, 1));
                            arr_45 [i_0] [i_0] [i_9] [i_0] [i_0] = (~2147483647);

                            for (int i_11 = 0; i_11 < 19;i_11 += 1)
                            {
                                arr_50 [i_0] [i_0] [i_1] [i_9] [i_9] [i_1] [i_11] = (~var_3);
                                arr_51 [i_0] [i_9] [i_0] [i_0] [i_0] = ((((((arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]) - 2074988078052515791))) ? (((-22 + 2147483647) << (var_8 - 1))) : ((min((arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]), (arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 + 2]))))));
                            }
                            for (int i_12 = 0; i_12 < 19;i_12 += 1)
                            {
                                arr_54 [i_12] [i_9] [i_9] [i_9] [i_0] = min(2329587064, -6351840299198345722);
                                arr_55 [i_9] [i_9] = (min(1, ((((max(48248, 2074988078052515810))) ? ((1965380234 ? 3307866146 : -18)) : (8753285106800110493 + -2074988078052515802)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
