/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (max(var_15, (min((var_11 / var_0), var_5))));
            var_16 = (min(var_16, ((((var_6 != 0) ? var_3 : ((var_3 ? -9223372036854775806 : (~var_5))))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [1] [1] [i_3] [i_3] = (min(1, -1));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_17 = var_3;
                                var_18 = (min((!var_0), 0));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (~1128877491);
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_20 = (max(var_20, var_1));
        arr_19 [i_6] = var_4;
        arr_20 [i_6] = ((((var_8 ? var_7 : 1))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_23 [7] [i_7] = var_12;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_21 = (max(var_21, var_1));
                        arr_34 [i_9] [i_9] [14] [i_10] [i_10] |= (max(var_11, ((var_5 ? var_14 : (~var_12)))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_38 [i_7] [i_8] [13] [i_8] [i_9] [i_11] = 1;

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_22 = (max(var_22, var_10));
                            arr_42 [i_8] [i_8] [1] [i_8] [i_12] [i_11] [i_7] = var_12;
                            arr_43 [i_8] [i_8] [i_8] [1] = ((1710040347707081779 ? 16809125701073906073 : var_0));
                            var_23 = (max(var_23, var_7));
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_24 = ((var_14 ? var_14 : var_11));
                            var_25 = ((1 ? 1 : 1));
                        }
                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 14;i_14 += 1)
                        {
                            var_26 = var_3;
                            var_27 = (!var_13);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_28 = ((var_3 ? var_12 : ((-8000938997749894398 ? (min(-7170689596920231825, 1)) : var_12))));
                                arr_53 [i_7] [i_7] [i_8] [i_16] = var_12;
                            }
                        }
                    }
                    arr_54 [i_7] [i_7] [i_8] = var_13;

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_58 [i_7] [i_8] [i_8] [i_9] [i_17] [i_17] = var_8;
                        arr_59 [15] [i_8] [i_9] [1] = ((var_6 != var_0) / (min(var_11, var_14)));
                    }
                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 14;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_29 = var_0;
                            var_30 = var_1;
                            var_31 = -6571661546405943685;
                            arr_66 [i_7] [i_7] [i_9] [i_8] [i_7] = ((var_12 / var_5) ? var_12 : var_6);
                        }
                        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                        {
                            var_32 = (0 ? var_1 : var_8);
                            var_33 = (max(var_33, var_6));
                            var_34 &= var_13;
                        }
                        for (int i_21 = 0; i_21 < 18;i_21 += 1) /* same iter space */
                        {
                            var_35 = var_2;
                            var_36 ^= -3742399825946478615;
                            arr_73 [12] [i_7] [i_7] [12] [i_8] [i_18 + 3] [i_21] = var_13;
                            var_37 = (max(var_37, var_4));
                        }
                        for (int i_22 = 0; i_22 < 18;i_22 += 1)
                        {
                            var_38 = (var_12 != var_2);
                            var_39 = (0 ? var_1 : 0);
                            var_40 = var_7;
                        }

                        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                        {
                            arr_79 [i_7] [i_18] [i_9 + 1] [i_8] = (var_2 != var_1);
                            arr_80 [i_8] [i_18] [0] [3] [3] [i_8] [i_7] = (var_3 / 2774858748619803057);
                            var_41 -= var_8;
                        }
                        for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                        {
                            arr_85 [i_8] [i_8] [1] [i_24] [i_24] = (var_2 / var_3);
                            arr_86 [i_7] [i_8] [i_8] [1] [i_8] [i_24] = (((var_8 != var_10) != var_4));
                        }
                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            var_42 = var_1;
                            arr_90 [i_8] [i_9] [i_25] [i_25] [6] = 3742399825946478615;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 18;i_26 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 18;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 18;i_28 += 1)
            {
                {

                    for (int i_29 = 0; i_29 < 18;i_29 += 1)
                    {
                        var_43 = var_2;
                        var_44 = ((var_13 ? var_4 : var_1));
                    }

                    for (int i_30 = 3; i_30 < 17;i_30 += 1)
                    {
                        arr_106 [i_26] [i_27] [i_28] [i_30] [i_30 - 2] = 715538929482415887;
                        arr_107 [i_30] [i_28] [i_30] [i_30] [i_26] [i_26] = ((var_0 ? (!1) : (~var_0)));
                    }
                    arr_108 [i_26] [i_27] [i_28] = var_12;
                    arr_109 [i_26] = ((var_12 ? var_12 : var_12));
                }
            }
        }
        var_45 = (min(var_45, (var_12 | var_0)));

        for (int i_31 = 0; i_31 < 1;i_31 += 1)
        {
            var_46 = -1;
            var_47 = var_14;
            arr_112 [i_26] [i_26] = (var_4 / var_1);
        }
        arr_113 [i_26] [i_26] = var_10;
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 18;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                {
                    var_48 = (min(var_48, (((((16865146638749157899 ? var_4 : var_2)) != var_2)))));
                    /* LoopNest 2 */
                    for (int i_34 = 2; i_34 < 16;i_34 += 1)
                    {
                        for (int i_35 = 2; i_35 < 16;i_35 += 1)
                        {
                            {
                                var_49 = var_14;
                                arr_124 [i_26] [i_33] [i_32] [i_35] = var_1;
                            }
                        }
                    }
                    var_50 = var_4;
                }
            }
        }
    }
    var_51 = (((min(0, var_3)) / var_11));
    #pragma endscop
}
