/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] = (((var_10 & 11748) << (((arr_0 [i_0] [i_0]) - 3995469395))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_11 = (((((32758 & (arr_9 [i_3] [i_2] [i_1] [i_0])))) ? (arr_4 [i_0] [i_1] [i_1]) : (((arr_0 [i_0] [i_3]) ? (arr_3 [i_0] [i_0] [i_0]) : -11748))));
                        var_12 = ((((arr_10 [i_2]) ? var_9 : (arr_0 [i_2] [i_0]))));
                        arr_11 [i_2] [i_2] [9] [i_0] [i_2] = (((arr_3 [i_0] [i_1] [i_1]) ? (((-(arr_0 [0] [i_1])))) : (arr_5 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] [3] [i_4] = (((((((3084279525 ? 11733 : 229))) ? (((-19 ? (arr_6 [3]) : (arr_13 [i_0] [i_0] [9] [i_4])))) : var_3)) == ((max(((max(-11747, 17163))), (arr_5 [10]))))));
                        var_13 = (arr_14 [i_4] [i_1] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_14 = (arr_6 [2]);
                        var_15 = (max(var_15, (((((arr_0 [i_0] [i_1]) == var_2)) || ((max(((-11743 ? (arr_10 [6]) : var_9)), (((9281388601108737309 ? 63890 : var_8))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_2] = (max((((arr_1 [i_1] [i_0]) | (arr_1 [i_0] [i_0]))), ((max((arr_20 [i_7] [i_0] [i_2] [i_0]), 867707646)))));
                                var_16 = (((arr_17 [i_0] [i_1] [i_0] [i_1] [i_7]) + (arr_20 [i_7] [i_6] [i_0] [i_0])));
                                var_17 = (arr_17 [i_0] [i_1] [i_2] [i_1] [i_7]);
                            }
                        }
                    }
                    var_18 = ((((!(arr_3 [i_0] [i_1] [i_2])))));
                    var_19 &= (~(arr_6 [i_1]));

                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        var_20 = (arr_29 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]);

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_21 = var_0;
                            arr_32 [i_0] [i_2] [i_0] [i_8] = (25 & 68);
                            var_22 = var_1;
                        }
                        var_23 = (arr_3 [i_2] [i_2] [i_2]);
                        arr_33 [i_2] = (((((((((arr_6 [i_1]) & var_0)) == (arr_29 [i_2] [i_0] [i_1] [i_2] [i_2] [i_8]))))) | (((65532 < var_9) ? ((((arr_20 [i_0] [i_1] [i_2] [i_1]) & (arr_26 [i_2])))) : (arr_20 [i_0] [i_1] [i_2] [i_8 + 1])))));
                    }
                }
            }
        }
        var_24 = (max((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_7 [12] [12])));
    }
    var_25 &= 1585957818;
    var_26 = (((((var_5 + var_10) - var_2)) - (((255 - (var_8 + 72))))));
    #pragma endscop
}
