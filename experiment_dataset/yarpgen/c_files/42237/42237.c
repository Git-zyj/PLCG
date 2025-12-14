/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 *= ((-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = 24;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 *= (arr_6 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_15 [i_3] [i_3] [i_0] [i_1] [i_0])));
                                arr_16 [i_0] [i_0] [i_0] [i_3] = (arr_14 [i_4 + 3] [i_3 - 3] [i_3 - 3] [i_2 - 1] [i_2 - 1] [i_1]);
                                var_15 = (((arr_9 [i_0] [i_1] [i_3 + 1]) ? (((arr_8 [i_0] [4] [i_0]) << (var_10 - 9935811876467304391))) : -7525));
                                var_16 = 27257;
                            }
                        }
                    }
                    arr_17 [i_2] = 1;
                }
            }
        }
        var_17 = (((~3730794101) != var_1));
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        var_18 = (max(var_18, 24));
        var_19 &= (min(((min(7195684735297566862, (arr_20 [i_5])))), (((arr_19 [i_5] [i_5]) ? ((((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_20 [i_5])))) : (min((arr_18 [i_5]), 7165770297535215349))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_20 = var_9;
                            arr_32 [i_5 + 1] [i_5] [16] |= ((-616799361 && ((max(var_0, (arr_24 [i_5] [i_6 + 2] [i_9] [i_6 + 2]))))));
                            var_21 = ((-((min(235, (max(255, (arr_30 [i_9] [i_6] [i_5] [i_6] [i_5]))))))));
                        }

                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_22 = (~var_4);
                            arr_36 [i_6] [i_6] [i_6] [i_6 + 2] [i_6] [i_8] [i_6] = ((((max((min(20, 1026024084629211482)), 222))) ? ((((!((min((arr_34 [i_5] [i_6]), -45))))))) : ((-(((arr_21 [i_5 - 2] [i_7]) ? 131 : var_6))))));
                            var_23 = var_9;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] = 3730794101;
                            arr_40 [i_8] [i_8] [i_7] [i_6] [i_8] = ((!(arr_18 [i_5 + 1])));
                            var_24 += (((((24 - (arr_25 [i_6] [i_8 - 1] [i_11])))) ? (arr_24 [i_8] [i_7] [i_7] [i_8]) : (arr_19 [i_5] [i_7])));
                        }
                        var_25 = ((-8759 ? ((((((arr_23 [i_6] [i_6]) ? (arr_25 [i_8] [i_7] [i_5]) : 23884)) * 255))) : (arr_27 [i_5] [i_6] [23] [i_8])));
                        var_26 = 2698598724260250336;
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_27 = (max(var_27, 65535));
                        var_28 += ((+((((max((arr_24 [i_7] [i_7] [i_7] [i_7]), (arr_30 [17] [3] [i_6] [i_6] [i_5 - 2]))) >= (arr_38 [i_5]))))));

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_47 [i_5] [i_6] [i_13] [i_12] [i_13] [14] [i_5] = ((!(!7195684735297566862)));
                            var_29 += 125;
                            var_30 *= -var_10;
                            var_31 = (max(var_31, ((max(var_4, (arr_21 [i_6 - 1] [i_5 - 2]))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_32 ^= 196;
                            var_33 ^= (((((-110 ? 44 : (arr_33 [i_5] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_5] [i_6 + 2] [i_14])))) / var_6));
                            arr_50 [i_5] [i_5] [i_6] [i_7] [i_12] [i_5] [i_14] = (arr_48 [i_5] [i_5] [i_5] [i_12] [i_14] [i_14]);
                        }
                        var_34 = ((~((max(2322, var_8)))));
                    }
                    arr_51 [i_5] [i_5 - 2] [i_5 - 1] = (min(-2323, (arr_25 [i_6 - 1] [i_5 + 1] [i_5 - 2])));
                }
            }
        }
    }
    var_35 = (max(var_35, var_5));
    #pragma endscop
}
