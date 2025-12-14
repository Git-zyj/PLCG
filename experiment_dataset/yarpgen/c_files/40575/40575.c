/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_5;
                arr_8 [6] [0] [0] = ((((-((~(arr_3 [i_0] [i_0] [i_0])))))) & (min(var_6, var_8)));
                arr_9 [i_1] = ((-(((!(arr_2 [i_1] [i_0]))))));
                arr_10 [i_1] = (max(((((min(var_12, (arr_3 [i_0] [i_0] [i_0])))) ? ((((arr_4 [i_1] [i_0] [i_0]) * -354894586))) : var_6)), ((max((((!(arr_5 [i_1])))), (min(var_0, 354894586)))))));
            }
        }
    }
    var_13 = (max(var_13, ((((-62 ? 354894585 : (96 % 1)))))));
    var_14 ^= var_7;
    var_15 = 354894585;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_21 [i_2] [i_3] [i_4] [i_2] = (max((39 & -87), var_6));

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_16 = var_7;
                        arr_26 [15] [i_5] [i_5] [i_5] [i_3] [i_2] = ((var_9 ? (arr_16 [i_5 + 4] [i_5 - 3] [i_5 + 4]) : (arr_15 [i_5 - 3])));
                    }
                    for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_17 = (max(((var_2 ? var_12 : (min(var_10, var_3)))), ((((max((arr_15 [i_6]), var_2))) ? 354894576 : (!var_7)))));
                        var_18 -= (min(var_4, ((min((arr_25 [i_6 + 1] [i_6 + 1] [i_4] [16]), (!var_1))))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_31 [8] [i_7] [i_4] [i_3] [i_2] = ((-354894586 || (var_7 - var_9)));
                        arr_32 [i_7] [i_4] [i_3] [i_2] [i_2] = var_0;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_9] = ((-(arr_18 [i_2] [i_2])));
                            var_19 += var_8;
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_33 [i_2] [i_2] [1] [16]) ? (min(((-(arr_33 [9] [i_8] [i_4] [4]))), var_8)) : -1)))));
                            var_21 = (min(var_21, (((((min(2452640240, 55766))) ? ((~(arr_36 [i_10 + 1] [i_10] [i_10 + 1] [12] [1] [i_10] [i_4]))) : (arr_30 [i_8] [i_10 - 1] [i_4] [i_4]))))));
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_22 = ((var_12 ? var_3 : 354894586));
                            var_23 = (arr_13 [i_2]);
                            arr_43 [i_8] [12] [i_11] [i_8] [i_11] = (arr_13 [i_11]);
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_24 ^= ((-((((((var_4 ? (arr_11 [5]) : var_12))) && (var_5 - var_0))))));
                            arr_46 [i_2] [i_2] [11] [i_8] [i_12] = (min((max((((arr_13 [i_4]) ? (arr_27 [i_2] [i_8] [i_4] [i_8]) : (arr_18 [10] [i_3]))), (((var_11 ? (arr_42 [i_12] [i_4] [i_2] [i_2]) : var_1))))), (((((((arr_27 [i_2] [i_2] [i_2] [i_2]) / var_0))) ? (((arr_35 [i_2] [i_3] [1] [i_4] [i_8] [i_12] [i_12]) ? (arr_24 [i_2] [i_2]) : var_9)) : (max(var_9, var_8)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
