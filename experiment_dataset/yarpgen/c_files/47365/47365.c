/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        arr_3 [i_0] = var_9;
        var_19 = ((-27222 >= ((min((arr_0 [i_0]), var_4)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = arr_5 [i_0];
            arr_7 [i_0] = ((!(arr_0 [i_0])));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, (max(((min(var_2, (arr_2 [i_0 + 2])))), (var_7 & var_3)))));
                    arr_14 [i_0] [i_2] [1] [i_3] = var_13;
                    var_21 = ((!(arr_5 [i_0])));
                    arr_15 [i_0] [i_2] [i_2] [i_3] = (min((arr_2 [2]), (min(18446744073709551603, (arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_22 &= (arr_9 [i_0] [i_0]);
                                arr_20 [i_5] [i_0] [18] [i_0] [18] = ((!(arr_0 [i_0])));
                                var_23 = min((min((min(18446744073709551597, (arr_12 [i_0] [i_0] [i_4] [i_5]))), (arr_18 [i_4] [i_4 + 1] [i_0] [i_0] [i_3] [i_3]))), (((!((min((arr_8 [i_0] [i_2] [i_5]), var_15)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_24 [i_6] = (arr_13 [i_6] [i_6]);
        var_24 |= var_15;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_27 [i_7] = var_1;

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_25 = (arr_28 [i_7] [i_7] [2]);
            var_26 = ((var_3 ? ((((((!(arr_28 [i_7] [i_8] [i_8])))) | (((!(arr_25 [i_7]))))))) : (arr_29 [i_7] [i_7] [i_7])));
        }
    }

    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    var_27 = (min(((min(var_4, (arr_17 [i_11 + 1] [i_11] [i_11] [i_11 + 1])))), 18446744073709551580));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_28 = (arr_26 [i_10 - 3] [i_12]);
                                arr_43 [i_13] [i_10] [i_10] = -124;
                            }
                        }
                    }
                }
            }
        }
        arr_44 [i_9] [12] = 18446744073709551614;
    }

    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_29 = (min(var_29, 4294967281));
            arr_50 [i_14] |= (min((arr_18 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (((var_12 ? var_0 : (arr_45 [i_14] [i_15]))))));
            var_30 = var_0;
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        arr_60 [i_18] [i_17] [0] [i_16] [0] [i_14] = min((arr_28 [i_14] [i_14] [i_18]), (min(4294967267, (arr_34 [i_14]))));

                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            arr_64 [i_19] = ((((min(var_7, var_7))) + var_4));
                            var_31 = (min(var_31, ((((((!((min(32752, (arr_33 [i_16] [i_16]))))))) + (arr_51 [i_14] [i_16] [i_14]))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_20 = 1; i_20 < 7;i_20 += 1)
            {
                var_32 = (min(var_32, -9205483688495264092));
                var_33 = 19926;
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
            {
                arr_73 [i_14] [i_14] [i_16] [i_21] = ((((((arr_23 [i_14]) ? var_0 : var_14))) ? var_1 : (((arr_62 [i_14] [i_16] [i_21] [i_16] [i_21] [i_16]) + var_0))));
                var_34 = (!var_14);
            }
            for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
            {
                var_35 = ((var_2 ? (var_14 & var_9) : ((max(var_0, (((!(arr_33 [i_14] [8])))))))));
                var_36 = var_10;
            }
            var_37 = -9205483688495264107;
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 8;i_23 += 1) /* same iter space */
        {
            var_38 = (!var_3);
            arr_78 [4] [i_23] = (((arr_54 [i_14] [i_14] [8]) / (arr_12 [i_23] [i_14] [4] [i_23 + 1])));
            var_39 = var_5;
        }
        for (int i_24 = 1; i_24 < 8;i_24 += 1) /* same iter space */
        {
            var_40 = min(2039538647, 1);
            var_41 = -104;
            arr_83 [i_14] [i_24] [i_24] = var_3;
            arr_84 [i_14] [i_24] [i_24] = var_10;
        }
        arr_85 [i_14] = var_13;
        arr_86 [i_14] = 1063460798;
        arr_87 [3] = var_11;
    }
    var_42 = (max(((43459 ? (max(var_1, var_6)) : var_10)), ((min(((min(var_9, var_4))), (min(var_6, var_8)))))));
    #pragma endscop
}
