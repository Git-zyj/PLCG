/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (arr_8 [i_0] [i_1 - 1])));
                                var_12 = (((arr_0 [i_1 - 1]) + ((-(arr_0 [i_1 - 1])))));
                            }
                        }
                    }
                }
                var_13 = (((((((max(var_3, (arr_3 [9])))) - (((arr_10 [2] [i_1]) ? (arr_8 [i_1] [i_0]) : var_7))))) - var_10));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_14 = ((~(-9223372036854775807 - 1)));
                    var_15 = (arr_14 [i_0] [i_0] [i_5]);
                    arr_15 [7] [i_5] [8] [8] = var_5;
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_16 = ((((min((arr_4 [i_0] [i_1 - 1] [3]), (arr_2 [i_6])))) ? var_0 : (((var_6 >= (arr_8 [i_0] [i_0]))))));
                    var_17 = (((((arr_17 [i_6] [i_1 - 1] [i_0]) == (arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) << ((((min(var_3, var_7))) + 7455147582874230751)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [i_7] [i_6] [i_1 - 1] [i_8] &= ((((!(arr_20 [i_8] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8]))) ? ((((arr_0 [6]) > (arr_10 [i_8] [i_1 - 1])))) : (((!(((var_4 ? var_2 : (arr_14 [13] [i_6] [i_0])))))))));
                                var_18 += (arr_0 [i_0]);
                                var_19 *= ((((+(((arr_8 [i_0] [i_8]) << (var_1 - 2834176299698106104))))) - -var_3));
                                var_20 = (min(var_20, ((max(((~(-9223372036854775807 - 1))), (((((2279914213 ? -1 : 2015053076))) ? 1 : (-9223372036854775807 - 1))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_21 = (min(var_21, (arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_9] [i_9])));
                    var_22 = (arr_26 [i_0]);
                }
                arr_27 [i_0] [i_0] = ((max((arr_23 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]), 1)) / var_8);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                {
                    var_23 &= (min((((((~(arr_29 [11] [i_10])))) ? (((arr_36 [i_10] [i_11] [i_11] [2]) ? (arr_30 [i_11]) : (arr_32 [i_11] [i_10] [i_12]))) : (max(var_8, 1)))), (((-((1 % (arr_34 [i_11]))))))));
                    var_24 = (arr_29 [i_10] [i_10]);
                    var_25 = min(var_1, ((min((arr_34 [i_10]), (~var_0)))));
                }
            }
        }
    }
    var_26 -= var_10;
    var_27 = 1;
    #pragma endscop
}
