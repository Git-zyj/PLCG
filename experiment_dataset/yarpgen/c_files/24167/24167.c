/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2147483647;
    var_19 = (min(1, (min(((-20 ? 1 : 65535)), 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (arr_4 [i_1 - 3] [i_0]);
            arr_7 [i_0] [i_0] &= ((((!(arr_2 [i_0] [i_1]))) ? (12546948569708861186 | 157) : ((((arr_5 [i_0] [i_0] [i_0]) / 1)))));
        }
        var_20 = (178 <= -23577);
        var_21 = ((!((((arr_0 [i_0]) ? var_13 : 108)))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_22 = (((arr_13 [i_4 - 1]) > (arr_17 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_2 - 1])));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((((((arr_10 [i_0] [i_0] [i_0]) ^ (arr_14 [i_0] [i_2] [i_3] [i_5])))) ? (arr_4 [i_2 - 1] [i_2 - 1]) : (~var_9)));
                            arr_19 [i_2] [2] = ((arr_17 [i_4 - 1] [i_4 - 1] [i_3] [i_4 - 2] [i_4 - 1] [i_2 - 1]) ? (arr_17 [i_0] [i_2] [i_0] [i_0] [i_4 - 1] [i_2 - 1]) : (arr_17 [i_0] [9] [i_0] [9] [i_4 - 1] [i_2 - 1]));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_23 -= ((var_9 ? var_9 : var_5));
                            var_24 = arr_15 [i_2];
                        }
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            var_25 = ((arr_20 [i_0]) < (arr_20 [i_2]));
                            arr_24 [i_0] [1] [i_3] [0] [i_2] [i_7] [i_0] = (arr_12 [i_0]);
                            arr_25 [i_7] [i_3] [i_2] [i_2] [i_7 - 1] = ((65534 ? (arr_23 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [0]) : (arr_23 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4 - 2] [i_7 - 3])));
                            var_26 = ((((((!(arr_0 [i_4]))))) <= (arr_9 [i_2] [i_2] [i_3])));
                            arr_26 [i_0] [i_0] [i_7 + 1] [i_2] = ((!(arr_17 [i_0] [i_2] [i_3] [i_4 - 2] [i_2] [i_3])));
                        }

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_27 = 1;
                            arr_29 [i_2] [i_8] [i_3] [8] [i_2] = (arr_17 [i_0] [i_2] [i_2] [i_3] [i_4] [i_8]);
                            arr_30 [i_0] [i_2 - 1] [i_3] [i_4 - 1] [i_3] &= (arr_23 [i_2] [i_4 + 1] [i_8] [i_8] [i_8] [i_8] [i_4 + 1]);
                        }
                        var_28 = (arr_16 [i_0] [i_2] [i_3] [i_4 - 1] [i_2 - 1]);
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_35 [i_9] = (((1 + -2028898379) ? ((((((var_14 ? var_3 : (arr_31 [i_9])))) ? (arr_31 [i_9]) : (0 | 255)))) : (min((arr_34 [i_9]), (arr_34 [i_9])))));
        var_29 = (max(351269493, (max(2147483647, 2418369344))));
        arr_36 [i_9] = (((((arr_31 [i_9]) || (arr_33 [i_9]))) ? ((min((arr_31 [i_9]), (arr_31 [i_9])))) : (min((arr_31 [i_9]), (arr_33 [i_9])))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_40 [i_10] [i_10] = ((max((arr_38 [i_10] [i_10]), ((-(arr_32 [i_10]))))));
        var_30 = (((((~(arr_38 [i_10] [i_10])))) ? (arr_34 [i_10]) : (((max((arr_38 [i_10] [i_10]), (arr_38 [i_10] [i_10])))))));
        arr_41 [i_10] = ((!((((arr_32 [i_10]) ? (arr_37 [i_10]) : (!var_1))))));
    }

    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_45 [i_11] = 0;
        var_31 = (min(((min((arr_17 [i_11] [i_11] [i_11] [i_11] [0] [i_11]), ((((arr_10 [8] [i_11] [i_11]) == 0)))))), (((((arr_34 [i_11]) + var_12)) + (arr_39 [i_11] [i_11])))));
    }
    #pragma endscop
}
