/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 1022957542));
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max((((arr_1 [i_1 - 1] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 3] [i_0]))), (((((arr_7 [i_1] [i_1] [i_1 - 1] [i_1]) ? 233 : var_17))))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [1] [i_3] = var_6;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = (arr_9 [i_0] [i_1]);
                            var_23 = (arr_3 [i_0] [i_3]);
                            var_24 = (min(var_24, ((((arr_2 [i_3] [i_4]) ? var_1 : var_2)))));
                            arr_15 [i_0] = (-((var_11 ? (arr_9 [i_0] [i_4]) : var_6)));
                            var_25 = (arr_1 [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_2] [i_0] = (((((((var_1 ? var_1 : var_6))) ? ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [5]))) : (arr_9 [i_0] [i_0])))) ? ((var_3 ? (-32767 - 1) : ((-(arr_3 [i_2] [i_1 - 1]))))) : var_2);
                            var_26 = 281474976710640;
                            var_27 = (max(var_27, ((((((max(1502882743, var_14)) < (arr_0 [i_1]))) ? (((max(var_6, 4294967295)) ^ (((var_11 << (((arr_4 [i_3 + 2] [i_0]) - 169))))))) : var_10)))));
                            var_28 = 32767;
                        }
                        var_29 = (((-319204351 / -319204350) >= -1502882735));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_30 = (((~var_4) != (((var_4 ? -319204350 : var_17)))));
                        var_31 += ((((!(arr_2 [i_0] [5]))) ? (~var_6) : var_11));
                        var_32 = (max(var_32, ((((~(arr_20 [i_6] [i_6]))) / ((var_17 | (-2147483647 - 1)))))));
                    }

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [5] = ((-(arr_16 [i_0] [9] [1] [i_2] [i_7 - 1])));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_27 [i_0] [i_7 + 1] = ((var_8 ? var_17 : ((96 ? var_12 : (arr_0 [i_0])))));
                            var_33 -= (var_11 > 2147483647);
                            var_34 = (min(var_34, ((var_9 ? ((((arr_16 [i_0] [i_0] [i_2] [i_0] [i_0]) * (arr_10 [i_7] [i_1] [i_2])))) : (((arr_22 [i_0] [1] [i_1 - 2] [i_2] [i_7] [6]) % var_15))))));
                            var_35 &= (arr_19 [9] [i_1 - 2] [i_2] [i_7] [i_8]);
                        }
                        for (int i_9 = 2; i_9 < 7;i_9 += 1)
                        {
                            arr_31 [6] [i_0] [i_0] [i_0 + 4] [6] = (~var_18);
                            var_36 = (-306610940 + var_8);
                            var_37 = (((arr_17 [i_7 + 1] [i_2] [1] [i_2]) - var_12));
                            var_38 = ((!(~var_14)));
                            var_39 = var_17;
                        }
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            var_40 = (max(var_40, (((-((var_13 ? var_7 : (arr_0 [i_7]))))))));
                            var_41 -= (-2147483647 - 1);
                            var_42 = var_16;
                            var_43 = 31743;
                        }
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_37 [i_0] [i_1] [i_0] = (311746630998343282 != var_9);
                        var_44 = (min(var_44, (((((max((arr_33 [i_11]), (arr_0 [i_1])))) << (((arr_0 [i_1]) + 28544)))))));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_45 = (arr_30 [i_0 + 1] [i_0 + 4] [i_1 + 1] [i_0] [i_1 - 2]);
                        var_46 = -1967329965;
                        var_47 = ((12948 ? 32767 : 77));
                    }
                }
            }
        }
    }
    var_48 = -8796093022207;
    #pragma endscop
}
