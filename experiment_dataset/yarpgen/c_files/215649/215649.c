/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 |= ((var_9 ? (((arr_2 [i_0]) ? var_10 : (arr_1 [i_0 - 2]))) : -var_11));
        arr_4 [17] = arr_1 [i_0 + 2];
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_13 = (min(var_13, (arr_1 [i_1])));
                    var_14 = (min(var_14, ((max(((((-1705197839 <= var_2) != 13835058055282163712))), -var_10)))));
                }
            }
        }
        arr_11 [14] = (((arr_1 [i_1]) / ((var_1 << ((((arr_8 [i_1] [i_1]) != (arr_10 [12] [12] [12] [i_1]))))))));
        arr_12 [i_1] = (arr_9 [i_1] [i_1] [i_1] [13]);
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_15 -= (arr_17 [i_4] [i_5] [i_4]);

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [1] [1] [2] [i_5] [i_7] = (i_5 % 2 == 0) ? (((-(((arr_19 [i_5] [i_5 + 2]) * (arr_19 [i_5] [17])))))) : (((-(((arr_19 [i_5] [i_5 + 2]) / (arr_19 [i_5] [17]))))));
                        var_16 += (((((((var_2 ? (arr_0 [i_4]) : var_6))) ? (var_0 + var_0) : (arr_8 [i_4] [i_7]))) / (arr_5 [i_4])));
                    }
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] = (65533 < 44);
                        var_17 = (((((((((arr_13 [i_4] [15]) ? (arr_14 [i_6]) : (arr_8 [i_4] [i_5])))) ? (((arr_19 [i_5] [i_5]) / var_2)) : ((var_7 ? var_4 : (arr_21 [i_4] [4])))))) / (((arr_6 [16]) ? ((var_7 - (arr_18 [15]))) : (arr_16 [3])))));
                        var_18 = ((-((((max(65533, 1))) ? 2416785169 : 89))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_19 = (1470631973117267634 <= 247);
                            var_20 = (max((!13862), ((((13835058055282163703 / (arr_18 [i_8]))) << (((arr_13 [i_8 + 2] [i_6 - 2]) - 8319382193897538561))))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_4] [1] [i_6] [i_5] [i_6] [i_4] [1] = (44 <= 0);
                            var_21 -= (arr_19 [i_4] [i_4]);
                            arr_35 [i_5] [14] [i_6 + 1] [12] [i_5] = (arr_13 [i_5 - 1] [13]);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_5] = (((!1215500233220993556) + var_5));
                            arr_39 [i_4] [i_5 - 1] [i_6] [i_5] [2] = (((((((14 ? 106 : 3433439884))) ? (arr_5 [i_4]) : (arr_21 [1] [i_6 - 2])))) ? ((((arr_9 [i_4] [i_5 + 1] [i_6 + 2] [i_11]) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (arr_9 [i_4] [i_5 + 2] [1] [i_4])))) : (((arr_16 [i_6]) ? (arr_36 [i_4] [i_4] [i_5 + 3] [i_6] [i_11] [i_5]) : (((arr_37 [i_4]) + (arr_32 [i_4] [10] [i_4] [i_4] [i_4] [i_4]))))));
                            var_22 = ((~(((arr_27 [i_5] [i_5 + 3] [i_6 - 1] [4] [14]) ? var_11 : (arr_36 [i_5] [i_11] [i_8] [i_6] [i_5] [i_5])))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_5 / (min(4294967295, 8))));
    var_24 *= (1215500233220993556 + var_3);
    #pragma endscop
}
