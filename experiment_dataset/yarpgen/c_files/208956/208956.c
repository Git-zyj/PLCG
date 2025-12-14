/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = ((-4 ? (((!var_6) ? (arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 3]) : (arr_4 [i_0] [i_1] [i_1 + 2]))) : (!var_1)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 2] [i_0] = (((arr_3 [i_1] [i_1 + 2] [i_1 - 3]) ? (arr_3 [i_1] [i_1] [i_1 + 2]) : (arr_3 [i_1] [i_1 + 2] [i_1 - 3])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 ^= -57;
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((14357 ? var_1 : -54));
                        var_14 = (max(var_14, (arr_7 [i_3] [i_1 - 3] [i_2])));
                    }
                    arr_12 [i_0] [i_0] [i_1 + 2] [i_0] = var_10;
                    var_15 += ((!(!-125)));
                    var_16 = (min(var_16, (((var_4 >= (arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 3]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    arr_19 [i_6] [i_5] [i_5] [i_4] = ((-5880448177089283674 ? 59 : -5953033153091912632));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_17 = ((arr_15 [i_8] [i_5]) ? (-2024622605466566662 / var_2) : ((((var_10 && (arr_17 [i_5] [i_6 - 1] [i_7 - 2]))))));
                                arr_24 [i_4] [i_4] [i_4 + 1] [i_7] &= (min((-69 > -10370), ((var_6 && (arr_20 [i_4] [i_5] [i_6] [i_8 - 2])))));
                                var_18 = ((-10632 ? -25236 : (min((arr_20 [i_5] [i_5] [i_7] [i_7 - 2]), (arr_20 [i_6] [i_7] [i_7] [i_7 - 1])))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_5] = (((((var_1 ? (!-1104763396769698327) : (arr_17 [i_5] [i_6] [i_5])))) == ((var_3 ? 673603347508728358 : var_4))));
                                arr_26 [i_4 + 1] [i_4 - 2] [i_4] [i_5] = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_32 [i_4] [i_4] [1] [i_5] [i_4 - 2] = var_10;
                                arr_33 [i_5] [i_5] [i_5] [i_6] [i_9] [i_10] [i_5] = max((arr_13 [i_5]), ((((max(18863, var_10))) ? ((var_5 ? (arr_17 [i_5] [i_5] [i_6]) : (arr_27 [i_5] [i_5] [i_10] [i_5]))) : (arr_23 [i_4 - 1] [3] [i_6] [i_9] [i_10] [i_9]))));
                                var_19 = (min(var_19, (max((((((var_0 ? -7439700072048778730 : (arr_18 [i_9] [i_6] [i_4])))) ? (var_11 / 61) : (((13559 ? 79 : 111))))), (((((var_6 ? -122515545748275288 : (arr_16 [i_5]))) <= var_8)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_40 [i_4] [i_5] [i_6 + 1] [i_11] [i_12] |= (((((115 ? (arr_22 [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_4] [i_6 + 1] [i_6 - 3]) : 5153724619859355498))) ? ((((arr_17 [i_12] [i_6 - 1] [i_6 - 2]) || var_3))) : (7670572856116300283 || 17)));
                                var_20 = (min(var_20, -8));
                                var_21 |= arr_36 [i_5] [i_12];
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((-(var_4 == -77))) & (((!((min(var_2, var_3))))))));
    var_23 = ((var_8 ? var_2 : -18));
    #pragma endscop
}
