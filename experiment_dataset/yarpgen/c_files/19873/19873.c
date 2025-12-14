/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_6, var_5) != 0)))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((32640 ? 6 : ((0 ? var_2 : (((-9223372036854775807 - 1) + 9223372036854775807)))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [4] = -381271497;
                        }
                    }
                }
            }
            var_16 &= ((!(((65516 >> (((arr_14 [i_0]) - 1902914806)))))));
            var_17 = var_2;
            var_18 = (21 * 1);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 &= (((-9223372036854775807 - 1) ? 9223372036854775808 : 1));
            var_20 = ((max(var_11, (arr_6 [i_0 - 1]))));
        }
        var_21 = (min((((var_13 ? (arr_19 [i_0 - 2] [i_0 + 1] [i_0 + 1]) : var_13))), ((((max(var_4, var_6))) + ((47 ? 65495 : 2157566170790818543))))));
        var_22 *= var_8;
        var_23 = ((max(var_6, ((var_1 ? (arr_20 [i_0] [i_0] [i_0]) : var_3)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (max((((((162 - (arr_22 [i_6])))) ? (min(255, 9223372036854775805)) : ((min(var_1, var_12))))), (((((3759458362 ? var_8 : -1406123446))) + (max(2610109209085506683, (arr_21 [i_6])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_24 = (arr_21 [i_8]);
                                arr_33 [i_6] [i_6] [i_6] [19] [i_6] &= ((((((((arr_24 [i_6] [21]) ? var_9 : (arr_29 [1] [1] [i_7] [i_9])))) ? (arr_24 [i_6] [i_6]) : 4135273596)) - (arr_24 [i_8] [i_8])));
                            }
                        }
                    }
                    var_25 = (~var_11);
                    arr_34 [i_6] [2] [18] = ((((0 ? 1 : 18446744073709551615)) * -var_3));
                    arr_35 [i_6] [i_7] = ((1 && (((980385551 >> (-310335493 + 310335519))))));
                }
            }
        }
        arr_36 [15] = ((-(((((var_4 ? var_2 : 1))) ? ((1 ? -2610109209085506670 : -301990491)) : 235))));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        var_26 = ((!(((var_13 ? (arr_37 [i_11] [i_11]) : (arr_37 [i_11] [i_11]))))));
        var_27 &= (((((var_4 ? (arr_40 [i_11]) : var_12))) ? (((arr_40 [i_11]) ? 3 : 721283737)) : (((min(var_3, var_2))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        var_28 = (min(var_28, var_0));
        var_29 = (65518 - 12);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                arr_55 [i_13] [i_13] [i_14 + 3] [i_13] [i_13] [i_14 + 3] [i_14] = (((arr_32 [i_12] [i_15 - 1] [i_12] [3] [i_16] [1] [i_16]) >> (((7 < (arr_30 [i_12] [1] [i_14]))))));
                                arr_56 [1] [12] [10] [12] [12] = ((((var_5 ? var_8 : 26924)) + (arr_54 [i_14] [i_14] [i_15 - 1] [i_14] [i_16] [i_14])));
                            }
                        }
                    }
                    arr_57 [i_14] [i_14] [i_14] = (~var_2);
                    var_30 = (((arr_50 [i_14] [i_14 + 2] [i_14 + 4] [i_14 + 2] [i_14 + 2] [i_14 + 1]) - 7));
                }
            }
        }

        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    {
                        var_31 ^= 65535;
                        arr_66 [i_12] = var_7;
                        var_32 = var_3;
                        var_33 = 38999;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_20 = 1; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        {
                            var_34 = var_2;
                            arr_75 [i_17] = ((var_6 >> (158 - 156)));
                        }
                    }
                }
            }
            arr_76 [1] [1] = -var_13;
        }
        for (int i_23 = 3; i_23 < 20;i_23 += 1)
        {
            arr_79 [i_12] [10] = ((var_0 == (arr_29 [i_23 + 2] [i_12] [i_12] [i_12])));
            var_35 = (arr_51 [i_23] [1] [i_23 - 3] [i_23]);
            var_36 = (min(var_36, 0));
        }
        var_37 = var_2;
    }
    var_38 = ((!(((43 ? 1 : 11)))));
    #pragma endscop
}
