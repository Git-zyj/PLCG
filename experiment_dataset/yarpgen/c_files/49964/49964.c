/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((~(max(var_16, 4294967295)))) | var_11)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, var_6));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = var_16;
            arr_7 [i_0] [i_1] [i_1] = 1;
            var_23 = (((((arr_6 [i_1] [i_1] [i_1]) - ((var_8 ? var_19 : -3310302609303054047)))) ^ 1));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_24 = (arr_17 [i_0] [0] [i_3] [i_4] [10]);
                            var_25 -= var_11;
                            var_26 = ((~(var_12 > var_1)));
                        }
                    }
                }
                var_27 = (max(var_27, ((var_8 ? 1 : (arr_16 [i_0] [i_2] [i_0])))));
                arr_18 [i_0] [12] [i_3] [i_3] = 1;
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_21 [1] [i_6] [i_6] = -82;
                arr_22 [i_0] [11] [i_6] = 2147483647;
            }

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_28 = (max(var_28, 12866));

                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_29 = ((var_13 && ((max((((!(arr_20 [i_8] [i_7])))), 9759909878763836886)))));
                    var_30 = 3633375292283094378;
                    arr_29 [i_7] [i_7] = ((var_10 ? ((((1 != var_14) > (((arr_0 [i_0]) | 1))))) : ((var_19 | ((((arr_4 [i_0] [i_2] [i_0]) != var_12)))))));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_31 = var_0;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_36 [4] [i_0] [i_7] [i_9] [i_7] = ((((4503599627370495 ? (arr_9 [i_9]) : 127294729))) & var_10);
                        var_32 = (((arr_35 [i_0]) != ((((arr_30 [i_7] [0] [1] [i_7]) ? var_5 : 1)))));
                        var_33 = -24639;
                    }
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_7] [i_2] [1] [i_11] = -3633375292283094378;
                    var_34 = (-((((arr_1 [i_11]) >= (arr_1 [i_2])))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_45 [i_7] = var_11;
                    var_35 = (max(var_35, (((((var_6 ? var_5 : 1)) >> (((arr_16 [i_0] [i_2] [i_0]) - 77)))))));
                    arr_46 [i_12] [i_7] [i_7] [i_7] [7] = var_19;
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_36 -= -var_12;
                            var_37 -= (((arr_40 [i_2] [i_2] [i_2] [i_2] [i_0]) ? (max((((var_14 * (arr_9 [i_14])))), (-1453251875 * 0))) : ((min((arr_2 [i_14 + 1]), (-1453251878 / -53))))));
                            arr_53 [i_0] [i_0] [10] [i_14] [i_14] = var_6;
                            var_38 = (max(var_38, var_13));
                        }
                    }
                }
                var_39 |= (arr_33 [i_0] [i_0] [i_0] [7] [6]);
            }
            arr_54 [i_0] [i_2] [i_2] = (arr_3 [i_2]);
            var_40 = ((!(((arr_8 [i_0] [i_2]) && (arr_8 [i_0] [i_2])))));
            var_41 = var_11;
        }
        arr_55 [i_0] = ((((max(9759909878763836910, -1))) ? ((min(-1, (((arr_49 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [2] [i_0]) : 15383))))) : (arr_48 [i_0] [i_0])));
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    {
                        arr_68 [1] [i_19] [i_19] [i_16] = ((var_19 ? (((max((arr_62 [i_17 + 1]), 1)))) : ((9759909878763836881 ? (arr_62 [i_17 - 2]) : var_8))));
                        arr_69 [i_19] [i_16] [i_17] [i_18] [i_18] [i_19] = arr_58 [i_17];
                    }
                }
            }
        }
        var_42 = (max(var_42, (((((((arr_57 [9]) ? 163167497 : var_4))) ? ((var_19 ? (max(16157765864303485968, 131)) : (((var_9 ? var_13 : var_13))))) : ((max(((var_16 / (arr_60 [i_16] [9]))), 1))))))));
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        var_43 = ((!(arr_57 [i_20])));
        var_44 = (arr_58 [1]);

        /* vectorizable */
        for (int i_21 = 3; i_21 < 13;i_21 += 1)
        {
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 13;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            var_45 = var_10;
                            var_46 = ((-1 >= (~var_8)));
                        }
                    }
                }
            }
            arr_89 [i_21] [i_20] [i_21] = (((var_0 != 1453251854) ? 17545612794649716469 : var_9));
            var_47 -= var_8;
        }
        for (int i_25 = 2; i_25 < 10;i_25 += 1)
        {
            var_48 *= (max(((1 ? ((107 ? (arr_58 [2]) : var_10)) : 1)), (arr_75 [i_20])));
            arr_94 [i_20] [i_25] = (arr_58 [i_20]);
            arr_95 [i_20] [i_20] [i_25] = (!3792892898963131411);
        }
    }
    var_49 = (((min(var_12, var_1))));
    var_50 = (821730040 != -179875926);
    #pragma endscop
}
