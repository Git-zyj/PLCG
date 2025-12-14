/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = arr_1 [11] [11];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_0]);

                            for (int i_4 = 3; i_4 < 22;i_4 += 1)
                            {
                                arr_12 [i_0] [1] [i_0] [i_0] [i_0] = (min(((((((~(arr_8 [i_0] [i_0] [i_2] [i_3] [i_2] [i_1])))) ? 217 : ((var_10 / (arr_5 [i_0] [i_0] [i_0] [i_0])))))), (max((arr_11 [i_4] [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 3]), (arr_11 [i_4] [i_4 - 1] [i_4 - 2] [i_4] [i_4])))));
                                var_19 += (arr_4 [i_1] [i_3] [i_4]);
                                var_20 = max((min((arr_2 [i_4 - 3] [i_4 + 1]), var_16)), (!52506));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 21;i_5 += 1)
                            {
                                var_21 = arr_8 [i_5 - 2] [i_5 - 1] [i_3 + 1] [i_3] [i_3] [i_3];
                                var_22 = (min(var_22, ((((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_5]) < 14680064)) || var_6)))));
                                var_23 = (min(var_23, -47));
                            }
                            for (int i_6 = 2; i_6 < 21;i_6 += 1)
                            {
                                var_24 -= (~4280287200);
                                var_25 = (max(var_25, ((min(13029, var_2)))));
                                var_26 = 1979060839;
                            }
                            arr_17 [13] [i_2] [i_2] [13] = (((~var_4) ? ((((15 <= (((min(var_2, 5)))))))) : 4280287231));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_27 &= ((((min(var_1, (arr_11 [i_0] [9] [i_1] [i_7] [i_7])))) ? (max(-220990263, ((var_8 ? (arr_11 [i_7] [i_1] [i_1] [16] [i_0]) : var_10)))) : (max((((arr_4 [i_0] [i_1] [i_0]) % -2053498549)), (arr_19 [i_0] [i_0])))));
                    var_28 = 4294967268;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_29 = (max(var_29, var_16));
                    var_30 = ((((var_6 / (arr_8 [i_8] [i_1] [i_0] [i_0] [i_0] [i_0]))) * (arr_21 [i_8] [i_8] [i_8])));
                    var_31 = (((arr_23 [i_8] [15] [i_0]) / 15));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_27 [i_9] [i_1] [i_0] = (min((((14888 & (-32767 - 1)))), (max((arr_15 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0]), 14680078))));

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_9] [i_10] [i_0] = (arr_22 [i_0] [i_1] [i_1]);
                        var_32 = ((16 ^ (min(((-5410 ? (arr_19 [i_0] [i_10 - 1]) : var_16)), (arr_19 [i_10 - 1] [i_9])))));

                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_33 = ((~(arr_30 [i_11 + 1] [i_11] [i_11] [i_11] [i_9])));
                            arr_35 [i_0] [i_1] [i_11] [i_10 - 1] [i_10] [i_0] = (((((max(4280287232, 4280287231)))) ? (arr_34 [i_10] [i_1] [i_1] [i_1] [i_1]) : (max((arr_33 [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10 - 1]), (min(13029, (arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] = var_4;
                        }

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_39 [i_12] [i_10] [i_10] [i_10] [i_1] [i_0] = var_10;
                            var_34 = var_1;
                            var_35 |= ((~(65535 >> 1)));
                        }
                        var_36 = (min(var_36, ((max(-220990258, (((!((((arr_28 [i_0] [i_1] [i_9] [i_10]) * (arr_2 [i_1] [i_10]))))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_37 = (min(var_37, (arr_21 [15] [i_13 - 2] [i_1])));
                                var_38 = (min((~var_12), (min((((arr_28 [i_0] [i_9] [i_9] [i_14]) ? 108 : (arr_4 [i_0] [i_0] [i_0]))), 1))));
                                arr_46 [i_9] [i_13] [i_9] [i_1] [i_1] [i_0] [i_0] = (max((~0), (min(var_5, (arr_40 [i_0] [i_13] [i_13 - 1] [i_13 - 1])))));
                                arr_47 [i_0] = ((!(((var_0 ? (min(var_11, var_17)) : ((max(14680064, (arr_44 [i_0] [i_0] [i_9] [i_13] [i_14])))))))));
                            }
                        }
                    }
                    var_39 = ((~((-220990271 ? 4294967281 : 932709797))));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    arr_51 [i_0] [i_0] [i_0] [22] = ((((max(var_4, ((((arr_14 [i_0] [i_1] [i_1] [i_1]) * 127)))))) ? var_0 : (((((arr_40 [i_1] [i_1] [i_1] [i_1]) == (arr_40 [i_0] [i_1] [i_15] [i_15])))))));
                    var_40 = (min(var_40, ((max(-76, 25398)))));
                    var_41 = ((~(arr_18 [i_0])));
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                var_42 -= 1;
                                arr_56 [i_0] [i_1] [i_15] [i_1] [i_16] [13] = ((max((arr_5 [i_0] [i_1] [i_15] [i_0]), var_14)) & ((((arr_37 [i_1] [i_1] [i_16] [i_16 - 1] [10] [i_15] [i_0]) & (arr_37 [i_0] [i_1] [i_16] [i_16 - 1] [i_0] [i_1] [i_1])))));
                            }
                        }
                    }
                }
                var_43 |= ((3584 << (-113 + 130)));
                var_44 -= (var_4 - 3584);
            }
        }
    }
    var_45 ^= 13029;
    var_46 = var_1;
    var_47 -= var_0;
    var_48 = var_0;
    #pragma endscop
}
