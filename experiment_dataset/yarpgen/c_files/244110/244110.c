/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0] [i_0] [i_1]);
                arr_5 [i_1] = (((((var_12 % (arr_3 [i_0] [i_0] [i_1])))) * (((-((var_13 ? var_8 : (arr_0 [8]))))))));
                arr_6 [i_1] = (min(var_15, (arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] = (max((min((max(var_3, (arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4]))), (var_4 + var_1))), ((min(var_14, var_12)))));
                                arr_17 [i_1] [i_1] = (min(-62, -48));
                                var_20 = (arr_8 [i_0] [i_0] [i_2] [i_4]);
                                arr_18 [5] [i_1] = (min((arr_1 [i_0] [i_3]), ((-(arr_9 [i_1 - 1] [i_1 - 1])))));
                                var_21 = (max(var_5, (((arr_2 [i_1 - 1]) ? (arr_15 [i_2] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_2 [i_1 - 1])))));
                            }
                        }
                    }
                    var_22 = (arr_4 [i_0] [1]);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (max(var_23, ((min(61, 58829)))));
                    arr_22 [i_0] [i_1] [i_0] = (i_1 % 2 == zero) ? ((((-69 ? ((var_3 ? var_5 : (arr_9 [i_1] [i_1]))) : -var_11)) >> (((arr_7 [i_5] [i_1] [i_1] [i_0]) - 9591)))) : ((((-69 ? ((var_3 ? var_5 : (arr_9 [i_1] [i_1]))) : -var_11)) >> (((((arr_7 [i_5] [i_1] [i_1] [i_0]) - 9591)) - 46501))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_25 [i_1] [i_1] [1] [i_1] = (((((var_5 ? var_2 : ((min(var_2, (arr_1 [i_0] [i_1 - 1]))))))) ? (max(((var_9 ? var_8 : (arr_10 [1] [1] [2] [1] [i_0] [i_0]))), (arr_12 [i_6] [i_6] [i_1] [i_1] [i_0]))) : (((var_10 ? (((var_13 == (arr_9 [i_0] [i_1])))) : (arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_6] [i_6]))))));
                    var_24 = (max(var_24, ((((min((((arr_9 [i_6] [i_1]) ? var_3 : (arr_3 [i_0] [i_1] [i_6]))), (arr_3 [i_0] [i_6] [i_6]))) ^ (((((((arr_11 [i_0] [i_1] [i_1] [i_6] [1] [1]) | var_10))) ? ((((arr_3 [i_0] [i_0] [i_6]) != var_6))) : var_17))))))));
                    var_25 = ((-(arr_8 [i_0] [i_1] [i_1] [i_6])));
                    var_26 = (arr_2 [i_6]);

                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = (max(96, 58));
                        var_27 = min((((var_1 == (max(var_17, var_10))))), (arr_11 [i_0] [i_0] [i_6] [i_7] [i_1] [i_6]));
                        var_28 = (((max((max(var_13, (arr_21 [i_1] [i_1] [i_1]))), (((var_14 - (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))))) | (arr_15 [i_0] [i_1] [i_1] [i_7] [i_1] [i_0])));
                        var_29 = (max(var_29, ((max((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]), ((((((min((arr_15 [i_0] [i_1] [i_1] [i_7] [i_6] [i_7]), (arr_12 [i_7] [i_6] [i_1] [i_1] [i_0]))))) <= ((var_13 ? (arr_9 [i_1] [i_6]) : (arr_9 [i_0] [i_0])))))))))));
                    }
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_30 = var_2;
                            var_31 = (((arr_28 [i_0] [5] [i_9]) ? (((min(var_10, (arr_10 [i_0] [i_0] [i_6] [i_0] [i_8] [i_9]))))) : (arr_0 [i_0])));
                            arr_36 [i_6] [i_1] [i_1] [5] [i_9] [i_0] = ((-(max(var_5, (((arr_19 [i_6] [i_8] [i_9]) >> (((arr_13 [i_0] [i_1] [i_9] [i_1] [2]) - 1854671834))))))));
                        }
                        var_32 = ((((min((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_1 + 1])))) + ((((((var_6 ? var_11 : (arr_2 [i_0])))) || ((min(var_11, var_4))))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_33 -= ((((max(((min((arr_24 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_10])))), var_13))) ? (arr_38 [i_0] [i_0] [i_0] [i_6] [i_10]) : -var_9));
                        var_34 = arr_20 [i_6] [i_6];
                        var_35 ^= (arr_7 [i_0] [i_6] [i_6] [i_6]);
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_36 -= ((-(((arr_27 [i_0] [i_1 + 1] [i_6] [i_11]) - (arr_13 [i_11] [i_1] [i_0] [i_1] [i_0])))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] = (min((((var_17 ? (arr_34 [i_1] [i_1]) : (arr_34 [i_1] [i_1])))), (((min((arr_38 [i_11] [i_1] [i_6] [i_11] [i_1]), var_11)) | ((((arr_31 [i_0] [i_0]) ? (arr_4 [i_6] [7]) : (arr_30 [i_1]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
