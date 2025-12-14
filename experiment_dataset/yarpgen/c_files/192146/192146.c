/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [6] = (min((((arr_1 [i_0] [i_0]) / -8)), 2147483628));
                            var_15 ^= ((((min((min(var_13, 128)), ((((arr_0 [i_3]) && var_8)))))) || (-33 - var_12)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_4] = var_2;
                            arr_17 [i_0] [i_4] [i_4] = var_3;
                            var_16 = (min(var_16, (((max((min(224, 23376)), 8))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [i_6] [i_6] [1] [i_6] [1] = (((max(-27, 224))));
                            var_17 = ((((max((arr_5 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]), (arr_15 [i_7] [1] [i_6] [i_7] [i_0] [8])))) ? (~var_1) : (((arr_22 [i_6] [i_1] [i_7 + 2] [i_7 + 2] [i_1]) | (arr_22 [i_6] [i_1] [i_7 + 1] [i_7] [i_6])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_18 = (max(((min(0, (-9223372036854775806 > var_13)))), ((1643249998 ^ (arr_35 [i_10 + 1] [i_10 - 1])))));
                                var_19 = (min(((54872 && (arr_29 [i_10] [14]))), (max((3130 != 3974276554), (((arr_25 [i_8]) > var_9))))));
                                arr_36 [i_9] [i_11] [i_10] [i_10] [i_9] [i_9] = ((!(arr_31 [i_10 + 1] [i_9] [i_12 + 2])));
                                arr_37 [i_8] [i_10 + 1] [i_9] = (((~2913501516) | (arr_32 [i_9] [i_10 + 1] [i_10 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 1])));
                                var_20 = (max(var_20, -11439));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_5));
                                var_22 = (((var_3 ? -27 : (arr_40 [0] [i_9] [i_10 - 1] [i_9] [i_14] [i_8] [13]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                var_23 = (arr_40 [i_10] [12] [i_10] [i_9] [i_10] [i_10 - 1] [i_10]);
                                var_24 = (arr_38 [i_16] [7] [i_8] [i_10] [11] [i_8]);
                                var_25 = (((!var_3) ? (arr_46 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [0]) : (((arr_46 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10]) ^ (arr_46 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])))));
                                var_26 = (max(var_26, -5060));
                                arr_47 [13] [13] [i_9] [16] [10] [15] = ((((251 ? 0 : 224)) < 1278754924));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 14;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_27 = (max((((arr_54 [i_17 + 2] [i_17 + 4] [i_19 - 1] [i_20 - 1]) ? 0 : 648111377)), (11 | 1536118927)));
                            var_28 = (min(((((arr_50 [i_17]) ? var_4 : (arr_50 [i_17])))), ((4294967295 | (arr_50 [i_17])))));
                            arr_60 [i_17] [i_17] [i_17] [6] = (((max((~-1531961873), ((var_4 ? (arr_56 [i_17] [i_17]) : var_13)))) > (((min(var_3, (arr_55 [i_20] [i_20 - 2] [i_20 - 2] [i_20 - 2])))))));
                            var_29 = (arr_52 [i_17] [1] [i_17]);
                            arr_61 [i_20] [i_20] [i_20] [i_20 - 2] [i_17] = ((((min((max(-76, var_2)), (arr_57 [i_17] [12] [i_17 - 2] [i_17 - 3])))) ^ var_12));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_30 *= ((-(((((21 ? 857718665 : 9))) ? (arr_67 [i_18] [i_18] [i_21] [i_22]) : (arr_52 [i_18] [i_17] [i_21])))));
                            var_31 = ((-var_1 ? (arr_48 [i_17]) : var_0));
                            var_32 = (min((((((var_6 ? (arr_65 [i_21] [i_21]) : 7446)) != (((arr_53 [i_17] [i_17 + 3] [7]) | var_3))))), ((~(~var_9)))));
                            var_33 = (!var_8);
                            var_34 = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
