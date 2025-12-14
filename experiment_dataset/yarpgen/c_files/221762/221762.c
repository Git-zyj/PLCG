/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min((min((arr_6 [i_1 - 3] [i_1 - 1]), var_12)), ((((arr_6 [i_0] [i_1]) > 18446744073709551615)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (arr_6 [i_1] [i_1]);
                            var_15 |= (101 / 18446744073709551615);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_16 = (min((((((arr_13 [i_4]) ? var_1 : (arr_10 [12] [i_1] [i_4] [i_4] [i_1]))) != (arr_1 [i_1]))), var_4));
                            arr_17 [i_5] [i_1] [i_1] [i_4] [i_5] = (min((min(0, (((var_2 ? var_3 : (arr_7 [i_4])))))), (arr_5 [i_5] [i_0] [i_4])));
                            var_17 = (max(var_17, (!18446744073709551615)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_26 [i_6 + 1] [i_6] [i_6 + 1] [i_7] = 18446744073709551602;
                            arr_27 [i_6] [i_6] = var_9;
                            var_18 ^= (max((((((arr_21 [0] [i_7] [i_0]) ? 13 : var_7)) + (((min(72, var_6)))))), ((max(8796093020160, (arr_1 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_40 [i_8] = (arr_10 [i_8 - 3] [i_9] [i_8 - 3] [1] [i_11 + 1]);
                                arr_41 [1] [i_12] [i_12] [i_12] [i_12] [1] [i_12] |= (min(2238502027378135933, (((((arr_22 [i_12] [i_10] [i_10] [i_10] [i_10] [i_10]) ^ var_9))))));
                                var_19 = (~-245104041774425097);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 7;i_14 += 1)
                        {
                            {
                                arr_47 [i_8] [i_8] [i_10] [i_13] [i_14 - 1] [i_14] |= ((((((var_0 & (arr_15 [i_8] [i_8] [17] [i_8] [i_8] [i_8]))) ? (~var_8) : (arr_30 [i_13] [i_9])))));
                                var_20 = ((var_0 != -79) * (((!(arr_25 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8])))));
                                var_21 = ((!((((arr_39 [i_8 + 2] [i_8 + 2] [i_8] [i_8] [i_8 + 2] [i_8] [i_8 - 2]) - var_8)))));
                                var_22 = (((((((((~(arr_11 [i_8 - 2] [i_9] [i_8 - 2] [i_13] [17] [i_8])))) ? ((~(arr_16 [i_8]))) : (((~(arr_34 [i_9] [i_9] [i_9] [i_8])))))) + 9223372036854775807)) << (var_2 - 1538103596)));
                                arr_48 [i_8 - 1] [i_8] [i_8] = (~(arr_23 [i_13] [i_9] [i_13] [i_13]));
                            }
                        }
                    }
                    var_23 = ((((((arr_45 [i_8 - 3] [i_8 + 3]) + (arr_12 [i_8 - 3] [i_8 - 2])))) ? ((min(1953109826, 0))) : (((arr_12 [i_8 + 1] [i_8 - 3]) ? (arr_12 [i_8 - 2] [i_8 + 2]) : (arr_45 [i_8 + 3] [i_8 + 1])))));
                    var_24 = (((((min(48, (!8796093020160))))) > (min(((var_5 ? (arr_31 [i_8] [i_9] [i_10]) : 19)), ((((arr_38 [i_8] [i_10] [i_10] [i_9] [i_10] [i_9] [i_10]) * 3460602207)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 8;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 8;i_19 += 1)
                        {
                            {
                                arr_62 [i_15] [i_15] [i_15] [i_15] [i_19] [i_18] = (min((1 / -131), (((!(arr_9 [i_18] [i_18] [i_18] [i_18]))))));
                                var_25 |= (((arr_56 [i_15] [i_18 + 1] [i_15] [i_19]) && -48));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 10;i_21 += 1)
                    {
                        {
                            var_26 = (arr_67 [i_15] [i_21] [i_20]);
                            arr_68 [i_16] [i_15] [i_20 + 2] [i_21] = ((~((min(var_6, var_12)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 10;i_23 += 1)
                    {
                        {
                            arr_74 [i_15] [i_16] [i_22] [i_15] [i_16] = (min(511, (((!(arr_56 [i_15] [i_15] [i_22] [i_15]))))));
                            var_27 = var_1;
                        }
                    }
                }
            }
        }
    }
    var_28 = var_3;
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 16;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 16;i_25 += 1)
        {
            {
                var_29 = (max((max((((arr_20 [i_24]) / (arr_23 [i_24] [i_25] [i_24] [i_24]))), var_11)), (!var_7)));
                var_30 ^= var_11;
            }
        }
    }
    #pragma endscop
}
