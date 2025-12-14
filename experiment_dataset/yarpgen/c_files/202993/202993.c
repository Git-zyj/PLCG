/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = 1071502381;
                var_14 = ((((min(var_11, (arr_0 [i_0] [i_1])))) != (((arr_0 [i_0] [i_1]) ? 1071502394 : (arr_0 [i_0] [i_1])))));
                arr_5 [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = var_10;
                            var_16 += var_11;
                            var_17 = arr_2 [i_1] [i_2];
                            var_18 |= var_6;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_22 [i_4] [i_5] [i_6] [i_7] [i_4] = (((((max(var_7, var_2)) ? var_4 : (min((arr_19 [i_8] [i_7] [i_6] [i_5] [i_4]), var_0))))));
                                var_19 = (max((!1071502405), (arr_6 [i_4])));
                                arr_23 [i_8] [i_4] [i_4] [12] [i_4] = (((((arr_7 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 - 1]) ? 477135061572293648 : 1071502408)) + var_6));
                                var_20 = (max(var_12, (((arr_3 [i_4] [i_8 + 2] [i_4]) + (arr_20 [i_8 + 2] [i_8] [i_8] [i_8] [i_8])))));
                                var_21 |= (((25820 && var_8) >= 1));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_22 = -1071502411;
                    var_23 = (((arr_11 [i_9]) && var_8));
                    var_24 = ((var_6 ^ (arr_18 [i_4] [i_4] [i_5] [i_9])));
                    arr_26 [i_4] [i_5] [i_5] [i_4] = ((-1071502433 ? ((-1071502424 ? -8661432958252474966 : 8661432958252474955)) : (!2363870978)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_25 = ((~(arr_6 [i_4])));
                                arr_32 [i_4] [i_5] [i_4] [i_10] [18] = ((((((47 && (arr_27 [i_4] [i_11]))))) ^ ((var_1 ? var_4 : var_3))));
                                arr_33 [i_11] [i_4] [i_9] [i_4] [i_4] = (((arr_9 [i_4] [i_5] [i_5] [i_4]) == ((var_7 ? 2760383734 : var_10))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_36 [i_4] [i_4] [i_4] = ((((arr_6 [i_4]) % -8316934916269149434)));
                    arr_37 [i_4] [i_5] [i_4] = ((+((1 ? (arr_27 [i_4] [i_4]) : var_9))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_26 |= (arr_20 [i_12] [14] [i_12] [i_14 + 1] [1]);
                                var_27 = (((arr_2 [i_14 + 1] [i_14 + 2]) ? var_1 : (((((arr_43 [i_4] [i_5] [i_5] [i_13] [i_14 + 2]) == var_9))))));
                                arr_45 [i_4] [i_5] [i_12] [i_13] [3] = (arr_10 [i_14 - 1]);
                                var_28 = var_4;
                                var_29 = ((-(arr_35 [i_4] [i_4] [i_12] [i_4])));
                            }
                        }
                    }
                    var_30 = (arr_10 [i_5]);
                    var_31 = (!22);
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_32 = (max(var_32, 27405));
                                var_33 = (((arr_7 [i_4] [i_15] [1] [2]) ? (((var_0 ? (!var_9) : 279763762))) : (min(-1966514895, (max(var_4, (arr_8 [i_17] [i_17] [i_15] [5])))))));
                                var_34 = ((!((min(3258341589, (arr_18 [i_4] [i_5] [i_16] [i_17]))))));
                            }
                        }
                    }
                    arr_55 [i_4] = 1;
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 16;i_19 += 1)
                        {
                            {
                                var_35 = -var_0;
                                var_36 = var_8;
                                var_37 = max(95, ((var_7 << (2526425289 - 2526425272))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = ((!(((-((max(var_10, var_11))))))));
    #pragma endscop
}
