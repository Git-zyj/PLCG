/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = ((+(((arr_4 [i_2 - 1] [i_0 + 1]) ? (arr_4 [i_2 - 1] [i_0 - 1]) : var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_8, ((var_10 ? (arr_2 [i_0 + 1] [i_2 - 2]) : 9223372036854775807))));
                                var_18 = ((var_0 ? ((((min(4294967295, (arr_2 [13] [i_2])))) ? (arr_2 [i_3 - 2] [i_2 + 2]) : (((((arr_12 [i_0] [i_1] [0] [i_4] [i_4]) > var_1)))))) : ((-(arr_1 [i_2 - 2] [i_0 + 1])))));
                                var_19 = (max(var_19, 3669119215986456246));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_16 [18] [16] [i_1] [i_0] = var_2;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_23 [1] [9] [10] [i_1] [5] [i_0] = ((~(arr_2 [i_6] [i_1])));
                                var_20 = (!22);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_21 = (((234 && -8722175802175744550) ? 21 : ((var_3 >> (255 - 211)))));
                                var_22 = 231;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_23 *= ((!((max((((arr_26 [2] [6] [i_1] [19] [i_10] [18] [10]) ? var_14 : var_4)), (((31 == (arr_5 [i_0] [i_1] [i_10])))))))));

                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_10] [5] [19] [21] = (((arr_10 [i_1] [i_1] [i_0] [i_11]) ? ((4294967295 - (((arr_0 [0] [i_1]) ? var_14 : 0)))) : (((max(var_10, (arr_20 [i_0 + 1] [i_1] [i_11 - 1])))))));
                        var_24 = ((var_14 / var_7) >= ((((var_12 && ((min(6760142900687093636, (arr_32 [18] [i_10] [1] [9] [i_1] [i_0])))))))));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_7 [i_11 - 1] [i_11] [i_11 - 1] [i_0 + 1])));
                        var_25 -= ((-(var_5 / 9223372036854775807)));
                    }
                }
                arr_35 [i_1] [i_1] [i_0] = (((((255 * (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])))) && (((-(arr_3 [i_0]))))));
                var_26 -= ((((max((var_1 <= var_10), (arr_30 [i_0 - 1] [i_1] [7] [i_0] [i_1] [i_1])))) ? var_9 : (arr_21 [2] [i_1] [11] [i_1] [13] [i_0] [i_0])));
            }
        }
    }
    var_27 = ((((var_4 ? (~var_1) : (~-8722175802175744550))) & (((~(max(var_11, var_13)))))));
    var_28 ^= ((var_4 ? (max(11716923830959442340, (((var_1 ? 5700232406965808594 : var_6))))) : ((((var_6 && var_15) ? var_1 : var_10)))));
    #pragma endscop
}
