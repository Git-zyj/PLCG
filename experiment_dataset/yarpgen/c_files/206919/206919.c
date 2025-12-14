/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, (((27499 ? var_12 : (arr_0 [i_0] [i_0]))))));
        arr_4 [9] [9] = (max(var_13, (arr_0 [i_0] [i_0])));
        var_18 = -27500;
    }
    var_19 = (max((((-(~var_1)))), var_3));
    var_20 = var_4;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [1] = (arr_3 [i_1] [i_1]);
        var_21 = (min(var_21, ((min(var_15, (!var_2))))));
        var_22 = arr_0 [i_1] [13];
        var_23 = var_7;
        var_24 = (max(var_24, (max(((-(arr_3 [i_1] [i_1]))), (arr_6 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_25 = (-(arr_11 [1]));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_26 -= (arr_11 [i_2]);
            arr_17 [i_3] = var_1;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_21 [3] [3] [i_4] = ((~(((min(var_3, 27500))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_27 += ((var_9 ? ((((!30352) + var_8))) : (((arr_9 [i_2] [i_2 + 1]) ^ (arr_30 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            var_28 = var_1;
                            var_29 = (min((((-(arr_28 [i_2 + 1] [i_5 + 4] [i_6 - 2] [i_7 - 1] [i_7] [i_7])))), (((arr_20 [i_4] [i_4]) ? (((min((arr_3 [5] [5]), (arr_29 [i_2] [i_4] [12] [0] [i_5] [14] [i_7]))))) : var_15))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            var_30 = -27496;
            var_31 = (max(var_31, (((-(arr_25 [i_8 - 3] [i_2]))))));
            arr_35 [i_8] = (((arr_13 [i_8 + 2] [10]) ? var_6 : (arr_2 [i_8] [i_2])));

            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_32 = (((((max(var_3, (arr_0 [12] [i_8]))) - var_0)) % -27514));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_44 [i_2 + 1] [i_11] [8] |= var_9;
                            arr_45 [9] [i_8] [i_9 - 1] [i_8] [i_2] = ((+((~(((arr_0 [i_2] [i_2]) / (arr_33 [i_8] [i_8] [10])))))));
                            arr_46 [i_8] [0] [i_9] [3] [i_8] = ((~((~(arr_26 [i_11] [i_8] [i_8] [i_2])))));
                        }
                    }
                }
            }
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_33 = var_11;

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_34 = (arr_15 [10]);
                        arr_55 [i_8] [i_8 + 1] [i_8 + 1] [i_8] = ((-(arr_20 [i_12] [i_2])));
                        var_35 = var_12;
                        arr_56 [i_8] [i_8] [i_8] [i_8] [13] = var_16;
                    }
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        arr_59 [i_2] [i_8 + 1] [i_8] [i_13] [i_15] [1] [i_15] = var_10;
                        arr_60 [i_8] [i_13] [i_8] [i_12] [i_8] [i_8] [i_2 + 1] = var_7;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_36 = (min((arr_48 [i_16] [i_12] [i_8]), (arr_43 [i_2 + 1] [i_8 - 3] [i_2 + 1] [i_8 - 2] [i_12 - 1])));
                        arr_63 [i_8] [i_13] [i_8] = (min((((var_15 <= (arr_54 [i_2] [5] [i_12] [i_13] [i_2])))), (arr_34 [13])));
                        arr_64 [i_8] [i_2] [i_2] [i_8] [i_8] = (arr_19 [i_16] [1]);
                    }
                    arr_65 [i_8] [i_13] [i_8] [i_2] [i_2] = var_5;
                    var_37 = (arr_39 [i_2] [i_13]);
                }
                var_38 = ((-var_10 ^ (min(var_16, ((-(arr_31 [i_8])))))));
            }
            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                arr_69 [i_8] = (!var_6);
                arr_70 [i_2] [13] [i_8] [13] = (max((min((((arr_20 [8] [i_8]) - (arr_3 [0] [0]))), var_6)), var_11));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_39 = (arr_12 [13]);
                arr_74 [i_18] [i_8] [i_8] [i_2] = ((((min((arr_66 [i_8 - 2] [i_8 - 2] [7]), (arr_66 [i_8 - 2] [i_8] [12])))) * -27500));
            }
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 13;i_21 += 1)
                    {
                        {
                            arr_82 [i_8] = ((var_12 ? (max((((arr_81 [i_21] [i_8] [i_8] [i_19] [i_8] [i_8] [i_2]) ? var_9 : (arr_0 [14] [5]))), (!var_2))) : (27488 || -27501)));
                            arr_83 [i_8] [i_8] [i_8] [i_8] [i_8] = var_10;
                            arr_84 [4] [4] [i_19] [i_19] [i_19] [i_8] [i_19] = var_16;
                            var_40 |= (((((((((arr_29 [i_2] [i_8 - 1] [i_20] [i_20] [i_21 + 2] [6] [6]) + (arr_38 [i_2 + 1] [i_2 + 1] [i_19] [13])))) ? -var_8 : (-27487 + var_10)))) ? (arr_58 [14] [i_20] [8] [10] [i_20] [i_2 + 1]) : (((((arr_52 [4] [4] [0] [i_20]) + (arr_42 [0] [0] [i_19] [11])))))));
                            var_41 = ((((~(arr_53 [7] [7] [7] [7] [7]))) ^ ((~(arr_53 [i_21] [i_20] [i_2] [0] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
