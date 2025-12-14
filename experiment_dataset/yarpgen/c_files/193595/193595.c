/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((113 | (arr_0 [i_0])));
        arr_4 [7] [i_0] |= -113;
    }
    var_11 |= (var_3 | var_6);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            {
                arr_11 [13] [i_1] [7] = arr_1 [i_1];

                for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_12 ^= -var_1;

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_13 = (min(var_13, (arr_16 [i_1] [i_2 - 1] [i_3] [i_3 + 1])));
                        arr_19 [i_2] [i_4] = (min(var_2, ((var_9 ? 904734572495954629 : (arr_10 [i_2 - 1] [i_2 + 1])))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_22 [i_3] [i_1] = -1098348281;
                        arr_23 [i_1] [i_2 + 1] [i_2 + 1] [i_1] = (1528093656 < 576459652791795712);
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_26 [i_1] [i_2 + 1] [i_3] [i_2 + 1] = 25787;
                        arr_27 [i_1] [i_2] [i_2 - 1] [i_3] [i_6] = (arr_2 [i_6]);
                        arr_28 [i_6] [15] [9] [i_1] = ((((15621 ? (arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1]) : (arr_21 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) << ((((((~(arr_5 [i_2 + 1] [i_2 + 1]))) + 22676)) - 17))));
                        arr_29 [4] [1] [i_3] [i_3] [i_3] [i_3] = 904734572495954613;
                    }
                }
                for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_39 [i_1] [i_2] [i_7] [i_8] [i_8] [i_8] [i_7 + 2] = (643994345779156990 || -1098348281);
                                arr_40 [i_1] [i_1] [i_7 - 4] [i_1] [i_8] [i_7 - 4] [i_7 - 4] &= 100;
                            }
                        }
                    }
                    arr_41 [i_1] [i_2 + 1] [7] [i_1] = var_0;

                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_10] [1] [1] [i_1] = ((((max((arr_12 [i_2 - 1] [i_7 - 3]), (arr_12 [i_2 + 1] [i_7 - 1])))) != ((min((arr_37 [i_1] [10] [13] [1] [i_2 - 1] [i_7 + 1] [i_10]), (arr_10 [i_2 - 1] [i_2 + 1]))))));
                        arr_46 [i_10] [i_7] [i_7] [i_1] [i_1] [i_1] |= (arr_5 [i_1] [i_2]);
                        var_14 = var_2;
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_52 [i_1] [i_1] [i_2] [i_2] [i_7] [i_11] [i_12 - 1] = 1098348262;
                            arr_53 [i_1] [i_1] [15] [i_2] [i_7] [i_7] [i_12] = (((arr_47 [i_2 + 1] [i_2 + 1] [i_12 - 1] [i_12]) ? (((((arr_36 [i_1] [i_2 - 1] [i_7 + 2] [9] [i_2 - 1]) + (arr_37 [i_1] [i_1] [i_1] [i_1] [1] [i_1] [i_1]))))) : -1098348283));
                        }
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            arr_58 [i_1] [i_2] [i_2] [i_7] [i_11] [i_13] = 52502;
                            var_15 *= ((12330 - (1462763173 * 0)));
                        }
                        arr_59 [i_1] [i_1] [i_1] [i_1] [i_11] = min(var_7, (arr_1 [i_2]));
                        var_16 = ((((((arr_15 [9] [9] [i_7 - 4] [7]) - 1098348280))) - (((arr_15 [8] [i_1] [i_7 - 4] [i_7]) ? (arr_15 [i_7 - 2] [1] [i_7 - 4] [i_7 - 4]) : (arr_24 [9] [9] [i_7 - 4] [9] [9])))));
                    }
                    for (int i_14 = 3; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_17 = (min((min(-933216298, 3)), (arr_33 [i_1] [i_2] [10] [10] [i_7])));
                        var_18 = ((((((arr_61 [i_1] [i_1] [i_1]) ? 117 : 51))) ? var_8 : (!65535)));
                    }
                    for (int i_15 = 3; i_15 < 12;i_15 += 1) /* same iter space */
                    {
                        arr_64 [i_1] [i_1] [1] [i_15] = ((((-73 || (arr_43 [i_1] [i_7 - 4] [i_7 - 2] [i_15 - 2] [i_7] [i_7]))) ? 4294967295 : 1));
                        arr_65 [i_1] [i_7 - 4] [12] [i_1] |= (max(-var_5, var_6));
                    }
                    arr_66 [i_1] [i_1] [i_1] [i_1] = (min((arr_32 [i_2] [i_2] [i_2] [i_7 - 2]), 85));
                }
                var_19 = (min(var_19, (((((~(arr_60 [i_1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) | (((arr_60 [i_1] [14] [i_2 + 1] [i_1] [i_2]) ^ (arr_60 [i_1] [i_1] [i_2 + 1] [6] [i_1]))))))));
                var_20 = (arr_12 [i_1] [i_1]);
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
