/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 -= (((arr_3 [i_0]) % (arr_3 [17])));
                var_16 &= (arr_5 [i_1] [i_0] [i_0]);
                var_17 |= ((((!(arr_5 [i_0] [i_1] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (((4484 ? 2147483647 : 18446744073709551615)));
                                var_19 -= ((61440 == (arr_8 [i_0] [i_3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 ^= (((arr_1 [i_5] [i_5]) != (arr_15 [i_5] [i_2] [i_1] [i_0])));
                                arr_21 [i_0] [i_2] [i_2] = (2147483632 / -2147483633);
                                arr_22 [i_2] [i_5] [i_2] [i_2] [i_0] [i_2] = (arr_13 [i_6] [i_5] [i_2] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_23 [i_2] [i_1] [2] [i_2] = arr_6 [i_0] [i_0] [i_0] [i_0];
                    arr_24 [12] [i_2] [i_2] = (arr_13 [i_0] [i_0] [2] [14] [0]);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_21 &= (max((((arr_10 [i_0]) / (arr_10 [i_0]))), 1));
                    var_22 ^= ((((!((((arr_8 [i_0] [i_7]) ? (arr_8 [i_0] [i_7]) : (arr_27 [i_0])))))) ? (((!1) ? (arr_5 [i_7] [i_1] [i_0]) : 4294967294)) : (arr_12 [8] [i_1] [i_1] [1] [1] [i_1])));
                    arr_28 [i_7] [i_1] [i_7] [i_7] = var_8;
                    arr_29 [i_7] [i_1] [5] [i_1] = (+(max((arr_7 [14] [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1] [i_7]))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    var_23 -= var_9;
                    var_24 -= var_6;
                }
            }
        }
    }
    var_25 ^= var_3;
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                var_26 ^= (max((arr_33 [i_9 + 1]), (((arr_34 [i_9 - 2]) & (arr_34 [i_9 - 1])))));
                arr_36 [i_9] [i_10] = ((!(arr_32 [i_9])));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_42 [i_10] [i_10] [i_10] [i_12] &= ((-((((-(-127 - 1)))))));
                            var_27 -= (~var_6);
                            var_28 -= (((min(502018869, (arr_40 [i_9] [i_10] [i_10] [i_11 + 2] [14] [i_12]))) * (((arr_35 [i_11 + 2]) ? (arr_40 [i_9 + 1] [13] [i_11] [i_11 - 1] [i_11] [i_12]) : var_13))));
                        }
                    }
                }
                arr_43 [i_10] = ((((((1 ? 41 : var_1)))) > ((max((arr_40 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]), (arr_40 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]))))));
            }
        }
    }
    var_29 ^= var_0;
    #pragma endscop
}
