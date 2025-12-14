/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= ((!((((arr_5 [i_1]) / var_7)))));
                arr_6 [i_0] [1] [i_1] = ((~(((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_2] [i_1] [i_1] = ((!(!var_10)));
                        arr_15 [i_1] [i_2] = (min(((((var_5 < (arr_1 [i_3]))) ? (arr_2 [i_0]) : var_6)), (((var_6 <= var_7) ? (((arr_11 [11] [i_2] [11] [i_3 - 3]) & var_12)) : ((min(var_4, var_7)))))));
                        arr_16 [i_0] [i_1] [i_2] [6] &= (max((((!((min(var_3, var_3)))))), (arr_4 [i_1] [i_2])));
                        var_16 &= (min(((((7 / (arr_5 [i_2]))) - var_6)), (((arr_12 [8] [i_1] [i_3] [i_3] [i_3 - 2] [12]) ^ (arr_12 [12] [14] [i_2] [i_2] [i_3 - 2] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_17 = var_6;
                        arr_20 [i_0] [i_0] [i_1] [i_2] [1] [i_2] = ((-((((((arr_1 [i_4]) ^ (arr_7 [i_0] [i_1] [i_2] [i_4])))) ? (min((arr_19 [i_0] [i_1] [i_2] [i_2]), var_13)) : ((max((arr_12 [i_2] [14] [11] [i_1] [i_1] [i_2]), -5656228736638561794)))))));
                        var_18 += ((-(arr_4 [2] [i_1])));
                        var_19 = (max(((min(var_1, (arr_10 [i_2] [i_1] [i_1] [i_2] [4] [i_4])))), (min(((var_6 ? 19441 : (arr_3 [i_0] [i_1] [i_4]))), ((min((arr_17 [i_0] [10] [i_2] [i_4]), var_0)))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_1] [i_2] = var_11;
                        arr_24 [1] [i_0] [i_1] [i_1] [i_2] [i_2] = ((((-(arr_10 [i_2] [i_2] [i_2] [12] [i_5] [i_5]))) - ((56976 ? ((((-2147483647 - 1) > 1))) : 1547267104))));
                    }
                    var_20 += (((min(-19445, 16916503438550007918)) ^ (((-1725595325 / (arr_13 [8] [14] [i_2] [i_2]))))));
                    var_21 ^= var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((-(min(var_1, (arr_26 [i_6])))))))));
                            var_23 = (min(1725595323, 23396867));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_24 ^= (max(((var_6 ? (arr_40 [i_12 + 2] [i_12 - 1] [i_6] [i_6] [i_10 + 1] [i_6]) : (arr_40 [i_12 + 2] [i_12 - 1] [i_7] [i_7] [i_10 - 1] [i_7]))), (((((var_9 % (arr_32 [i_12 - 2] [i_6] [i_6] [i_6] [i_6])))) ? ((19426 ? 56965 : 21690)) : 12))));
                                var_25 = min((((((arr_32 [i_12] [i_12 - 1] [i_12] [i_12 + 2] [i_12]) + 2147483647)) >> ((((var_7 ? (arr_36 [i_6]) : 13849298617545607327)) - 18446744073709551555)))), ((-((~(arr_41 [i_6] [i_7] [i_10] [1] [i_12]))))));
                            }
                        }
                    }
                }
                var_26 += (max(((~((max(var_1, (arr_25 [i_7])))))), ((~(arr_41 [i_6] [i_6] [i_6] [i_7] [i_7])))));
            }
        }
    }
    var_27 = 0;
    #pragma endscop
}
