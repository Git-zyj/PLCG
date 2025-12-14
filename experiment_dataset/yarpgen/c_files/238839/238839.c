/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((!(((var_3 ? var_0 : var_1)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 *= (var_3 * var_2);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_9 [i_0] [i_0] [i_0]) ? (max((arr_4 [i_0] [i_3] [i_4]), (((arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4]) ? var_3 : (arr_8 [i_3] [i_2] [i_0]))))) : (((((arr_3 [i_4]) ? var_6 : (arr_2 [1] [i_1]))) >> (((arr_2 [1] [1]) >> (arr_5 [i_4] [i_1] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [1] = ((var_6 ? (((max(var_0, var_0)))) : ((-(1 * 0)))));
                                var_14 = (min(var_14, ((min(((((max(var_9, var_1))) & (((arr_6 [i_4] [i_1]) >> var_1)))), ((~((min(var_9, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_15 = (min((((max((arr_7 [i_0] [i_1] [i_2]), (arr_5 [1] [i_2] [i_4]))) ? (arr_3 [i_0]) : ((min(var_4, var_10))))), -var_6));
                            }
                        }
                    }
                    var_16 = ((((((((arr_5 [i_1] [i_1] [i_1]) ? var_9 : var_5))) ? ((((arr_2 [i_0] [1]) || var_4))) : var_1))) && (((-((var_10 ? (arr_6 [i_0] [1]) : (arr_6 [i_0] [i_0])))))));
                    var_17 = ((1 ? 1 : 1));
                }
            }
        }
        var_18 = (min(var_18, ((((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [1] [i_0]) : (arr_2 [1] [i_0])))) ? (((arr_4 [i_0] [i_0] [i_0]) >> (arr_6 [i_0] [i_0]))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_0 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) == (((arr_2 [i_0] [i_0]) ? ((var_9 << (arr_5 [1] [i_0] [i_0]))) : var_10))))));
        arr_16 [i_0] = ((((!(((var_10 ? var_5 : var_10))))) ? (((((var_5 + (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_12 [i_0] [i_0] [i_0] [0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [1]))) : ((min(var_10, (arr_4 [i_0] [i_0] [1])))))) : (arr_4 [i_0] [1] [i_0])));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_19 = var_7;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_20 += (((((arr_4 [i_5 - 1] [i_5 - 1] [i_5 - 1]) + (arr_17 [i_5 - 1]))) << ((min((arr_7 [i_6] [i_5 - 1] [i_5 - 1]), (arr_17 [i_5 - 1]))))));
            var_21 = (max(var_21, (((((min(((max(var_2, (arr_8 [i_5] [i_5] [i_6])))), (((arr_8 [i_5] [i_6] [i_5]) ? (arr_4 [i_5] [i_5] [i_5]) : (arr_7 [i_6] [i_5 - 1] [i_5])))))) ? (max(var_1, -var_5)) : ((((((arr_18 [1] [i_5]) ? var_4 : var_2))) ? ((max(var_1, var_1))) : (arr_19 [i_6]))))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((((~((~(arr_13 [1] [i_10] [i_10] [i_10] [i_10] [i_10]))))) & ((min((!var_10), (min(var_8, (arr_25 [i_5])))))))))));
                            var_23 = ((((((arr_24 [i_5 - 1] [i_10 + 1] [i_9 + 1]) * var_10))) ? (max(((var_1 ? (arr_18 [i_5] [i_7]) : var_5)), (arr_19 [i_5 - 1]))) : ((-var_4 ? (!var_5) : ((var_5 ? (arr_19 [i_5 - 1]) : (arr_18 [i_5 - 1] [1])))))));
                        }
                    }
                }
            }
            var_24 = ((((max(((!(arr_23 [i_5]))), (arr_27 [i_7] [i_7] [i_7] [i_7])))) << ((min(1, 1)))));
            var_25 = arr_8 [i_7] [i_7] [i_7];
            var_26 = (min(var_26, ((((((0 ? 1 : 0))) ? (((arr_28 [i_5 - 1] [i_5 - 1]) & (arr_28 [i_5 - 1] [i_5 - 1]))) : (((max(var_8, (arr_0 [i_5 - 1]))) ? var_6 : ((max(var_6, var_4))))))))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_35 [i_11] [i_11] [i_5] = arr_19 [i_5];

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                var_27 = ((((min(((var_6 ? var_9 : var_1)), ((min(var_8, var_1)))))) ? ((((var_4 ? (arr_33 [i_5] [i_11] [i_12]) : (arr_27 [i_5 - 1] [i_11] [i_11] [i_11]))) + ((var_6 * (arr_6 [i_5 - 1] [i_11]))))) : ((((((arr_17 [i_11]) ? (arr_4 [i_11] [i_11] [i_12 - 1]) : (arr_2 [i_5 - 1] [i_5 - 1])))) ? (((arr_3 [i_12]) ? var_9 : var_3)) : (arr_0 [i_5])))));

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_41 [0] [i_13] [i_13] [i_13] [i_13] = ((((((arr_38 [i_12]) ? (arr_18 [i_5] [i_13]) : (arr_2 [i_12 - 1] [i_12 - 1])))) ? ((var_6 ? (arr_1 [i_5] [i_5]) : var_10)) : ((max((arr_9 [i_5] [i_11] [i_12]), (arr_34 [i_5] [i_5]))))));
                    var_28 = (min(var_28, (min((max((max(var_10, (arr_1 [1] [i_13]))), (min(var_5, var_8)))), ((max(1, 1)))))));
                }
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                arr_46 [i_5 - 1] [i_11] = arr_6 [i_11] [i_5];
                arr_47 [i_14] [1] [1] [i_5] = (min(((~((((arr_1 [i_5 - 1] [1]) >= (arr_24 [1] [i_11] [i_14])))))), (((((arr_36 [i_14 - 1] [i_11] [i_11] [i_5]) >= (arr_19 [i_5])))))));
                var_29 = (max(((var_4 ? (((arr_42 [i_14]) ? (arr_25 [i_14]) : var_2)) : (((arr_29 [i_14 - 1] [i_11] [i_5] [i_5]) ? (arr_42 [i_14]) : (arr_26 [i_14 - 1] [i_14] [i_11] [1]))))), ((-((var_1 ? (arr_28 [i_5] [i_5]) : var_5))))));
            }
            arr_48 [i_5] [i_11] = ((((!(((~(arr_3 [i_5])))))) ? 1 : ((max((max(var_6, var_3)), (var_6 || var_1))))));
        }
        var_30 = (!((min(((~(arr_7 [i_5] [i_5] [i_5]))), var_9))));
    }
    var_31 = (((((var_7 ? ((max(var_8, var_1))) : (var_5 & var_3)))) ? var_1 : ((-(!var_5)))));
    #pragma endscop
}
