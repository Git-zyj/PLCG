/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = min(17034830642812923346, 1);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] = (arr_8 [i_0] [10] [i_3]);
                                var_14 = (max(var_14, (arr_5 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_15 = ((((max((((arr_8 [i_0] [i_1] [i_1]) ? 1 : 0)), var_4))) ? ((~(arr_21 [i_0] [i_1] [i_2] [i_5] [i_6]))) : ((-((4294967278 ? 1 : 1))))));
                                var_16 += var_4;
                                var_17 = (max(var_17, ((((((min((arr_21 [1] [i_1] [i_2] [i_1] [i_6]), var_4)))) + ((1 ? ((var_9 + (arr_2 [i_6]))) : var_0)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_8] [i_2] = (max((max((arr_25 [i_8 + 4] [14] [i_2] [i_8]), var_1)), (max((((arr_4 [i_0] [i_0] [i_0]) ? var_3 : (arr_22 [i_2]))), (var_8 || 1531892743305744868)))));
                                arr_28 [i_0] [i_8] = var_2;
                                var_18 ^= (((215 ? ((var_3 ? (-9223372036854775807 - 1) : (arr_4 [i_0] [i_1] [i_2]))) : (arr_6 [i_2] [i_2] [i_2]))));
                                arr_29 [i_8] [i_8] [i_2] [i_2] [i_8] [i_0] = var_3;
                            }
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_19 = (min(var_19, (arr_25 [i_0] [i_1] [i_9] [i_0])));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = (((2129863207 & 58) + var_7));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_20 = ((-(1 + 63256973)));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_21 = (arr_43 [i_1] [i_11] [i_10] [i_1] [i_0]);
                            var_22 -= var_9;
                            arr_44 [i_0] [i_1] [i_10] [i_1] [i_12] = (((-67 >= var_4) ? (!75) : 1));
                        }
                        arr_45 [i_0] = ((1 ? ((var_7 ? var_2 : (arr_14 [i_11] [i_11] [i_10] [1] [1] [i_11] [i_1]))) : ((var_6 | (arr_8 [i_1] [i_1] [i_1])))));
                        var_23 = (arr_2 [i_0]);
                        arr_46 [i_0] [1] [i_1] [i_10] [i_10] [i_11] = (arr_39 [21] [i_10] [i_11]);
                        arr_47 [i_0] [i_10] [i_10] = (-61 < -5);
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_24 = (arr_11 [i_0] [i_1] [i_1]);
                        var_25 |= ((-(-1 <= 16795579312011695844)));
                    }
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        var_26 = (arr_13 [i_14]);
                        var_27 &= var_6;
                        arr_54 [i_14] = ((var_10 ? (arr_40 [i_14 + 1] [i_14 + 1] [i_14] [i_14]) : var_0));
                        var_28 = (~((0 ? var_9 : var_2)));
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_29 = (min(var_29, ((((var_8 ? (arr_35 [i_0] [i_1] [i_10] [i_0]) : var_7)) != ((((var_5 && (arr_24 [i_0])))))))));
                        arr_57 [0] [0] = (arr_23 [i_1]);
                        var_30 = (~var_8);
                    }
                }
                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {
                    var_31 = (arr_9 [i_16] [i_1] [i_1] [i_0] [i_0]);
                    arr_60 [i_0] [i_1] [i_1] = (arr_35 [i_0] [i_1] [i_16] [i_0]);
                    var_32 = (max(var_32, ((((((var_11 ? 18446744073709551598 : (arr_0 [i_0])))) ? -9034083265039329077 : var_0)))));

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_33 ^= ((-((-(arr_38 [i_0] [i_1] [i_16] [i_16])))));
                        var_34 = (max(var_34, 107));
                        var_35 = (min(var_35, var_0));
                        arr_64 [i_17] [i_17] = var_1;
                    }
                }
            }
        }
    }
    var_36 = var_1;
    var_37 ^= (min(8045244744334012119, 2));
    #pragma endscop
}
