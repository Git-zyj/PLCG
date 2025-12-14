/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(6, (((((max((arr_2 [i_0]), 8548968668988920045))) ? (arr_3 [i_1]) : ((~(arr_7 [i_0]))))))));
                arr_8 [i_0] = (((-(((!(arr_4 [i_0])))))));
                arr_9 [i_0] = (min((arr_3 [i_1]), (arr_3 [i_1 + 1])));
                var_19 -= (((((((min((arr_3 [i_0]), (arr_4 [6]))) != ((var_14 ? (arr_1 [1]) : (arr_7 [4]))))))) != 2603476990917209232));
                arr_10 [i_0] = -124;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_20 = ((~(((arr_11 [18] [i_2]) | (arr_12 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_4] = (arr_19 [i_5] [i_4] [i_3] [i_2]);
                        arr_22 [i_2] [i_3] [i_4] [i_4] = (arr_15 [i_3] [i_5]);
                        var_21 = (var_16 | (((arr_14 [i_3] [i_3]) ? (arr_15 [i_3] [i_3]) : var_15)));
                    }
                }
            }
        }
        var_22 -= ((1 <= (arr_12 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 = (arr_4 [i_6]);
        var_24 = (arr_5 [i_6] [i_6] [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_25 = (max(var_25, ((((arr_32 [i_8 + 2] [i_8 - 1]) ? var_14 : 1)))));
                        var_26 = (((arr_16 [i_7]) <= ((((arr_31 [i_7] [14] [i_10]) ? var_5 : (arr_13 [i_7] [i_8] [i_10]))))));
                        var_27 = (((arr_15 [i_8 + 2] [i_8 + 1]) & (arr_15 [i_8 + 2] [i_8 + 1])));
                    }
                }
            }
        }
        arr_38 [i_7] [i_7] = (((arr_19 [i_7] [11] [i_7] [i_7]) && (arr_19 [i_7] [i_7] [i_7] [13])));
        var_28 = (arr_33 [i_7]);
        var_29 = (max(var_29, ((111 ? 1 : 1))));

        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            arr_41 [i_7] [i_7] = (((arr_13 [21] [i_11 - 2] [i_11]) == (arr_13 [i_7] [i_11 + 1] [i_7])));

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_30 -= arr_31 [i_12] [i_12] [i_12];
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_31 = (max(var_31, var_4));
                            var_32 = (((18703 >= 1) ? (arr_16 [i_14]) : (((var_15 ? (arr_30 [i_14]) : 1)))));
                            arr_49 [i_7] [i_11 + 1] [i_7] [i_7] [i_7] = (((arr_27 [i_7]) > var_0));
                            arr_50 [i_7] [i_11] [i_11] [i_13] [i_7] = (arr_44 [i_13 + 1] [i_11 - 1] [i_7]);
                        }
                    }
                }
            }
            for (int i_15 = 4; i_15 < 14;i_15 += 1)
            {
                arr_53 [i_7] [i_7] [i_11] [i_15] = (arr_13 [i_7] [i_11] [i_15]);
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            arr_58 [i_17] [i_17] [11] [i_7] [8] [i_11] [i_7] = var_0;
                            var_33 -= (((((var_10 != (arr_37 [i_17] [i_16] [i_15] [i_11] [i_7] [i_7])))) << (((((arr_19 [i_7] [i_7] [i_7] [i_7]) << (((arr_12 [i_11 + 1] [i_7]) - 99)))) - 7594005841248322167))));
                        }
                    }
                }
                var_34 = (arr_29 [i_15] [i_7]);
                var_35 = (((arr_34 [i_7] [i_11] [i_7] [i_7]) ? (arr_34 [i_7] [i_11] [i_11] [i_11]) : (arr_34 [i_7] [i_11] [i_7] [i_15])));
                arr_59 [i_7] = (~19);
            }
        }
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_36 = ((-(((arr_46 [i_7] [i_18] [i_18] [i_19] [i_19] [i_19]) ? (arr_29 [i_7] [i_7]) : (arr_61 [i_7])))));

                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    var_37 = (max(var_37, (((-(arr_63 [i_7] [14] [i_7] [i_7]))))));
                    arr_68 [i_7] [i_20] [i_19] [i_18] [i_7] = ((-(arr_45 [i_7])));
                }
            }

            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_38 = (((var_1 ? (arr_33 [i_7]) : 1)));
                var_39 -= (((arr_43 [i_7] [i_21]) ? (arr_43 [i_7] [i_18]) : (arr_43 [i_21] [i_18])));
                arr_72 [i_7] [i_18] = arr_48 [i_7] [i_7] [i_7] [i_7] [i_7];

                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    arr_77 [i_7] [i_21] [i_21] = ((1873589357 ? (arr_20 [i_21] [i_21] [i_21] [i_21]) : 1));
                    arr_78 [i_7] [i_21] [i_7] [i_18] [i_7] = ((-(arr_60 [i_7])));
                }
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            arr_83 [i_7] [i_7] [i_7] [i_7] [i_7] = ((-128 > (arr_67 [i_24] [i_7] [i_21] [i_18] [i_7] [i_7])));
                            var_40 = ((~(arr_69 [i_23] [i_18] [13])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
