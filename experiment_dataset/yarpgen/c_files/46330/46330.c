/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_12 [6] [i_1] [5] [i_1] [6] [i_2] = ((var_8 ? (min((min(18446744073709551605, 11038857512015308066)), var_2)) : (((-2147483647 - 1) ? 2147483647 : var_6))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((max(var_1, 2147483647)));
                            var_11 &= (max((arr_4 [i_1 + 1]), var_0));
                        }
                    }
                }
            }
            var_12 -= min((arr_7 [i_0] [i_1 + 3] [i_1] [i_0]), (max((arr_7 [i_0] [i_1 + 4] [i_0] [i_1 + 3]), var_3)));
        }
        var_13 = ((-((((!(-2147483647 - 1))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_24 [i_7] [i_0] [i_6] = (!var_0);
                                var_14 = var_6;
                            }
                        }
                    }
                    var_15 = ((((((arr_2 [i_6 + 1] [i_5] [i_6]) ? (arr_2 [i_6 - 1] [i_5] [i_6 + 3]) : var_0))) ? var_8 : (arr_11 [i_6 + 3] [i_5] [i_6 - 1] [i_5] [i_6 - 1] [2])));
                    arr_25 [i_0] [5] [i_6] [i_6] = (((-2147483647 - 1) ? var_1 : var_7));
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            var_16 = (min(var_16, (arr_26 [i_9 + 1])));

            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                var_17 = var_7;
                arr_30 [13] [i_10] [2] = var_8;
            }
            var_18 -= var_10;
        }
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_19 &= var_5;
                        var_20 = ((max(var_4, 2147483647)));
                    }
                    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (arr_31 [i_13] [i_13])));
                        var_22 = (!(((var_4 ? var_10 : var_3))));
                    }
                    for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((~(((~-2147483647) ? ((((!(arr_49 [i_16] [i_13] [i_13] [i_12] [i_12] [i_11]))))) : ((var_10 ? 2147483647 : var_1)))))))));
                        arr_50 [i_12] [i_11] [i_12] [i_11] = ((!(~var_7)));
                    }
                    var_24 = (min(-2147483647, -2147483647));
                    var_25 = 2147483647;
                }
            }
        }
        var_26 = (min(var_26, ((max((min(var_7, ((-(arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [5]))))), var_2)))));

        /* vectorizable */
        for (int i_17 = 2; i_17 < 16;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    {
                        var_27 = arr_49 [2] [i_19] [i_17] [i_17] [i_11] [i_11];
                        var_28 ^= var_3;
                        var_29 = (min(var_29, (((var_3 ? var_4 : (arr_37 [i_19] [i_19 - 2] [11] [i_19 + 1]))))));
                        arr_58 [i_11] [i_11] [i_11] [i_11] = (((-2147483647 - 1) ? ((2147483647 ? (arr_31 [i_19] [i_17]) : (-2147483647 - 1))) : -2147483647));
                    }
                }
            }
            var_30 = (arr_52 [i_11] [1] [i_17]);
        }
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            arr_62 [i_11] [i_11] = (max(var_3, ((((max(var_10, var_5))) ? ((min(2147483647, var_0))) : ((var_5 ? var_6 : var_5))))));
            arr_63 [i_11] [i_11] = min(var_5, (arr_52 [i_11] [i_20] [i_20]));
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            for (int i_22 = 4; i_22 < 19;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 18;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 17;i_24 += 1)
                        {
                            {
                                var_31 = (min(var_31, var_0));
                                var_32 = ((var_4 ? (arr_33 [i_21] [i_11]) : var_0));
                            }
                        }
                    }
                    var_33 = ((-2147483647 - 1) ? 2147483647 : ((var_3 ? 2147483647 : -2147483647)));
                    var_34 = (min(((((var_0 ? (arr_35 [i_11] [i_21]) : var_5)))), (arr_48 [i_11] [i_11] [i_11] [i_11])));
                    arr_75 [i_11] [4] [i_11] = var_1;
                    arr_76 [i_11] = 2147483647;
                }
            }
        }
    }
    var_35 = (min(var_35, 2147483647));
    #pragma endscop
}
