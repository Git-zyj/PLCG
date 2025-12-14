/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 2] |= (max((min(var_1, (arr_1 [i_0]))), ((((arr_0 [i_0] [i_1 + 1]) ? 1 : 8191)))));
                arr_6 [i_0] [i_1 + 1] [i_0] = (((max((arr_2 [i_0]), (arr_2 [4]))) <= (1 < 8)));
                var_15 = (max(var_15, (arr_2 [i_1 - 4])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = ((((((var_3 + 7) | (max(var_9, 3358493785))))) ^ (((var_13 && var_1) ? ((((arr_12 [i_2] [i_2] [i_2]) << var_9))) : (min(var_10, (arr_12 [i_2] [i_3] [i_2])))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_16 = (min(var_16, ((((32760 ^ var_2) << (!1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_24 [1] [i_6] [1] [i_6] [i_2] = ((var_8 ? (34323 == 1) : ((var_11 >> (arr_8 [i_3])))));
                                arr_25 [i_6] [i_6] [i_4] [i_6] [i_2] = arr_9 [i_2];
                                arr_26 [i_2] [i_5] [i_6] [i_6] [i_6] = (((arr_18 [i_5 + 2] [i_4] [i_3 - 1] [i_2]) ? (arr_18 [i_5 - 1] [i_5] [i_3 - 1] [i_2]) : (arr_18 [i_5 + 2] [21] [i_3 - 1] [i_2])));
                            }
                        }
                    }
                    var_17 = (max(var_17, -1));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_31 [i_3] [i_3] |= var_4;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_36 [i_2] [i_2] = var_13;
                                arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((var_5 ? 1450106031 : var_14))) ? ((1 ? -549755813888 : 0)) : (arr_32 [17] [i_7] [i_8] [i_9])));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_18 ^= ((var_13 ? (((3858005426666129347 + 44037) ? (((arr_8 [i_10]) ^ (arr_15 [i_11]))) : var_14)) : ((-((max(var_12, var_12)))))));
                                arr_45 [i_10] = 747045503;
                                arr_46 [i_10] [i_12] [i_3 + 2] [22] [i_12] = 9214364837600034816;
                                var_19 ^= (((((max((arr_8 [i_11 + 1]), var_7)))) != (2101033685 / -3397234634073669343)));
                                arr_47 [i_10] [i_11] [i_10] [i_10] [i_3] [i_10] = var_9;
                            }
                        }
                    }
                    arr_48 [i_10] = (min((((var_4 || 573934357) ? 112 : (((((arr_20 [i_2] [i_2] [i_2] [i_10]) == (arr_32 [20] [i_2] [i_10] [i_2]))))))), var_8));
                    var_20 = (max(var_20, 247));
                    arr_49 [i_2] [i_2] [i_10] [i_2] |= (min((arr_41 [i_3] [i_3]), (min((min((arr_34 [i_2] [i_2] [i_2] [i_2] [i_10] [i_10] [i_10]), (arr_19 [i_2] [i_2] [i_3 - 1] [i_10] [i_10] [i_10]))), ((max(22033, var_8)))))));
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    arr_53 [i_2] [i_2] = ((((((~var_5) ? ((-746108641 ? (arr_29 [i_2]) : (arr_27 [i_2] [i_2]))) : 573934335))) ^ (((arr_32 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) | 1823301054))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_58 [i_13] [i_13] = ((((((arr_32 [i_3] [i_3 - 1] [i_3] [i_3 + 1]) ? (arr_19 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_19 [11] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 1])))) ? ((((((arr_43 [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_6 : (arr_8 [11])))) ? (var_1 | 1636515623) : (((3 ? var_14 : 1))))) : (arr_16 [i_15] [i_2] [i_2])));
                                arr_59 [i_2] [i_3] [i_2] [23] [8] = var_14;
                                arr_60 [i_2] [i_3 - 1] [i_13] [i_14] [i_15] = (min((arr_33 [19] [19] [i_15]), (arr_28 [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
