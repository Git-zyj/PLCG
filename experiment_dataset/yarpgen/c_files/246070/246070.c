/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] &= arr_4 [i_0] [i_1] [i_1];
                    arr_8 [i_0] [i_1] [i_0] = ((!((((arr_0 [i_1 + 2]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))))));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = (max((min(((((arr_4 [i_0] [i_1] [i_3]) && (arr_11 [i_0])))), (min((arr_2 [i_0]), (arr_4 [i_0] [i_3] [i_3]))))), (((!(arr_6 [i_0] [i_0]))))));
                    var_15 = ((min((arr_11 [i_3 + 1]), (arr_0 [i_1 + 2]))) ? (arr_0 [i_1 - 1]) : -20);
                    arr_13 [i_0] [i_0] [i_0] = (min((((((arr_10 [i_0] [i_0]) & (arr_9 [i_0] [i_1] [i_1]))) + (1 - -23))), (arr_0 [i_0])));
                    var_16 = (arr_11 [i_1]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_0] = (arr_2 [i_0]);
                    var_17 ^= (arr_11 [i_4]);
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_21 [i_0] = ((1189999113 - -35) > (((!((!(arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                    var_18 = (max(var_18, (!-1189999103)));
                    arr_22 [i_0] [i_1] [i_1] [i_1] = ((--1) ? ((min(249131795, 1))) : (max(48, 4023029414)));
                    var_19 = (min(var_19, (((arr_9 [i_5] [i_1] [i_5]) / (1 | 2785849720)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_2 [i_6])));
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_0] = (arr_17 [i_0] [i_0] [i_8]);
                            }
                        }
                    }
                    var_21 = (arr_4 [i_0] [i_1 + 1] [i_1 + 1]);
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_22 *= max((((((max((arr_28 [i_0] [i_1] [i_9] [i_9] [i_1] [i_1]), (arr_25 [i_0] [i_0] [i_0] [i_9] [i_0]))))) % (41129625 - -16))), (44 < 125));
                    var_23 = (arr_2 [i_0]);
                    var_24 = (+(((arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1]) + (arr_15 [i_9] [i_1] [i_0]))));
                    var_25 = ((-(min((1711208307 << 0), (arr_24 [i_0] [i_0])))));
                }
                var_26 = ((max(67425696, (arr_23 [i_1 + 2] [i_1 + 2] [i_0]))));
                var_27 = (1 ? 9 : 1);
                arr_32 [i_0] [i_0] [i_1] = (3807720174 - 1);
            }
        }
    }
    #pragma endscop
}
