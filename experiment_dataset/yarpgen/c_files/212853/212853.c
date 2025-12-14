/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (129 || 257400912)));
                    arr_8 [i_0] [i_1] [i_2] = (max((arr_5 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1])));
                    arr_9 [i_2] [i_2] [i_0] [i_0] = var_0;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] [i_4] [i_5] = (arr_7 [i_3]);
                    var_14 = ((arr_0 [i_4]) ? (arr_0 [i_3]) : (arr_0 [i_4]));
                    var_15 = var_0;
                    arr_21 [i_5] = (arr_10 [i_4]);
                }
            }
        }
        var_16 = (((((-257400912 * (arr_17 [11])))) ? 15843 : ((-257400908 ? -15844 : 8335836712524110461))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_7] [i_8] = (arr_27 [i_6] [i_6] [i_8 + 1] [i_6]);
                    arr_30 [i_6] [11] [i_6] [i_6] = ((((((arr_5 [i_8 - 2] [i_7] [i_8]) + 0))) ? (arr_22 [i_8]) : (!15843)));
                    var_17 = 18446744073709551592;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_18 = (max((((((var_1 ? (arr_2 [i_6]) : (arr_22 [i_6]))) > -257400889))), (((((1647 ? 0 : (arr_25 [i_9] [i_9])))) ? (((var_0 ? (arr_36 [i_6] [i_6] [i_6] [i_6]) : 1))) : ((var_11 ? var_5 : (arr_2 [i_10])))))));
                    var_19 = ((((((var_2 ? (arr_0 [i_10]) : var_2)) | (!var_7))) <= ((((arr_32 [i_10]) ? (((-1 <= (arr_23 [i_6])))) : (arr_37 [i_6] [i_9] [i_10]))))));
                    var_20 = (max((((max(534489718, var_2)) + ((((arr_38 [i_10] [14]) ? 125 : var_12))))), ((((arr_22 [i_9]) + (arr_25 [12] [i_9]))))));
                    var_21 = (max(var_21, (((max((-122 + 0), 6950095779666015467))))));
                }
            }
        }
        arr_39 [i_6] [i_6] = ((+(((arr_38 [i_6] [i_6]) ? (arr_38 [i_6] [i_6]) : 2698))));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    var_22 = (max(var_22, var_11));
                    arr_49 [i_11] [i_12] [i_13] [i_12] = (arr_44 [i_13]);
                }
            }
        }
        var_23 = ((((~((97 ? (arr_41 [i_11] [i_11]) : 257400888)))) > (((((39 ? (arr_42 [1] [i_11]) : 30761)))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_24 *= (((arr_24 [i_14]) ? (288230376151711743 >= -257400888) : -40));
        arr_52 [6] [i_14] = (((arr_23 [i_14]) ? (arr_22 [i_14]) : (((-257400888 > (arr_35 [i_14] [i_14]))))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_25 = 100;
                    var_26 = (var_8 ? 1 : 0);
                    var_27 = (max(var_27, (((((((arr_22 [i_15]) ? 15272 : var_2))) ? (arr_23 [i_15 - 1]) : (arr_35 [i_15 - 1] [i_15 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                var_28 -= (arr_7 [i_18]);
                                var_29 = (min(var_29, (((2501393313971278934 ? 18446744073709551577 : 0)))));
                                arr_64 [i_14] [i_15 - 1] [i_18] [i_17] [i_18] = (((arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1]) >> (((arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1]) - 19132))));
                                arr_65 [i_17] [i_18] [i_17] [i_16] [5] [i_18] [i_14] = (arr_58 [i_14] [i_15 - 1]);
                            }
                        }
                    }
                    arr_66 [i_14] [i_15 - 1] [i_16] [i_16] |= ((var_7 >= (arr_36 [4] [i_15] [i_16] [4])));
                }
            }
        }
        arr_67 [i_14] = -15844;
        var_30 = (arr_59 [i_14] [i_14] [i_14] [i_14]);
    }
    var_31 |= ((var_9 >= (((var_5 > 255) ? (max(var_8, var_3)) : (((max(var_11, 0))))))));
    #pragma endscop
}
