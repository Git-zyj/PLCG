/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 -= (((((arr_11 [i_3] [i_3]) ? 89 : var_4))) ? ((var_2 ? 127 : 11423318228867419963)) : (arr_11 [i_3] [i_1 + 2]));
                                arr_13 [i_3] [i_2] [i_2] |= ((-(arr_0 [i_0 - 3])));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = -641439630;
                                var_16 -= ((!(arr_11 [i_3] [i_4 + 1])));
                            }
                        }
                    }
                    var_17 = 26077;
                    var_18 &= ((var_6 ? (arr_11 [20] [16]) : (arr_5 [10] [i_1] [i_2] [10])));
                }
            }
        }
        var_19 = (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) ? (arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0]) : ((((arr_6 [i_0] [i_0]) ? var_3 : var_14)))));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_0] [i_5] |= (((arr_5 [i_5] [i_0] [i_0 + 1] [i_5]) ? 1 : var_8));
            var_20 = var_11;
            var_21 = (max(var_21, (arr_1 [i_5])));
            var_22 = (min(var_22, ((((arr_17 [7] [i_0 - 2] [i_0 - 3]) ? var_13 : var_1)))));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_23 = ((44781 ? var_10 : (arr_18 [i_0 - 3])));
                    arr_26 [i_0] [i_6] [i_0] = (((var_5 ? 65032 : var_12)));
                    var_24 = (!var_10);
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_29 [13] [i_8] = ((!(((var_10 ? (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 - 3] [i_8]) : ((~(arr_18 [i_8]))))))));
        arr_30 [i_8] [i_8] = (max((max(var_3, ((var_6 ? 32 : (arr_22 [i_8] [i_8]))))), (max((arr_27 [i_8 - 3] [i_8 + 2]), var_3))));
        var_25 = (max(var_25, ((((((10106 >= 255) >> (var_13 - 16496159289628807408))) < ((((max(var_2, 1))) ? (~var_5) : var_14)))))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_44 [i_9] [i_10] [i_10] = (arr_10 [i_11] [17] [i_11] [i_10] [i_9] [8]);
                                var_26 = (((arr_16 [i_9] [i_9]) ? 20080 : -0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_27 = ((+(((arr_10 [i_9] [i_10] [i_11] [i_14] [i_15] [i_15]) ? (arr_10 [i_9] [i_10] [i_11] [i_14] [i_14] [i_15]) : (arr_49 [i_10] [i_14] [i_11] [i_10] [i_9])))));
                                arr_52 [i_15] [i_10] [i_10] [i_10] = (arr_25 [i_9] [i_10] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    arr_58 [i_16] [i_16] [i_16] = (-15289 ^ 1);
                    arr_59 [i_16] [i_16] [2] = ((max((arr_39 [i_16 + 2] [1] [i_16] [i_16 + 2] [i_16] [i_16 + 2]), -5707438450802245600)));
                    arr_60 [i_16] [i_16] [i_16] = 9223372036854775807;
                }
            }
        }
        var_28 = max(((((arr_17 [i_9] [i_9] [i_9]) ? (((var_1 && (arr_33 [4])))) : 35609))), (arr_20 [11]));
        /* LoopNest 3 */
        for (int i_18 = 1; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_68 [i_9] [i_9] [i_19] [i_20] = (arr_35 [i_20] [i_18 + 1] [i_20]);
                        var_29 = ((((max((var_12 >= var_3), 32767))) ? ((((-(arr_20 [i_18]))) | ((((var_13 <= (arr_42 [i_9] [i_9] [i_9] [i_9] [18] [i_9] [i_20]))))))) : (var_7 != var_2)));
                        arr_69 [i_20] [i_20] [i_20] [i_9] = (((var_4 - var_6) ? ((max((arr_64 [i_18 - 1] [i_19 + 2] [i_18 - 1]), (arr_64 [i_19] [i_19 - 2] [i_18 + 1])))) : ((((max((arr_18 [16]), 1778912536))) ? var_12 : (arr_25 [i_18 - 1] [i_18 - 1] [i_19])))));
                        var_30 = ((((max(var_12, (arr_51 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 1] [i_18 + 2])))) ? (max((~var_4), (arr_5 [i_20] [i_18 + 1] [19] [17]))) : ((((!(12 > 1)))))));
                        var_31 = (((-((-(arr_47 [i_20] [i_20] [i_20] [i_9]))))));
                    }
                }
            }
        }
        var_32 = -14240310;
    }
    /* LoopNest 3 */
    for (int i_21 = 3; i_21 < 17;i_21 += 1)
    {
        for (int i_22 = 3; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 18;i_23 += 1)
            {
                {
                    arr_77 [i_21] [i_23] [i_23 - 1] [i_21] = (((511 | -var_13) | (arr_65 [i_21])));
                    arr_78 [i_21] [i_23] [i_23] = ((((arr_12 [i_21 - 2] [i_21] [i_22] [i_22 + 3] [i_23 - 1]) ? var_12 : (arr_12 [i_21 - 2] [i_21] [i_22 - 2] [i_22 - 1] [i_23 - 1]))));
                    var_33 = ((var_10 | (((((arr_1 [i_22 - 3]) && ((max(10, var_13)))))))));
                }
            }
        }
    }
    var_34 = (max(var_2, -var_6));
    #pragma endscop
}
