/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min((arr_2 [i_1] [i_0 + 1]), var_1));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 ^= var_7;

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (min((((0 ? (((!(arr_0 [i_0])))) : 1757292318))), (max((((75 ? (arr_2 [i_0] [i_2]) : (arr_2 [i_1] [i_2])))), (((arr_3 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_7 [i_0])))))));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_0] [6] [i_3] [i_4] = (arr_8 [i_0]);
                            var_23 = (min(var_23, (((-(((arr_7 [i_2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0]))))))));
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0] = (arr_9 [i_0] [i_1] [i_0] [i_1] [9]);
                            var_24 = (max(var_24, (arr_8 [i_2])));
                            var_25 = (arr_10 [i_0 + 1] [i_1 - 2] [i_2] [i_3 + 2] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = 8571594912965269215;
                            var_27 = (((arr_2 [i_0] [1]) ? (min((((arr_8 [i_0]) ? 1 : var_1)), (arr_14 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]))) : ((var_4 - (0 / var_0)))));
                        }
                    }
                    arr_18 [i_0 + 1] [i_1] [i_0] = (~11412981536746415643);
                    arr_19 [i_0] [0] [i_2] [i_0 + 1] &= ((~(arr_7 [i_2])));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_28 = (arr_17 [i_0] [0] [i_0] [i_1 - 2] [i_0] [i_7]);
                    var_29 = (arr_14 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7]);
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_30 *= (arr_25 [i_1 - 3]);
                    var_31 *= ((((1 ? (max((arr_22 [i_0]), 11412981536746415643)) : (((arr_17 [i_1] [i_1 - 3] [12] [i_1] [i_1 - 3] [2]) ? (arr_7 [10]) : (arr_3 [i_0] [10]))))) / ((((arr_23 [i_0] [i_1]) & var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
