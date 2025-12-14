/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(var_9, var_9)))));
    var_13 = ((var_1 ? var_0 : (var_0 % var_6)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] = (-(arr_4 [i_4] [i_3] [i_2]));
                            var_14 = (-(((arr_3 [i_1]) ? (arr_4 [i_1] [i_2] [i_3]) : (arr_5 [i_1]))));
                        }
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            var_15 = ((var_2 % (((-(arr_4 [i_3] [i_3] [i_2]))))));
                            var_16 = (arr_13 [i_5] [i_3] [i_0] [i_1] [i_0]);
                            var_17 = ((((max((arr_8 [i_5 - 1] [i_1] [i_1] [i_3 - 3]), (((arr_6 [i_1] [i_3]) - var_11))))) ? (arr_1 [i_0]) : ((-((var_11 << (((arr_0 [i_0] [i_5 + 1]) - 22))))))));
                            arr_17 [i_1] [18] = ((max((arr_8 [i_5 - 1] [i_1] [i_1] [i_1]), (arr_0 [i_0] [i_0]))));
                        }
                        arr_18 [i_0] [i_1] [16] [i_3 - 1] = (arr_4 [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] [i_2] [i_6] [i_6] = (max(((18446744073709551606 ? (-9223372036854775807 - 1) : -3973)), (arr_20 [i_1] [i_1 + 3] [i_1 + 2] [i_6])));
                        var_18 = ((!(((~(((arr_3 [i_1]) ? var_0 : var_10)))))));
                    }
                    var_19 = ((((((((arr_21 [i_2]) % (arr_8 [i_0] [i_1] [i_0] [i_0])))) ? ((-(arr_21 [i_1]))) : ((var_6 ? (arr_13 [i_2] [i_2] [i_2] [i_1 + 3] [i_2]) : (arr_11 [i_0] [i_0] [i_1]))))) | ((~(((var_6 != (arr_11 [i_0] [i_1] [i_1]))))))));
                }
            }
        }
        var_20 = (max((((arr_5 [i_0]) | (arr_5 [i_0]))), ((min(((min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))), (arr_4 [i_0] [i_0] [i_0]))))));
        var_21 = (arr_12 [i_0] [i_0] [23] [i_0] [i_0]);
        var_22 = (min(-3973, 118));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_23 |= var_2;
                    arr_34 [i_7] [i_7] [i_7] = ((-(((!((!(arr_13 [i_9] [i_9] [14] [i_8] [i_7]))))))));
                }
            }
        }
        arr_35 [i_7] [i_7] = (arr_2 [i_7] [i_7]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 9;i_12 += 1)
                {
                    {
                        var_24 = (((((-(((arr_1 [i_10]) | (arr_13 [i_7] [i_7] [i_11] [i_7] [i_12])))))) ? ((-(arr_26 [i_7]))) : (((!((((arr_23 [i_7] [i_7]) ? (arr_21 [i_7]) : (arr_4 [i_7] [i_10] [i_12])))))))));
                        var_25 = ((((max(1, (arr_13 [i_12 + 3] [i_10] [i_11] [i_12] [i_7])))) ? (arr_13 [i_12 + 4] [i_10] [i_10] [i_12] [i_11]) : (((arr_0 [i_7] [i_12 + 1]) ? var_11 : (arr_13 [i_12 - 2] [i_12] [i_11] [i_12] [i_7])))));
                    }
                }
            }
        }
        arr_43 [i_7] = (arr_3 [i_7]);
    }
    for (int i_13 = 3; i_13 < 14;i_13 += 1)
    {
        var_26 = (min(((-(arr_15 [4] [i_13 - 3] [i_13 - 3] [i_13 - 3]))), (((arr_15 [1] [i_13 - 2] [i_13 - 2] [i_13 + 1]) ? (arr_15 [16] [i_13 - 3] [i_13 - 2] [i_13 - 2]) : (arr_15 [16] [i_13 - 2] [i_13 - 3] [i_13 - 3])))));
        var_27 = ((~(((arr_6 [2] [i_13 - 2]) ? (((arr_6 [2] [i_13]) ? var_2 : (arr_5 [i_13]))) : ((((!(arr_15 [12] [i_13 - 1] [i_13] [i_13 - 1])))))))));
    }
    var_28 = var_5;
    #pragma endscop
}
