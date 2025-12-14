/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((max(var_13, var_3)) * 116))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= (((((arr_5 [i_0] [i_0] [i_0]) ? (arr_2 [i_1]) : ((var_9 / (arr_4 [11] [11]))))) ^ (((((min(var_0, (arr_2 [i_0]))) > (arr_4 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                arr_13 [i_2] = (min(var_8, 116));
                            }
                        }
                    }
                }
                var_16 = (arr_4 [11] [i_1]);

                for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, ((((~(arr_10 [i_0] [i_0] [i_5] [i_5 - 2]))) ^ (arr_1 [i_0])))));
                    var_18 -= ((((!((((arr_14 [i_1] [i_1] [i_1] [i_1]) & (arr_7 [i_0] [i_0] [i_5] [i_5])))))) ? (arr_1 [i_5 - 4]) : (arr_7 [i_0] [i_1] [i_5] [5])));
                    arr_17 [i_0] [i_5] = (arr_9 [i_0] [i_0] [i_5] [10]);
                    var_19 = var_7;
                }
                for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_20 = ((-(arr_20 [i_6 - 3] [i_6] [i_6] [i_6 + 3])));
                    var_21 = (arr_4 [i_0] [i_6]);
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_22 = ((min((((127 == (arr_5 [i_0] [i_0] [i_0])))), 116)));
                                arr_27 [19] [i_1] [i_6] [i_7] [i_8] [i_7] [i_6] = (((arr_26 [i_6 - 3]) ? (max((arr_26 [i_6 + 2]), -8667443123150999650)) : (arr_26 [i_6 - 1])));
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_8] = max(((((((arr_14 [i_7] [i_7] [i_6] [i_7]) % (arr_14 [i_8] [i_8] [i_8] [i_8]))) <= (arr_15 [i_8] [i_0] [i_1] [i_0])))), ((var_4 ? (arr_18 [i_6 + 1] [i_6 - 3]) : 127)));
                                arr_29 [i_1] [8] [8] = (((((5 ? (arr_26 [18]) : (arr_23 [i_0] [i_6] [i_7])))) + ((-8667443123150999650 ? (arr_7 [i_0] [i_1] [i_1] [i_7]) : -8667443123150999653))));
                            }
                        }
                    }
                    arr_30 [i_6] [i_6] [i_6] = ((0 ? (((arr_26 [i_1]) * (((!(arr_15 [i_0] [i_1] [10] [15])))))) : (!118)));
                    var_23 = (max(var_23, ((~(arr_0 [i_0])))));
                }
                /* vectorizable */
                for (int i_9 = 4; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (arr_19 [12] [i_9 + 2] [i_9])));
                    arr_33 [i_0] = (arr_23 [i_9] [i_9 - 2] [i_9]);
                    var_25 = (((arr_18 [i_1] [i_1]) / (arr_18 [i_9 - 3] [i_9 + 3])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                arr_39 [i_10] [i_10] [i_11] = (max((((~(-109 % 120)))), var_13));
                var_26 = (max(var_26, ((max(((max(var_2, (arr_8 [i_10])))), ((-116 ? 8667443123150999632 : 96)))))));
            }
        }
    }
    #pragma endscop
}
