/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(15, 696085282940970618));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (~-1);
                                arr_10 [i_0] = (((((arr_8 [i_4] [i_4 + 2] [5]) ? ((var_4 ? -428615225 : -1238605549162069286)) : (696085282940970618 < var_8))) >= (arr_5 [i_2] [i_3])));
                                var_18 = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_5 + 2] [i_1] = ((((((arr_7 [i_1 + 2] [i_5] [i_5 + 1]) / (arr_7 [i_1 + 1] [i_1] [9])))) ? 288446259018492587 : ((var_4 ? (arr_7 [i_1 - 1] [i_1] [i_1 - 1]) : var_14))));
                            var_19 = ((-(((((var_1 ? -5801497131738735932 : 8727212889156569711))) ? (!var_0) : ((-5801497131738735932 ? 8727212889156569708 : 3624834772429818958))))));
                        }
                    }
                }
                var_20 = (max(var_20, (arr_9 [11] [11] [i_1] [i_1] [i_1])));
                var_21 += (min(262128, 8727212889156569708));
            }
        }
    }
    var_22 *= var_7;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 = (max(var_23, ((min(((((arr_12 [i_7] [i_7] [i_7]) <= (arr_12 [i_7] [i_8] [i_7])))), ((-(arr_12 [i_7] [i_8] [15]))))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_24 = 8727212889156569711;
                                var_25 = 112;
                                var_26 = ((-(1 || 1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_33 [i_7] [i_7] [10] [i_13 - 3] = (max(((((max((arr_23 [i_7] [i_8] [i_13]), (arr_18 [12] [i_13 + 1])))) ? (((arr_31 [i_8] [i_8]) ? (arr_28 [i_7] [i_7] [i_12] [i_7]) : var_13)) : ((var_8 ? (arr_31 [i_12] [9]) : var_14)))), ((max(1938392885, (((9223372036854775807 ? 10 : (arr_28 [7] [i_8] [i_8] [i_13])))))))));
                            var_27 = (arr_6 [20] [i_13 + 2] [i_13 - 2] [i_12 - 2]);
                            arr_34 [i_7] [i_8] [i_7] [i_7] = (((((arr_24 [i_12 - 1] [i_13] [i_13 - 3] [i_13] [i_13 - 3]) ? (arr_29 [i_12 - 1] [i_12] [i_13 - 3] [i_13]) : (arr_24 [i_12 + 1] [i_12 + 1] [i_13 - 2] [10] [0])))) ? -71 : (arr_29 [i_12 - 1] [i_12 - 2] [i_13 + 1] [i_13]));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_28 = (min(var_28, 19));
                                arr_44 [i_7] [i_8] [i_14] [i_7] [i_7] = (arr_40 [i_7] [i_7] [i_14] [i_14] [i_7] [i_14]);
                            }
                        }
                    }
                }
                var_29 *= (min(-1094395628, ((162 ? (arr_9 [18] [18] [i_7] [i_7] [2]) : var_1))));
            }
        }
    }
    #pragma endscop
}
