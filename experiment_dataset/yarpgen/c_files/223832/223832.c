/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = min(((((((arr_2 [i_0]) ? var_2 : (arr_2 [i_0]))) > (arr_3 [13])))), ((((min((arr_2 [i_0]), var_2))) ? (max(var_1, (arr_2 [i_0]))) : (max(var_8, (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (((((max((arr_6 [i_0]), (arr_8 [i_2] [i_1 - 2]))))) ? ((((((var_10 ? (arr_4 [i_0] [i_1]) : var_1))) ? var_7 : var_9))) : (((((var_5 | (arr_2 [i_0])))) ? (max(var_12, (arr_5 [1] [14]))) : var_7))));
                    var_15 = (arr_3 [i_2 - 3]);
                    var_16 = (((((max((arr_3 [i_2]), var_0))) || ((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1 - 1]) : (arr_0 [i_1])))))));
                    var_17 -= (min((arr_8 [i_0] [i_1]), (min(var_3, (min((arr_5 [i_0] [i_2]), (arr_2 [8])))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((((((((arr_2 [12]) ? var_11 : (arr_0 [i_3])))) ? ((min(var_2, var_13))) : ((max(var_13, var_6)))))) ? (min((arr_7 [6] [1]), (arr_10 [i_3] [i_3]))) : ((max((min(var_6, (arr_0 [i_3]))), ((max(var_6, var_8))))))));
        var_18 = (min(var_18, (((((max((arr_2 [8]), (((arr_0 [i_3]) ? var_8 : var_13))))) ? (((((((arr_2 [2]) ? (arr_8 [i_3] [i_3]) : var_9))) ? (((max((arr_1 [14] [i_3]), (arr_0 [i_3]))))) : var_7))) : ((((((arr_4 [4] [4]) ? var_9 : var_10))) ? var_2 : (((arr_2 [6]) ? (arr_3 [i_3]) : (arr_10 [7] [i_3]))))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {

                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 *= ((((max(var_6, var_13))) ? (max(((var_4 - (arr_17 [i_5] [8]))), ((((arr_22 [i_8] [i_7] [i_6] [i_5] [i_4]) ? var_8 : var_6))))) : ((((max(var_7, var_6)) % (((max(var_11, (arr_26 [16]))))))))));
                                arr_28 [15] [i_8] [9] [i_5 + 1] [i_4] = (max(var_1, ((((var_12 ? (arr_20 [i_4] [i_4 + 1] [i_4]) : (arr_15 [i_4])))))));
                            }
                        }
                    }
                    arr_29 [i_4] [i_5] [i_5] = (((arr_16 [i_4]) ? ((((((min((arr_24 [i_4] [i_4] [i_5] [i_5] [i_6]), (arr_14 [i_4] [i_4])))) > var_3)))) : ((((max(var_9, var_0))) ? var_10 : ((var_10 ? var_0 : (arr_19 [i_5] [i_4])))))));
                }
                for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_20 = (max(var_20, (((((((arr_24 [i_11] [i_10] [i_9 - 2] [i_5 - 2] [i_4]) ? (arr_30 [i_10 + 1]) : var_11))) ? (((arr_20 [i_4 - 1] [2] [i_11]) ? var_13 : var_13)) : (((var_3 || (arr_33 [i_4])))))))));
                            var_21 = ((((((arr_30 [i_4]) + var_7))) ? var_1 : var_2));
                            arr_37 [i_4] [i_4] [14] = (arr_25 [i_11] [i_10] [i_4] [i_5] [i_4]);
                            arr_38 [i_4] [i_5] = (((((var_5 ? (arr_16 [4]) : (arr_26 [i_4])))) ? (arr_21 [i_4 - 2] [4] [4] [i_4]) : (((arr_36 [i_4] [i_5] [i_10] [i_10] [i_11] [i_10] [i_4]) ? var_3 : (arr_20 [i_11] [i_5 + 1] [i_4])))));
                            arr_39 [0] [i_11] |= ((((var_5 ? var_11 : (arr_36 [12] [i_4] [2] [2] [i_10] [i_11] [i_11])))) ? (arr_15 [12]) : (((arr_19 [15] [0]) >> (var_11 - 54))));
                        }
                        var_22 = (min(((max(((((arr_30 [i_9]) > (arr_26 [i_4])))), (max(var_7, (arr_33 [i_5])))))), ((((arr_17 [i_4] [i_4]) ? (arr_27 [i_4] [i_10] [i_9 - 2] [i_9 - 2] [i_10]) : (arr_18 [i_4] [i_10 + 2] [i_4]))))));
                        var_23 = (min(var_23, ((min(((var_10 ? var_13 : var_0)), ((((((var_7 ? var_2 : (arr_31 [i_10] [i_9] [i_5 - 2] [i_4 - 1])))) ? (min((arr_15 [4]), var_11)) : (min((arr_35 [6]), (arr_26 [12])))))))))));
                        arr_40 [i_4] [i_9] [i_4] [9] [i_4] = ((((((max(var_0, var_7)) > (((((arr_23 [i_4 - 2] [i_5 + 1] [2] [i_10]) || var_8))))))) != var_11));
                        var_24 = var_0;
                    }
                    arr_41 [i_4] [i_5 + 1] [i_4] = ((var_10 << (((min(var_10, (max((arr_36 [i_4] [i_5] [i_9 - 1] [i_9 - 1] [i_5] [i_9] [i_5]), var_9)))) - 2061021858))));
                    var_25 = (max((((((max((arr_25 [5] [7] [i_4] [i_4] [i_9 + 1]), (arr_22 [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2])))) ? (arr_32 [i_5] [i_5] [i_5]) : (((arr_26 [i_4]) ? (arr_34 [i_4] [i_4] [i_5] [i_5] [i_9]) : var_8))))), (min((((var_3 ? var_11 : (arr_18 [i_4 - 2] [i_5 - 1] [i_4])))), (((arr_21 [i_4] [i_4] [i_9 + 1] [i_4]) / var_0))))));
                }

                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_26 = (max(((((max((arr_35 [i_4]), (arr_20 [i_4 - 2] [i_4] [i_4])))) ? ((min((arr_42 [13] [i_5] [i_12]), (arr_14 [i_4 - 2] [i_12])))) : (max((arr_17 [i_4] [i_4]), var_6)))), ((max(var_6, ((((arr_25 [i_12] [i_5 - 2] [i_4] [i_5] [i_4]) || var_7))))))));
                    arr_45 [i_12] [i_12] [i_12] [i_4] = (max((((max(var_3, var_10)))), (max((((var_6 % (arr_43 [i_4])))), (((arr_30 [i_5]) / (arr_23 [i_4] [i_5] [i_12] [i_12])))))));
                }
                var_27 = (max((arr_31 [i_4] [i_5 - 2] [i_5] [i_4 - 1]), (((arr_36 [i_4] [i_5] [i_5] [i_5] [i_5 - 2] [1] [i_4]) ? (var_12 >= var_11) : (min(var_3, (arr_15 [i_4])))))));

                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_28 = (max(((max((arr_31 [i_4] [i_4 + 2] [i_4 + 2] [6]), (arr_15 [i_4])))), (arr_22 [i_13] [i_13] [i_5 - 2] [17] [i_4])));
                    arr_50 [i_4 - 1] [i_4] [5] = (min((max((max((arr_43 [i_4]), var_12)), (var_7 > var_12))), (max(((var_8 ? (arr_48 [i_13]) : var_1)), (arr_36 [i_4] [i_5 - 2] [i_4] [i_13] [i_13] [i_13] [i_4 + 1])))));
                    arr_51 [i_4 + 1] [i_4] [i_5 - 1] [16] = (max(((max((arr_22 [3] [i_5] [i_5 - 2] [i_4 + 2] [i_4]), (arr_33 [7])))), ((((max((arr_19 [i_4] [i_4]), var_1))) ? (((var_12 ? (arr_27 [i_4] [i_13] [i_5] [i_4 - 1] [i_4]) : (arr_43 [i_4])))) : (max((arr_35 [i_4]), var_1))))));
                }
            }
        }
    }
    var_29 = (max(((var_11 ? (var_12 || var_3) : var_5)), ((((max(var_8, var_10))) ? (var_10 & var_2) : (max(var_10, var_12))))));
    var_30 = (min(var_30, (max(var_2, (min(((var_9 ? var_1 : var_7)), (var_12 / var_8)))))));
    #pragma endscop
}
