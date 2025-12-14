/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 >= 222);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((arr_2 [i_2]) ? (arr_6 [i_1] [i_1] [i_1]) : ((-(arr_6 [i_0] [i_1] [i_1])))));
                    arr_8 [i_1] [i_1] [1] = var_17;
                }
            }
        }
        arr_9 [i_0] = -65;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (arr_5 [1]);
        arr_13 [i_3] = ((-(arr_2 [i_3])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 ^= var_16;
        var_22 = 0;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_27 [i_6] [i_5] [i_5] [i_5] [i_5] = (max(-249, (((max((arr_19 [10] [12] [1] [i_7 + 1]), 467511955))))));
                                var_23 += (((((min((arr_18 [7] [i_7] [i_6] [i_5]), (arr_2 [11])))) ? (((arr_25 [0] [i_5] [i_6] [i_5] [i_7] [i_6]) / -4649)) : (-4781638842413947045 + var_2))));
                                arr_28 [11] [12] [i_6] [4] [i_6] = (max((~var_8), (arr_22 [i_4] [i_6] [i_6] [i_4])));
                                arr_29 [i_4] [i_5] [i_5] [i_6] [i_6 - 2] [i_7] [1] = var_4;
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        var_24 = (max(var_24, 65535));
                        var_25 ^= 0;
                        arr_32 [i_4] [i_6] [i_6] [i_4] = ((var_14 ? (((((((arr_3 [i_5]) ? 10746537692720243655 : (arr_25 [i_4] [i_4] [i_5] [i_6] [i_6] [1])))) ? (arr_24 [i_6] [1] [i_6] [14]) : ((-(arr_23 [14] [i_5] [i_6])))))) : ((-(arr_11 [i_6])))));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_26 ^= -52;
                        arr_36 [i_4] [i_6] [i_6] [i_6] [9] = 4781638842413947045;
                        var_27 = (((((((min((arr_25 [2] [i_5] [i_5] [i_6] [2] [i_6]), (arr_7 [i_6])))) ? (min(2382107408, (arr_24 [i_6] [i_6] [i_6] [i_6]))) : ((((arr_10 [i_4]) ? (arr_23 [i_4] [i_4] [i_6]) : (arr_21 [13] [i_6] [14] [13] [i_6] [i_4]))))))) ? ((7738900846689992568 ^ (((var_9 ? (arr_26 [i_4] [6]) : (arr_1 [i_4] [i_4])))))) : (4855613473803073376 ^ -698136208)));
                    }
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        var_28 = (max((var_11 - 0), (arr_2 [i_5])));
                        arr_39 [10] [9] [i_5] [1] [i_6] [i_6] = 15125;
                        arr_40 [i_11 - 1] [i_6] [i_6] [i_6] [i_6] [i_4] = var_6;
                        var_29 = (arr_20 [i_6 - 1] [i_11 + 1]);
                        var_30 = (min(30, -25));
                    }
                    arr_41 [i_6] [i_6] [i_6] = ((var_5 <= (((arr_16 [i_4] [i_4] [i_6 + 1]) ? (arr_16 [i_4] [i_4] [i_6 + 1]) : (arr_16 [14] [i_5] [i_6 - 2])))));
                    arr_42 [i_6] [13] [i_6] = (max((arr_31 [i_4] [i_4] [9] [i_5] [i_6] [1]), ((-(arr_3 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_31 = ((-8616584714006075140 == (arr_19 [i_13 + 1] [i_13] [i_13 + 1] [i_6 - 3])));
                                arr_51 [i_6] [10] [i_6] [i_5] [i_6] = var_8;
                                arr_52 [i_6] = (arr_47 [i_6] [i_5] [i_6 - 3] [5]);
                                var_32 += (min(((((((-(arr_19 [i_4] [i_4] [6] [i_4])))) ? ((var_5 | (arr_10 [i_12]))) : (((!(arr_34 [i_13] [i_13] [i_12] [i_13]))))))), (((arr_0 [i_12]) ? (arr_20 [i_6 - 1] [i_6 + 1]) : (arr_50 [i_6 + 1] [i_13 - 1] [i_6 + 1] [i_6 - 2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                {
                    var_33 = 1;
                    var_34 = (arr_24 [i_15] [i_14] [14] [i_14]);
                    arr_59 [i_4] [i_4] [1] [i_15] = ((arr_16 [i_4] [i_14] [i_14]) ? ((~(arr_49 [i_14]))) : (max((max((arr_45 [i_4]), var_6)), var_15)));
                }
            }
        }
        var_35 ^= ((~(arr_19 [i_4] [i_4] [i_4] [i_4])));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        var_36 = (((((((max(var_16, -1))) ? var_7 : (((!(arr_60 [i_16]))))))) || -54));
        arr_63 [i_16] [i_16] = (max(((-54 ? -76 : -8616584714006075140)), (((7154715268059248937 ? (arr_62 [i_16] [i_16]) : 27824)))));
    }
    #pragma endscop
}
