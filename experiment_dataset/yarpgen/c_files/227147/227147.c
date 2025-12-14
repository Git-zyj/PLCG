/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (((((!(arr_2 [i_1 + 1] [i_1] [i_1 + 3])))) > (((!(arr_4 [i_1 + 2]))))));
                arr_5 [i_0] = ((!(arr_1 [3] [20])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 24;i_4 += 1)
                            {
                                var_12 = ((52227 >> (((~-var_7) + 51))));
                                arr_14 [i_3] [i_3] [i_2] [i_3] [19] = ((max((arr_12 [14] [i_4 + 1] [i_3] [i_2] [i_1] [i_0]), 127)));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 23;i_5 += 1)
                            {
                                var_13 *= ((var_5 ? var_10 : (!584552220)));
                                var_14 = ((32767 ? 32762 : 871277924));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_15 |= -var_3;
                                arr_21 [15] [24] [i_2] [24] [i_6] [i_1] [i_0] = (~var_9);
                                arr_22 [i_0] [i_1] [i_0] [i_2] = (((arr_4 [i_1 - 1]) ? (arr_16 [i_1] [i_1] [i_2] [8]) : var_4));
                                arr_23 [i_2] = (var_10 || var_3);
                            }
                            for (int i_7 = 3; i_7 < 23;i_7 += 1)
                            {
                                var_16 = var_1;
                                arr_26 [i_0] [i_2] [i_2] [i_3] [i_7] = -1;
                                arr_27 [i_0] [i_0] [6] [i_0] [14] [i_7 - 2] |= 737243836;
                            }
                            var_17 = ((var_5 * (!17)));
                            var_18 = (max(((((var_4 > var_5) ? (!1530263586) : (!-67)))), ((36028797018963967 ? var_9 : 28671598856229000))));
                        }
                    }
                }
                var_19 = (((var_3 / var_4) != var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                arr_34 [i_8] [i_8] [i_8] = (((((var_0 - (arr_10 [i_9] [i_9] [i_8] [i_8])))) || ((((0 ^ 584552221) ? (-5072868004193755816 > -584552222) : 4294934528)))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_20 = 32769;

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 18;i_12 += 1)
                            {
                                var_21 = (max(var_21, ((((arr_20 [i_9 + 2] [i_9] [i_12] [i_9 + 2] [i_9 - 1]) ? 1709242404 : var_5)))));
                                var_22 = (((arr_33 [i_8] [i_9] [i_12]) ? -9 : -1));
                                arr_42 [i_8] [i_9] [0] [i_11] [8] = (var_5 ? (arr_24 [i_9] [5] [i_9] [i_9] [i_9 + 3] [i_9]) : var_3);
                                var_23 = (min(var_23, (arr_6 [i_8])));
                            }
                            var_24 = 11;
                            var_25 = (min(var_25, ((min(((max(102, (arr_4 [i_9 + 1])))), (((arr_4 [i_9 + 3]) ? -3473033416645958787 : (arr_12 [i_9 - 2] [i_9 - 2] [i_9] [18] [i_8] [i_9 - 2]))))))));
                        }
                    }
                }
                var_26 *= -1;
            }
        }
    }
    var_27 = ((0 ? (~1304884696) : (min(var_1, var_3))));
    var_28 = var_4;
    #pragma endscop
}
