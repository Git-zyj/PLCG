/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (arr_3 [i_2]);
                            arr_8 [i_0] [i_1 - 1] [i_2] [i_2] = (((arr_3 [i_0]) + (((arr_4 [i_1 + 2] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 + 2]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1] [11])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_0] [i_1] [i_4] [i_6] = (arr_9 [i_1 - 2] [i_1 - 1]);
                                var_16 -= ((((0 / (arr_14 [i_0] [i_0] [i_4] [i_5] [i_1 + 1]))) * (arr_5 [i_0] [i_1 - 1] [i_4])));
                                var_17 = (min(var_17, (((-(min(0, (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]))))))));
                                var_18 = (max(var_18, (arr_15 [i_1] [i_4] [i_4] [i_1] [i_1] [i_0])));
                                var_19 = (arr_6 [i_0] [12] [i_4] [i_6]);
                            }
                        }
                    }
                    var_20 = (((max(var_7, (arr_13 [i_0] [i_1 - 2] [i_1 + 2] [i_1 + 1]))) - ((min((arr_15 [i_0] [i_1 + 2] [1] [i_1 + 2] [i_1] [i_1 + 1]), (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))))));
                    arr_17 [i_0] [i_1] [3] = (var_6 ^ -21831);
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [7] [i_7] [i_7] [i_8] [i_8] = ((!(((~(arr_15 [i_0] [i_1 + 1] [0] [i_7 - 4] [i_7 + 1] [i_4]))))));
                                var_21 += ((max((arr_1 [i_1 - 2] [i_7 + 1]), -2059491260)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_28 [i_0] = (((arr_11 [i_1 - 1] [10] [i_1] [i_1 + 2]) ? (arr_9 [i_1] [i_1 + 1]) : ((13 ? (arr_26 [i_9] [2]) : var_2))));
                    var_22 &= (arr_21 [i_0] [i_1] [6] [i_1] [i_9]);
                    var_23 &= (arr_25 [i_1 + 1] [i_1 + 1]);
                    arr_29 [i_0] [i_1 + 2] [i_9] = ((-(arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                }
                var_24 = (min(var_24, (((~(max(-6908872687161623403, ((min((arr_1 [i_1] [i_1 + 1]), (arr_21 [i_0] [i_0] [i_0] [i_1] [11])))))))))));
                arr_30 [i_1] = (arr_21 [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_25 = var_8;
                arr_37 [i_10] = (((((min((arr_32 [i_11]), (arr_34 [i_10])))) == (arr_33 [i_10]))));
                arr_38 [2] = max((((arr_31 [i_10]) >> (var_5 - 41190))), (max(var_12, 18446744073709551611)));

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_26 += ((((((arr_39 [i_10] [i_10] [i_10] [i_10]) ? (arr_39 [i_11] [i_11] [i_10] [i_10]) : (arr_39 [i_10] [i_11] [i_11] [i_12])))) && ((((arr_34 [i_12]) ? 0 : ((((arr_39 [i_10] [i_12] [i_10] [i_10]) ? (arr_40 [i_10] [i_10]) : (arr_32 [12])))))))));
                    var_27 = 10;
                }
            }
        }
    }
    #pragma endscop
}
