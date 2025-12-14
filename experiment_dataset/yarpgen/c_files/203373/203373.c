/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    var_19 = var_11;
    var_20 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (((min((arr_0 [i_0]), var_11))) / (((arr_2 [i_1 + 3]) ? ((((arr_2 [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : var_9))) : 8614407600458183)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_22 += (((((-(arr_4 [22] [22] [22])))) ? (arr_6 [i_1 + 3] [4] [i_2 + 1]) : (((var_2 & (arr_3 [i_0] [i_0] [i_0]))))));
                    arr_7 [i_1] [i_1] = ((!(arr_6 [i_0] [i_1] [i_2])));
                    arr_8 [4] [i_1] [1] [i_2] = (arr_4 [i_1] [i_1 + 2] [i_2 + 3]);
                    var_23 &= 8614407600458183;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_24 |= ((var_15 ? (arr_10 [i_3]) : var_15));
                    arr_13 [i_1] [i_1] [i_1] = var_1;
                    arr_14 [i_1] = (var_7 ? (arr_12 [i_0] [i_1 + 2] [i_3]) : (arr_12 [i_0] [i_1 + 3] [i_1 + 3]));

                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_25 = (((arr_18 [i_0] [i_3] [3] [i_3] [i_4 - 2] [i_4 - 2]) / var_13));
                        arr_19 [i_0] [i_1] [i_0] = ((69485955 ? ((-69485956 ? var_4 : (arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [i_4]))) : var_1));
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_26 = (var_5 - var_7);
                    var_27 |= (arr_4 [0] [0] [i_5]);
                    var_28 = -95;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_29 ^= ((!((((arr_20 [i_1 + 2] [i_1 + 1] [8]) ? (arr_20 [18] [i_1 + 1] [16]) : (arr_20 [i_0] [i_1 - 1] [4]))))));
                    var_30 = arr_11 [i_0] [i_1 - 1] [i_6] [i_6];

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_31 = (((((((((arr_18 [i_0] [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_7]) * var_4))) ? (arr_25 [i_1] [9]) : (~var_9)))) != (min(((var_0 ? var_6 : var_7)), (((-(arr_22 [i_1] [i_6] [i_7]))))))));
                        var_32 = (min(var_32, var_8));

                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            var_33 = (max(var_33, ((((((!var_2) >= (((-8614407600458184 + 9223372036854775807) << (((-8614407600458177 + 8614407600458204) - 27))))))) > (arr_2 [i_1 + 1])))));
                            var_34 = 1;
                            var_35 ^= (((((arr_25 [10] [i_8 + 2]) ? (arr_25 [8] [i_8 - 2]) : var_9))) ? -69485956 : ((-(arr_25 [22] [i_8 + 2]))));
                            var_36 ^= 8614407600458177;
                            arr_30 [i_1] [i_1] [i_1] = (((((min((arr_0 [i_8 + 2]), -4075)))) != (((arr_6 [11] [i_1] [i_8 + 3]) ^ (arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] [i_8 + 4])))));
                        }
                    }
                    for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_37 ^= var_5;
                        arr_33 [i_1] [i_1] [i_1] = (max((((!(arr_22 [i_1] [1] [i_1])))), var_7));
                        var_38 = (max(var_38, (((-(max(65512, -6)))))));
                        var_39 = ((-(((arr_16 [i_0] [i_1] [i_1 + 2]) | (arr_28 [i_0] [i_1] [i_1 - 1])))));
                        var_40 = (min(var_40, 15809));
                    }
                    for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_41 = (((((-8614407600458183 % ((7702667323242404678 % (-127 - 1)))))) & 18446744073709551615));
                        var_42 = ((-(arr_10 [i_1])));
                        var_43 -= 39;
                    }
                    arr_37 [i_1] [i_1 + 2] [i_6] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_11 : (arr_11 [i_0] [i_1 + 1] [i_6] [i_6])));
                }
                arr_38 [i_0] [i_1] [1] = (((((((arr_4 [i_1] [i_1] [i_1]) ? var_3 : 0))) ? -17907 : ((min(0, 1))))));
            }
        }
    }
    var_44 = var_16;
    #pragma endscop
}
