/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 57521;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] |= 0;
        arr_4 [i_0] = ((!(arr_2 [i_0 + 1] [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_2] = 0;
            arr_12 [i_1] [i_2] = ((-(arr_0 [i_2 - 1])));
        }
        arr_13 [i_1] = 2557839625666768038;
        var_12 = var_8;
        arr_14 [i_1] |= var_6;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_13 = ((~((max(818577267, -1820654348)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [i_3] = (max((min(3745810404, (arr_0 [i_7]))), (((arr_23 [i_6 + 1] [4] [i_3] [i_6] [i_6 + 1] [i_6 + 1]) << (((arr_17 [i_6 - 1]) + 31379))))));
                                var_14 = (min(var_14, (((1 < (min(var_10, (arr_25 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [6] [i_6 + 1]))))))));
                                arr_27 [i_7] [i_7] [16] [i_7] [i_7] |= ((var_5 ? (((!((((arr_21 [4] [4] [4]) - (arr_7 [16] [i_4]))))))) : (arr_20 [5] [5] [i_5] [i_5])));
                                var_15 = ((((arr_15 [i_6 - 1]) ? (arr_15 [i_6 - 1]) : (arr_15 [i_6 + 1]))));
                            }
                        }
                    }
                    var_16 += var_6;
                }
            }
        }
        arr_28 [i_3] = ((((min((arr_15 [i_3]), (arr_15 [i_3])))) - (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3])));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_17 += (min(((((arr_18 [i_8] [i_8] [i_8]) || (arr_9 [14])))), (arr_23 [i_8] [i_8] [14] [i_8] [i_8] [i_8])));
        var_18 += ((((-(arr_23 [i_8] [i_8] [10] [10] [i_8] [i_8]))) | (((((arr_0 [i_8]) == (arr_0 [i_8])))))));
    }
    var_19 = (var_3 ? (!36876) : (max(((var_5 ? var_8 : var_10)), (var_4 & var_5))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {

                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    var_20 = (arr_16 [i_11 + 2] [i_11]);
                    arr_40 [i_9] [3] [1] [i_11 + 1] = (max((max(36876, -1820654348)), (arr_24 [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 + 2])));
                    arr_41 [i_9] [i_9] [i_9] = (min((((166 > (arr_7 [i_9] [i_9])))), (max(165, (arr_15 [i_9])))));
                    var_21 += (max(var_8, 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            {
                                arr_48 [i_9] [i_9] [i_9] [i_12] [i_11 + 1] [i_12] |= (1417455174 < var_3);
                                var_22 += ((((max((arr_24 [i_10] [i_11] [i_11 - 3] [i_12] [i_12 + 1]), (min(1847880544, (arr_0 [i_9])))))) ? -168 : (((((arr_46 [i_9] [i_9] [i_11] [i_12] [i_9] [i_13] [i_9]) == (arr_10 [i_10] [i_11 - 1]))) ? (arr_2 [i_13] [i_10]) : ((-(arr_33 [i_9] [i_9])))))));
                                var_23 += (!3476390041);
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    var_24 |= (arr_18 [i_9] [i_9] [i_14]);
                    arr_51 [i_9] |= (((((arr_17 [i_9]) || 96)) ? (arr_39 [i_14] [i_10] [i_9] [i_9]) : (((((arr_17 [i_9]) + 2147483647)) << (((((arr_39 [i_14] [i_10] [i_9] [i_9]) + 20547)) - 8))))));
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_25 = (min(var_25, (arr_49 [i_15 + 1] [15])));
                                arr_60 [i_17] [i_17] [i_17] [i_17] [i_17] [i_16] [i_17] = (((arr_37 [i_16 + 3]) / 65523));
                            }
                        }
                    }
                    arr_61 [i_9] [i_9] [i_9] [i_9] = ((((var_6 ? (arr_0 [i_10]) : 59127)) % (arr_7 [i_9] [i_10])));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            {
                                arr_69 [i_18] [i_18] = (arr_42 [i_9] [9] [i_18] [i_19]);
                                var_26 |= (arr_55 [8]);
                                arr_70 [i_18] = (23932 > var_3);
                            }
                        }
                    }
                    arr_71 [i_10] [i_15] = (((arr_43 [i_9] [i_10] [i_10] [i_15 - 1]) % (arr_65 [i_15 + 1] [i_15] [i_15])));
                    arr_72 [0] [i_15] |= (2147483647 ? (arr_58 [i_15] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15]) : 1);
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 14;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 16;i_22 += 1)
                        {
                            {
                                var_27 |= ((var_9 - ((40 + (arr_20 [i_20] [i_22] [i_10] [i_21 + 1])))));
                                var_28 += (((((max(1545184837, (arr_65 [i_9] [i_10] [i_20]))))) < ((((arr_56 [i_21 + 2] [i_21] [i_21 - 1] [i_21 - 2]) || var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
