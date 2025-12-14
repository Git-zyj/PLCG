/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = -0;
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((+(max((arr_2 [i_3 + 4] [i_0 + 1]), (min(1, var_14))))));
                                var_18 = (((arr_4 [i_0 - 1] [i_1]) ? (arr_1 [i_2]) : (-var_8 >= var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] = (max(((0 | (max(-2026292070138065270, (arr_7 [i_1] [i_5 - 1] [i_5]))))), (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])));
                                var_19 = (max(((((30077 ? 0 : 0)))), (max(var_15, var_6))));
                                var_20 &= ((((((arr_14 [i_6] [i_2] [i_2] [i_0 - 2]) ^ var_7)))) || ((min((((var_9 ? var_9 : (arr_16 [i_2] [i_5 - 1] [i_2] [i_2] [i_1] [i_2])))), (0 - 1348066106)))));
                                arr_20 [i_0] [i_0] [i_1] [i_0 + 2] [9] = min(-1833331489188759843, (max((max((arr_9 [i_1] [i_0] [i_2] [i_1] [i_0] [i_1]), 13069)), (((var_16 + (arr_14 [i_0] [i_1] [i_1] [1])))))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] = (min(((((var_11 ? var_10 : 105)) & 0)), (arr_14 [6] [i_1] [i_1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_21 = (((((~30077) ? 0 : (((arr_22 [i_8] [i_7] [i_2]) ? (arr_3 [9] [9]) : var_15)))) & ((((arr_11 [i_0 - 1] [i_7] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]) / ((min(-14558, -1638307951))))))));
                                var_22 = 2026292070138065270;
                                var_23 -= (((((((~(arr_2 [i_7] [i_7])))) ? ((min(var_0, (arr_11 [11] [11] [i_2] [i_7] [i_8] [i_8])))) : (var_12 / var_4))) > var_12));
                                var_24 = var_0;
                                arr_27 [i_1] [i_1] [i_2] [0] [1] = (i_1 % 2 == zero) ? (((((((arr_15 [i_1] [i_0 + 2] [i_0 + 2] [10]) || -1))) << ((((((var_3 ? var_8 : (arr_5 [i_1] [i_1]))) - ((-(arr_16 [i_1] [i_1] [8] [i_7] [i_8] [i_2]))))) - 34536))))) : (((((((arr_15 [i_1] [i_0 + 2] [i_0 + 2] [10]) || -1))) << ((((((((((var_3 ? var_8 : (arr_5 [i_1] [i_1]))) - ((-(arr_16 [i_1] [i_1] [8] [i_7] [i_8] [i_2]))))) - 34536)) + 54)) - 17)))));
                            }
                        }
                    }
                }
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    var_25 = (((((var_7 ? 30077 : 4403251837909933119))) > ((max(((var_13 ? (arr_15 [i_0] [i_1] [i_9] [i_9]) : var_7)), var_5)))));
                    var_26 -= (max((min(var_11, (max(-25207, 1738138680)))), (((((arr_7 [i_0] [2] [i_9 + 2]) / var_10))))));
                }
                arr_31 [i_0] [i_1] = (max((arr_22 [i_0] [i_1] [i_1]), ((1 * (((arr_8 [i_1] [i_1] [i_0]) / 1348066106))))));
            }
        }
    }
    var_27 = var_14;
    var_28 |= (min(var_7, 0));
    var_29 = var_4;
    #pragma endscop
}
