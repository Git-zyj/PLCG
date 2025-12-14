/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((var_5 ? var_8 : var_12))), (max((max(var_6, var_2)), -192))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_16 *= ((~(arr_4 [i_0] [i_1])));
                        var_17 = (max(var_17, ((((arr_11 [i_1] [i_1] [i_2] [1] [i_1]) - (arr_10 [10] [10] [i_1] [10] [i_2] [i_3]))))));
                    }
                    arr_14 [i_0] = (!92);
                    var_18 = (arr_8 [i_0]);
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = (((((arr_11 [10] [i_1] [i_1] [5] [i_0]) <= (((-9 ? var_14 : var_13))))) ? ((((max(184, var_12))) ? 232 : (min(4267554394, (arr_4 [i_0] [7]))))) : (min(((178 ? 26194 : var_5)), (var_2 + 112)))));

                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [2] &= (min(((((((arr_18 [i_0] [4] [i_0] [i_1] [i_4] [i_5]) ? 96 : var_2))) ? (min((arr_1 [i_0]), 9662)) : 2250816266)), (((((max(var_2, (arr_1 [8])))) ? -var_10 : ((max((arr_16 [5]), (arr_0 [i_0] [i_5])))))))));
                        var_20 ^= (arr_9 [i_5 - 2] [i_5 - 2] [i_1] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_4] = ((-((-(min((arr_1 [i_0]), 174))))));
                                arr_28 [i_0] [i_4] [i_0] = ((~(arr_6 [i_0] [i_1] [i_4] [i_6])));
                                var_21 = (max(var_0, (((((max(var_0, 133))) == -139)))));
                                var_22 = (+-111);
                            }
                        }
                    }
                    var_23 = (((((~(arr_13 [i_0] [i_0] [i_0])))) ? (arr_13 [i_0] [i_1] [i_4]) : 6));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_24 = ((+(((-127 - 1) ? (arr_10 [i_9] [9] [3] [i_9 + 1] [i_9] [i_9 + 2]) : (arr_10 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 2])))));
                                var_25 *= ((+(min(((((arr_19 [i_0] [i_1] [4]) > (arr_4 [i_0] [i_1])))), (arr_10 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_8 + 2] [i_8 + 1] [i_8 - 1])))));
                                var_26 = (max(var_26, (((!(min((!var_11), ((-48 && (arr_31 [i_4] [0] [0]))))))))));
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_0] = (((arr_5 [i_0] [i_0] [i_1]) ? (min(2104651231, (arr_5 [i_1] [i_0] [i_0]))) : ((max(var_13, (arr_5 [10] [i_0] [i_1]))))));
                var_27 = 213;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            {
                arr_40 [i_10 + 1] = (max((((!((min(var_13, 4294967295)))))), (arr_38 [i_10] [i_10] [i_11])));
                arr_41 [i_10] [i_11] [i_11] &= ((max((arr_39 [i_11 - 1]), -4)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {
            {
                var_28 = (~193);
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_29 = (min(111, 202));
                                var_30 *= ((!((min((arr_46 [i_14] [i_13 + 3] [i_12]), (arr_52 [i_13] [i_13] [i_13 - 1] [i_12] [8]))))));
                                arr_56 [5] [0] [i_14] [i_15] [i_13] [i_16] = (max(((max((arr_55 [i_13 - 2] [i_13] [i_13] [i_13] [i_13]), var_3))), (max(1086463611, (arr_51 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 1] [13])))));
                                var_31 = (arr_49 [7]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            {
                arr_62 [i_18] = (max(9, 384));
                arr_63 [i_18] = (max(-112, (max((((arr_61 [i_18] [9] [i_18]) ? (arr_60 [i_18]) : var_8)), var_12))));
                arr_64 [i_18] = (~2048);
                arr_65 [i_18] = var_13;
                var_32 = ((-(arr_60 [i_18])));
            }
        }
    }
    #pragma endscop
}
