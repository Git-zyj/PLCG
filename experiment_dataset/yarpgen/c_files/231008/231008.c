/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = arr_6 [i_0] [i_1] [i_2];
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = 158;
                                var_18 = ((max((arr_8 [2] [i_1] [i_0] [i_3] [i_4] [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_2] [0] [i_4]))));
                                var_19 = (max(31, (min((((arr_10 [i_0] [i_1] [i_2] [14]) ? 1 : var_6)), ((max((arr_10 [i_0] [i_1] [i_3] [i_4]), (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))))));
                                var_20 |= 1;
                            }
                        }
                    }
                }
                var_21 = (arr_2 [i_0] [i_1] [i_1]);
                arr_14 [i_0] = ((((((arr_11 [i_0] [i_1]) ? var_14 : (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))) & var_7));
                arr_15 [i_0] [i_1] = ((((((arr_7 [i_1] [i_0] [i_1] [i_1]) <= ((max((arr_2 [i_0] [i_1] [i_1]), var_15))))))) & (max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((arr_1 [i_0]) & (arr_3 [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            {
                arr_23 [i_6] [i_6] = var_16;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_22 = (arr_12 [18] [i_6] [i_6]);
                            var_23 = (max(((max((max((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_19 [i_5] [i_8] [11]))), ((-720429690 ? -1451124882 : 2046))))), (max((arr_20 [i_6] [i_6 - 1]), (arr_20 [i_5] [i_6 - 1])))));

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 8;i_9 += 1)
                            {
                                arr_33 [i_5] [7] [7] [7] [i_6] = (((arr_4 [i_6] [19] [i_8 - 1] [i_6]) - (arr_31 [i_9 + 3] [i_8] [i_8] [i_8 + 1] [i_6 + 1])));
                                arr_34 [i_5] [i_5] [i_5] [i_6] = var_5;
                                arr_35 [i_5] [i_6] [i_7] [i_8] = (((arr_32 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9]) & (arr_32 [i_9] [i_9 + 4] [i_9] [i_9 + 1] [10])));
                            }
                            var_24 = (max((arr_25 [i_8 - 1]), (max((arr_25 [i_8 - 1]), (arr_25 [i_8 - 1])))));
                        }
                    }
                }
                arr_36 [i_6] = ((arr_32 [i_5] [i_6 - 1] [i_5] [i_6] [i_5]) ? ((var_12 / (arr_32 [i_5] [i_6 + 1] [i_5] [i_5] [i_5]))) : (((-(arr_32 [i_5] [i_6 + 1] [i_6] [i_6] [2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            {
                var_25 = (2046 / (-var_0 * 33554368));
                arr_41 [i_11] [i_10] [i_10] = ((var_8 ? (((((var_15 | (arr_39 [i_10] [i_10] [i_10])))) ? (((((arr_37 [i_10] [i_11]) <= var_2)))) : (1 & 1479070166))) : (((((((var_0 ? (arr_40 [i_11] [i_11] [i_11]) : (arr_40 [i_11] [i_11] [i_10])))) && 2305280059260272640))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_26 = var_16;
                            arr_46 [i_10] [i_10] [i_11] [i_11] [i_12] [i_13] = (arr_45 [i_10] [i_11] [i_12] [i_13]);
                            var_27 &= ((-(arr_42 [i_10])));
                        }
                    }
                }
                arr_47 [i_10] = (max(((((max(var_3, 24576))) + (arr_43 [i_11] [i_10] [i_10] [i_10]))), (((!((max(var_6, (arr_37 [i_11] [18])))))))));
                arr_48 [i_10] [i_10] [i_11] = (arr_39 [i_10] [i_10] [i_10]);
            }
        }
    }
    #pragma endscop
}
