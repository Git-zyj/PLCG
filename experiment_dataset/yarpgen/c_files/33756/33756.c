/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? var_12 : (var_3 % var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = var_7;
                                var_14 = (arr_2 [1] [i_1] [i_4]);
                                var_15 = (max((((arr_7 [16] [i_0] [i_2 - 1] [i_2]) ? (arr_7 [i_2] [i_0] [i_2 - 2] [i_2 - 1]) : var_1)), 2147483631));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = var_10;
                                var_17 ^= max((max(((-2147483631 ? var_3 : var_4)), 2147483608)), ((-2147483632 ? 2147483636 : -2147483632)));
                            }
                        }
                    }
                    var_18 = (((arr_13 [i_2] [i_0] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1]) != ((var_6 ? (((min(12, var_11)))) : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_31 [i_9] [i_8] [20] [i_9] [i_10] = (max((((arr_7 [i_7] [i_9] [i_9] [i_10 - 1]) + var_5)), ((((arr_4 [i_7] [i_8] [i_10 - 1]) ? (((arr_13 [i_7] [i_9] [7] [i_10] [i_10] [i_10]) ? (arr_6 [i_7] [i_8] [i_9 - 2] [i_9]) : var_1)) : 0)))));
                            var_19 = (min(var_19, ((((((+(((arr_16 [i_7] [i_7] [i_9] [i_10 - 1] [i_10]) ? var_8 : (arr_22 [i_10] [i_9 + 1])))))) ? (((arr_30 [i_8] [i_8] [i_8]) ? (arr_13 [i_7] [i_7] [6] [i_8] [i_9] [16]) : (arr_10 [i_10] [i_9 - 3] [i_9 - 1] [i_8] [i_7]))) : var_7)))));
                        }
                    }
                }
                var_20 = (min(var_10, ((var_1 ? var_2 : ((max((arr_7 [i_7] [i_7] [i_8] [18]), (arr_3 [i_7] [i_8] [2]))))))));
                arr_32 [i_7] [6] [i_8] = ((((((arr_24 [i_7]) ? var_5 : (arr_19 [i_8])))) ? ((((min(var_3, var_3))) ? (((arr_29 [i_8]) ? var_4 : -28)) : -5)) : (max(((min(1, (arr_19 [i_7])))), -2147483633))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_38 [i_11] = (!-2147483612);
                            var_21 *= (arr_0 [i_7]);
                            var_22 = (arr_15 [i_8] [i_8] [18] [i_8] [i_8] [15]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_23 = 2147483592;
                            var_24 = (min(var_24, ((((((arr_12 [i_14] [i_13]) ? (arr_43 [17] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_43 [i_7] [i_7] [i_8] [11] [1] [i_14])))) ? ((((((2147483642 ? var_8 : var_7))) ? (((!(arr_39 [i_14])))) : ((var_8 ? (arr_15 [i_7] [17] [0] [4] [i_13] [i_14]) : 1))))) : (arr_14 [i_7] [i_14] [i_13] [i_7] [i_7] [i_8])))));
                            var_25 = arr_23 [i_7];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
