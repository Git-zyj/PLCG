/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 -= (arr_5 [i_0] [i_1]);
                    var_13 = (min(var_13, ((((((min((259157197 > 242193523973193898), (arr_6 [i_0] [i_1] [i_2 + 1]))))) <= var_2)))));
                }
            }
        }
        arr_7 [i_0] = 28955;
        arr_8 [i_0] = ((var_5 - (-127 - 1)));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_4 - 3] [i_0] [i_4 - 2] = 231;
                        var_14 = 508623043142574605;
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((max(24, (arr_0 [i_0] [i_0])))), 425610313));
                        var_15 -= (min((((arr_14 [i_5 - 2] [i_3 - 1] [i_0]) ? (arr_15 [i_0] [18] [18]) : (arr_9 [i_3 - 2] [i_3 - 1] [i_3]))), (((((16538783378739500744 ? 18 : 65532))) ? -var_10 : (31457280 || var_3)))));
                    }
                }
            }
        }
    }
    var_16 += var_2;
    var_17 = max(((((max(-3121616340835415505, -899831780))) ? ((var_10 ? var_4 : 7294981281637222731)) : ((101 ? 29 : 4212837614471524752)))), ((((var_10 ? var_2 : 16128)) & ((var_4 ? var_8 : (-9223372036854775807 - 1))))));

    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {

                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        var_18 = (((1184869973 < 52071) & var_9));
                        var_19 = (min(var_19, (arr_17 [i_6 + 2] [i_7] [i_8] [i_8] [i_8] [i_8])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_20 += (min((((var_3 - var_6) ? 1202103220724097284 : (arr_34 [i_6 - 1] [i_8]))), (min((max(0, -485178449560832461)), (var_6 - var_3)))));
                                var_21 = (max(var_21, -6751139545727343081));
                                var_22 = (max((!0), (!var_11)));
                                arr_36 [i_10] [i_7] [i_8] [i_10] [i_10] [i_6 - 1] = (min(70, (max((arr_11 [i_7] [i_10 + 1] [i_11]), -5595885137008981199))));
                            }
                        }
                    }
                    var_23 = ((-((max(1670989404805698009, -94)))));
                    var_24 = ((var_0 ? (((((arr_1 [i_6]) < -3)) ? (arr_1 [i_6 - 4]) : (max((arr_24 [i_6] [i_6 - 4]), 9223372036854775807)))) : ((max(var_3, (min(2717, var_5)))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_44 [9] [i_7] [i_8] [i_12] [i_13] [i_12] = (min(((((max(var_3, 38))) ? (max((arr_29 [i_13] [i_8] [i_6 - 1]), var_0)) : ((((var_6 + 2147483647) << (((arr_39 [i_6] [i_7] [i_8] [i_8]) - 863581145))))))), (((-(var_11 < var_0))))));
                                var_25 = (max(var_25, ((min((((!(arr_39 [i_7] [i_8] [i_12] [i_13 + 1])))), (arr_25 [i_12]))))));
                                var_26 = (min(var_26, (((!(((var_0 & (arr_32 [i_13 - 2] [i_8] [i_8])))))))));
                                var_27 = (max(var_27, (((((max((arr_40 [i_13 - 1] [i_13] [i_8] [i_8] [i_6 - 3]), (arr_40 [i_13 + 1] [i_12] [i_12] [i_12] [i_6 + 1])))) / -316960562)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 4; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        var_28 = ((((min(((min(var_7, (arr_45 [i_16] [i_6] [i_6])))), (arr_48 [i_6] [i_15 - 2] [i_15])))) % ((((min((arr_0 [i_14] [i_14]), (arr_38 [i_6 - 1] [i_14] [i_15] [i_16])))) ? ((max(var_7, var_9))) : -112))));
                        var_29 = (max(var_29, (((((max((arr_28 [i_14] [i_16]), -538911643))) | (min(-5471960741750798798, ((max(var_6, var_3))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
