/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_2] = (((arr_2 [i_2]) ? (((arr_0 [i_1]) - (arr_5 [i_2] [i_2] [i_2]))) : (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3 - 1] = 4699;
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4] = ((~(arr_7 [i_3 + 1] [i_0])));
                            }
                        }
                    }
                    var_12 ^= (((((-(arr_10 [i_2])))) ? (arr_7 [i_1] [i_0]) : (arr_10 [i_0])));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_13 = -12695;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_14 = (((arr_15 [i_0] [i_0] [i_5] [i_0]) ? (arr_20 [i_0] [i_0] [i_6] [i_7]) : (arr_5 [i_0] [i_1] [i_5])));
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_0] [i_7] [i_7] = (((arr_21 [i_1] [i_5] [i_5] [i_5] [i_7]) ? -3498 : (((arr_5 [i_0] [i_5] [i_0]) / (arr_9 [i_0] [i_1] [i_1] [i_6])))));
                            var_15 -= (~var_0);
                        }
                        var_16 = (((var_5 ? 0 : (arr_0 [i_5]))));
                        arr_26 [i_0] [i_1] [i_1] [i_1] = (~var_2);
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_17 = (((~var_0) ? (2 | var_1) : -12695));
                        arr_29 [i_0] [i_1] [i_0] [i_5] [i_8] [i_8 - 1] = (((arr_4 [i_0] [i_0] [i_0]) ? (arr_28 [i_0] [i_0] [i_1] [i_0] [i_5] [i_8]) : (arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_8])));
                    }
                }
                var_18 = ((!(arr_3 [i_0] [i_1])));

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_19 = (min(((((arr_30 [i_0]) ? (arr_16 [i_0] [i_1] [i_9] [i_9]) : 251))), (max(var_7, 255))));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_20 = ((-((-3489 ? 0 : var_2))));

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_21 = ((-(((arr_28 [i_0] [i_1] [i_9] [i_9] [i_9] [i_9]) ? (arr_23 [i_11] [i_10] [i_10] [i_9] [i_1] [i_0]) : 3536131537))));
                            var_22 = (((arr_31 [i_0] [i_0] [i_10] [i_11 - 1]) & (arr_31 [i_10] [i_10] [i_1] [i_0])));
                            var_23 = (max(var_23, (arr_4 [i_1] [i_9] [i_10])));
                            var_24 = (((arr_2 [i_0]) % (arr_2 [i_0])));
                            arr_37 [i_9] [i_1] [i_9] = (arr_34 [i_9] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1]);
                        }
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            var_25 -= (min((((var_0 / (arr_9 [i_0] [i_0] [i_0] [i_0])))), (arr_4 [i_1] [i_9] [i_12 + 2])));
                            var_26 = (max(var_26, (((((~(min(var_9, var_8)))) / (((((var_4 + (arr_10 [i_9])))) ? (arr_22 [i_0] [i_0]) : (arr_30 [i_9]))))))));
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_27 = ((-9 ? 255 : -1));
                            var_28 = 3666;
                        }
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            arr_49 [i_9] [i_1] [i_9] [i_9] [i_10] [i_10] [i_10] = var_3;
                            arr_50 [i_0] [i_9] [i_9] [i_0] [i_14] = -22107;
                            var_29 = ((~(arr_0 [i_14 + 3])));
                        }
                        var_30 = (min(-7, var_1));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        var_31 = (min(var_31, (!-4551489180862521895)));
                        var_32 ^= (((arr_40 [i_15 - 1] [i_15] [i_0] [i_15 - 1] [i_0] [i_15 + 1] [i_15]) ? (arr_11 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15] [i_15 + 1] [i_15 + 1]) : var_11));
                        var_33 = (~-4551489180862521895);
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        var_34 ^= -9223372036854775802;
                        var_35 = (var_11 ? -var_3 : (arr_1 [i_0]));
                        var_36 = (-114 * 26255);
                    }
                    var_37 = (min(var_37, ((max((((29143 >> (9287 - 9279)))), ((((min(1, var_6))) ? (arr_21 [i_0] [i_0] [i_9] [i_1] [i_1]) : (arr_39 [i_0] [i_0] [i_0]))))))));
                    arr_57 [i_1] [i_1] [i_9] [i_1] = (~-15484);
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_38 = (((arr_54 [i_0] [i_0] [i_1] [i_1] [i_1] [i_17]) - (arr_22 [i_0] [i_0])));
                    var_39 = -var_1;
                    arr_60 [i_0] [i_1] = (((((arr_39 [i_0] [i_0] [i_17]) != (arr_5 [i_0] [i_1] [i_17]))) ? var_0 : var_3));
                    var_40 = 6468895539560217592;
                }
            }
        }
    }
    var_41 = (min(var_41, (((((min(var_6, ((-4435 ? 34901 : var_7))))) ? (((30628 ? 12 : 0))) : var_11)))));
    #pragma endscop
}
