/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = var_4;
                arr_6 [i_1 - 1] [i_0] [i_0] = ((-(((!(arr_0 [i_1 - 1]))))));
                var_13 += ((!(arr_1 [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 = (arr_12 [i_3] [i_2]);

                /* vectorizable */
                for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_2] [i_2] [i_2] [i_4] = ((224 > ((108 ? 195 : -84))));
                    var_15 = (max(var_15, var_11));
                    arr_18 [i_4] = ((98 ? (((arr_16 [i_4] [11] [i_2] [i_2]) ? var_10 : (arr_8 [i_2] [i_2]))) : (((var_11 + 2147483647) >> (((arr_12 [i_2] [i_3]) - 5418))))));
                    arr_19 [2] [i_3] [12] [i_3] = (((arr_11 [i_3] [i_3] [i_4 + 3]) ? (arr_11 [i_2] [i_3] [i_4]) : var_10));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_24 [i_2] [i_2] [i_5] [i_3] = ((-((-(arr_10 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_29 [4] [i_7] [i_7] [i_7] [i_7 - 1] = (((arr_2 [i_2]) % (arr_8 [i_2] [i_3])));
                                arr_30 [i_7] [i_6] [i_5 + 2] [i_3] [i_2] = 9;
                            }
                        }
                    }
                    var_16 = (arr_5 [i_2] [i_3] [i_5]);
                    var_17 = ((-(arr_1 [i_3])));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_34 [i_2] [i_3] [i_8] = (arr_26 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 2]);
                    var_18 = (min(var_18, (((arr_33 [i_8 - 1]) ? (arr_33 [i_8 - 1]) : (arr_23 [i_2] [i_8 + 1] [i_8] [i_2])))));
                }
                var_19 += (max((arr_11 [i_2] [i_2] [i_3]), (((!(arr_7 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
