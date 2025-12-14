/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = max(36624, ((18754 ? -1452 : -64)));
                var_19 = (arr_1 [i_0] [i_0]);
                var_20 ^= 4611683819404132352;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = ((((((var_5 + 9223372036854775807) >> ((((max(36631, var_1))) - 61752))))) ? ((min((!884987129), var_4))) : (((((1132137816247416218 ? -6197154467173713348 : (arr_11 [i_0] [i_1] [i_2] [i_1] [i_2])))) ? 67 : (max(-1, var_6))))));
                                arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] = (arr_11 [8] [8] [8] [i_4] [i_4]);
                                arr_17 [i_0] [i_0] [i_1] [i_0] [16] = ((22274 ? var_13 : (arr_8 [i_2 + 1] [i_3 - 2] [i_3 - 2])));
                                var_22 = (min((max(28908, 0)), ((max((min(-31897, -5431872166782565773)), (((var_6 ? 40725 : 4294950912))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_26 [i_6] [i_6] = (~var_0);
                        var_23 = (min(36624, 1874817019943793306));
                        arr_27 [i_5] [i_5] [i_6] [i_5] = ((((max((max(-1132137816247416209, var_13)), ((max(var_17, 127)))))) ? (arr_2 [i_7 - 1]) : ((((!((max(var_2, 1131827312)))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_33 [i_5] [i_9] [i_5] = (arr_7 [i_9 + 3] [i_9 + 4] [i_9] [i_9 + 3]);
                    var_24 = (arr_20 [i_5]);

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_25 = ((((min(var_6, -7180))) ? (min(-1279739824, 59639)) : (min(-var_16, var_9))));
                        var_26 ^= (((67 / (-9223372036854775807 - 1))));
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        var_27 = (min(var_27, (40707 > var_9)));
                        arr_39 [i_9] = (arr_34 [6] [i_9 + 3] [6] [i_9] [i_9] [i_9 + 1]);

                        for (int i_13 = 4; i_13 < 11;i_13 += 1)
                        {
                            var_28 *= max((min((arr_25 [i_12] [i_12 + 1] [i_9 + 1] [i_5] [i_9] [i_5]), 3140277786331440707)), (arr_35 [i_5] [i_9] [i_10] [i_10] [i_13] [i_10]));
                            arr_42 [i_5] [i_5] [i_5] [i_9] [i_5] = var_17;
                        }
                        var_29 = var_2;
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_30 = (max(var_30, var_16));
                        var_31 = (min(var_31, (((var_14 && ((!(arr_31 [i_14] [i_10] [i_9] [i_5]))))))));
                        arr_45 [i_5] [i_9] [i_5] [i_5] = 8388604;

                        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            var_32 *= var_0;
                            arr_48 [i_5] [i_5] [i_5] [i_9] [i_5] = var_4;
                        }
                        for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, (!var_10)));
                            var_34 = 24858;
                            var_35 = -1;
                            var_36 = (min(var_36, (((~(arr_43 [i_5] [i_9 - 2] [i_9 - 1] [i_9 - 2] [i_9 + 4] [i_9 + 2]))))));
                            arr_53 [0] [i_5] [i_5] [i_5] [i_5] [10] [i_9] = (~var_11);
                        }
                        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                        {
                            var_37 = (6 && 181);
                            arr_56 [i_9] [i_9] [i_10] [i_9 + 1] [i_9] = var_16;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
