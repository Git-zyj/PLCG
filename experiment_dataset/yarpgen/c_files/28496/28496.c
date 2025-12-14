/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (+(((var_11 >= var_12) ? (var_8 >= var_3) : var_13)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_15 = (max(var_4, (min((arr_1 [i_0] [5]), (((arr_12 [12] [i_0] [9] [i_0] [8] [i_2] [2]) ? var_0 : (arr_10 [i_0] [i_1] [2] [i_2] [i_3] [9])))))));
                            arr_15 [i_3] = (((var_5 >= 44113) ? var_8 : (arr_8 [i_0] [i_3] [i_4 + 2])));
                            var_16 = (min((min(((var_8 ? var_8 : var_3)), var_1)), (arr_5 [1] [i_3] [11])));
                        }
                    }
                }
            }
            arr_16 [5] = 21401;
            arr_17 [i_0] [2] [2] = var_0;

            /* vectorizable */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_17 = (arr_6 [i_0] [4] [i_5]);
                var_18 = ((!(39313 >= var_10)));
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_24 [7] = (((min(var_4, (((arr_22 [i_0]) | var_13))))) ? (arr_6 [i_0] [3] [2]) : var_7);

            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                var_19 = (max((((var_11 >= (((arr_18 [i_0] [i_0] [i_7]) ? (arr_0 [i_0] [i_6]) : var_13))))), (max((arr_3 [i_7 - 2] [i_7 + 1]), ((var_6 ? var_1 : var_10))))));
                var_20 = ((((((max((arr_0 [6] [6]), (arr_21 [i_0] [i_6] [i_7 - 2])))) ? (((127 >= (arr_9 [i_0] [i_6] [i_6])))) : (((var_4 >= (arr_10 [i_0] [i_6] [i_7 + 2] [0] [i_7] [i_0])))))) >= (((((var_2 ? var_7 : var_4)) >= (var_6 >= var_5))))));
                var_21 = var_1;
                var_22 = var_8;
                var_23 = ((((max(((min(var_11, (arr_2 [i_0] [i_6])))), 18446744073709551587))) ? ((((!((!(arr_14 [i_0] [i_0] [1] [1] [11]))))))) : (arr_5 [i_0] [i_6] [i_6])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_24 = var_10;

                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    arr_31 [i_8] = arr_18 [i_6] [i_8] [i_9];
                    arr_32 [6] [i_6] [i_8] [i_9 + 2] [i_8] [i_8] = var_1;
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_25 = (max((((arr_2 [i_0] [i_10]) ? (arr_28 [i_0] [i_6] [i_8] [i_8]) : (arr_2 [i_0] [i_6]))), ((var_7 ? (arr_28 [i_0] [i_6] [i_8] [i_8]) : var_9))));
                    var_26 = ((-(((((((!(arr_5 [i_0] [i_0] [10]))))) >= (((arr_9 [i_0] [i_6] [i_8]) ? 44155 : (arr_23 [i_0] [i_8] [i_8]))))))));
                    var_27 = (((arr_19 [i_8]) >= (arr_18 [i_0] [i_6] [i_8])));
                    arr_36 [i_0] [i_0] [i_6] [i_8] [i_0] [1] = (arr_30 [i_0]);
                }
                var_28 = -var_1;
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                var_29 = ((min((min(var_7, var_0), (!var_12)))));
                arr_39 [i_0] [i_0] [i_11 - 1] = arr_23 [i_0] [i_0] [i_11 - 1];

                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    var_30 = ((-((~(arr_18 [i_0] [i_11 - 1] [i_12 + 1])))));

                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        var_31 = var_9;
                        var_32 = var_6;
                        var_33 = ((((-(arr_25 [i_0])))));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_34 = var_5;
                        var_35 = (arr_42 [i_12] [i_6] [i_11] [i_12] [i_12] [i_12 - 1] [i_14]);
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        arr_48 [i_12] [2] [i_11] [i_12 + 1] [i_15] = var_7;
                        var_36 = (max(1, (((arr_41 [i_12]) >= var_10))));
                        arr_49 [i_12 + 1] [5] [i_11] [i_12] [6] [i_12] [i_12] = (30 >= var_1);
                    }
                    arr_50 [i_12] [5] [i_11] [i_12] = (min(((min((!21396), var_4))), (max((arr_38 [i_0] [i_6] [i_0] [4]), ((var_3 ? 113 : (arr_0 [i_0] [i_6])))))));
                    arr_51 [11] [7] [i_11 - 1] [i_12] = (arr_34 [i_0]);
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    arr_56 [i_0] [i_6] [i_11] [i_6] [i_16] = var_13;
                    arr_57 [i_0] [i_0] [i_11 - 1] [i_16] = (-9223372036854775807 - 1);
                    var_37 = var_12;
                    var_38 = var_6;
                }
                /* vectorizable */
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        arr_63 [i_17 - 1] [i_6] = (arr_37 [i_11 - 1]);
                        var_39 = var_8;
                        var_40 = ((var_9 >= ((-(arr_41 [i_0])))));
                        arr_64 [i_0] [i_6] [i_11] [i_0] [2] = ((var_6 >= (((!(arr_5 [i_0] [i_0] [11]))))));
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        var_41 = (arr_0 [i_0] [i_0]);
                        arr_68 [i_0] [i_11 - 1] [i_11 - 1] = (((arr_35 [i_0] [i_6] [i_11 - 1] [i_17 - 1] [i_17] [i_6]) >= (arr_35 [7] [i_6] [i_0] [i_0] [i_19] [i_17])));
                        var_42 = var_12;
                    }
                    var_43 = var_10;
                }
                arr_69 [i_0] = ((+(((((var_7 ? (arr_55 [i_0] [i_0] [i_11]) : (arr_2 [i_0] [i_6])))) ? ((-(arr_53 [13] [2] [11] [i_0] [i_0] [3]))) : (((((arr_6 [i_0] [i_0] [i_11]) >= (arr_20 [9] [5] [i_0])))))))));
                var_44 = (((((arr_27 [i_0] [i_0] [0]) >= (arr_27 [i_0] [i_6] [i_6]))) ? (((((8969 ? (arr_26 [i_0] [i_6] [i_11 - 1]) : var_2))) ? 7724641617771178298 : -var_8)) : ((min(((var_2 ? var_7 : 8977)), ((var_11 ? var_6 : var_2)))))));
            }
        }
        var_45 = var_9;
        var_46 = (arr_66 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_70 [i_0] = ((!(((arr_54 [i_0] [i_0] [i_0] [i_0]) >= (arr_54 [i_0] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
