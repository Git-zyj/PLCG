/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = 1;
                            var_14 = ((!(~1)));
                            var_15 = ((-((min((max(var_2, var_4)), (arr_2 [i_0] [i_3]))))));
                        }
                    }
                }
                arr_12 [i_0] = ((var_8 * (((-2147483647 - 1) / (arr_7 [i_0] [i_1] [i_0])))));
                var_16 = (~103);
            }
        }
    }
    var_17 = 1;
    var_18 = (max(var_18, var_9));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_19 = 1;
                var_20 = ((((min(1, 1))) - ((max(((max(1, (arr_17 [i_4])))), -2147483646)))));

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_21 = arr_13 [i_4];
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_22 = (+((((-1259290712 + 200) != (max(var_10, 2022674173))))));
                                arr_28 [i_8] [i_4] [i_6] [i_5] [i_5] [i_4] [i_4] = (((((!1) ? 15 : (arr_15 [i_4] [i_5])))) ? ((~(arr_26 [8] [i_6 + 1] [i_7 - 1] [i_7] [i_8 + 3] [i_4 - 1]))) : (min((var_3 || 1), ((1 ? 1 : (arr_20 [i_5] [19]))))));
                                var_23 -= ((1 ? (max((((arr_16 [i_4 - 1]) ? 202 : var_3)), var_4)) : -775768420));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_24 = (max(var_24, (arr_22 [i_6] [i_6])));
                        arr_31 [8] [i_4] [i_9] [i_9 + 2] [i_9] = (!1);
                        var_25 += ((arr_14 [i_4 - 1] [i_9]) % 70);
                        arr_32 [i_5] [i_5] [i_4] [i_9] [1] = 212;
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_35 [i_4] [i_5] [i_6] [i_4] = (((min((1 + -255552878), (arr_20 [i_10] [i_5])))) ? ((1 ? var_10 : 1)) : ((((var_4 ? 1 : var_1)) | (arr_17 [i_4]))));

                        for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_26 = ((1 ? (arr_29 [i_11] [3] [i_6 + 1] [3] [i_4]) : ((-(arr_18 [i_4 - 1] [i_6 - 1] [i_10 + 1])))));
                            var_27 = max((min((min(1, -855987067)), (max((arr_39 [i_4] [i_4] [i_6] [20] [i_5]), (arr_36 [i_4] [22] [i_5] [i_6] [i_10] [22]))))), ((-(max((arr_37 [i_4] [i_5] [i_10 + 1]), (arr_25 [8] [8] [1] [6] [i_11]))))));
                            arr_40 [i_4] [i_6] [i_10] = (((arr_39 [i_4 - 1] [i_4 - 1] [i_6] [i_10 + 1] [i_6]) ? var_7 : ((max((arr_36 [i_4 - 1] [i_4 - 1] [i_5] [2] [11] [i_11 + 1]), var_2)))));
                            arr_41 [i_4] [i_10] = ((-((-17237 % (max(var_5, (arr_34 [i_4] [i_5] [i_11] [i_10])))))));
                        }
                        for (int i_12 = 2; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            arr_45 [1] [i_4] [i_12] = ((((max(((var_3 ? -1948162574 : (arr_13 [6]))), (~1)))) ? ((((max(var_7, (arr_23 [i_4] [i_4] [i_6] [i_6] [8] [i_12])))) ? 22 : (~-1376346512))) : ((1 << ((1 ? 1 : 71))))));
                            var_28 |= (arr_39 [9] [i_6] [i_6] [i_6 - 2] [i_6 - 2]);
                            var_29 = ((((max(var_5, (arr_13 [i_4])))) && ((((((arr_38 [i_5] [i_5]) ? (arr_26 [i_4 - 1] [i_4 - 1] [i_6] [i_10] [1] [12]) : var_6)) % var_12)))));
                        }
                        for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_6 + 2] [i_4] [i_4] [i_5] [i_13] [i_4] = ((58 != (((!-2136579684) * (arr_42 [i_4] [i_5] [i_6] [1] [i_13])))));
                            arr_50 [i_4 - 1] [i_5] [i_6] [i_4] [i_13] = ((~(max(var_13, ((1 ? 85692960 : 2109760135))))));
                        }
                        arr_51 [i_4] [i_10] = 1387388704;
                    }
                }
            }
        }
    }
    #pragma endscop
}
