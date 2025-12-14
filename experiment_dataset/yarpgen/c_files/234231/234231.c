/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = ((-9 | (min(((min(151, 3802476360))), 1))));
                    var_16 = (((var_12 ^ 11) ? ((var_10 ? (arr_5 [i_0] [i_2] [i_2 + 1]) : var_0)) : (((((max((arr_2 [i_1] [i_1]), var_5))) << (var_4 - 46582))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min((((arr_0 [i_4 - 2]) & ((var_10 ? var_0 : var_9)))), ((((min(var_3, 4294967292)) << (((min(var_6, 8)) + 1348450333196484936)))))));
                                var_18 = ((arr_0 [i_2]) > (((1 & var_13) ? (((0 ? var_4 : 1))) : 5450318725886188437)));
                                arr_11 [i_0] [i_2] [i_0] = ((((((max(var_13, 8))) ? (max(var_14, 2275607403)) : (((var_6 ? 1 : var_0))))) > (0 || var_4)));
                                var_19 = (min(var_19, (23599 & var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (min(65535, (((1 ? 9 : 492490919)))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_2));
                                var_22 = (min(var_22, (((var_1 | (((var_14 | 1649334889086003144) << (((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_0 - 246786474488683921))) - 33554405)))))))));
                            }
                        }
                    }
                    var_23 = var_11;
                    arr_24 [i_6] [10] [i_7] = ((((max(21597, 1))) ? ((min(1, 232))) : 11194));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {
                {
                    var_24 = (((((((8 ? var_5 : var_14))) ? ((var_11 ? (arr_31 [i_10] [i_11]) : var_7)) : ((min((arr_26 [i_10]), var_13)))))) ? ((((max(var_2, 0))) ? 43939 : (1382237010 < 7))) : (!-763826980));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                var_25 = ((42781 & ((((max(var_12, var_1))) ? ((min(0, var_5))) : (((arr_25 [i_14]) | 1))))));
                                arr_36 [i_12] [i_11] [1] [i_13] [i_14] = ((((min(var_2, (((arr_35 [3] [i_11] [i_12 + 1] [i_13] [i_13]) ^ 1))))) ? (((arr_27 [i_10 + 3] [i_10 + 3]) / 1)) : (((1 ^ (var_11 % var_12))))));
                            }
                        }
                    }
                    arr_37 [i_10] [i_10] [i_12] [i_12] = ((var_14 ? (((~((var_11 + (arr_28 [i_12])))))) : (min((min(var_8, (arr_33 [i_10] [i_12] [i_11] [i_11] [i_12 + 1] [i_12 + 1]))), ((min(var_12, var_1)))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_26 &= (+(min((65519 - 2481759062), (var_7 + var_3))));
                                var_27 = (min(var_27, var_9));
                                arr_43 [i_10 + 3] [i_11] [i_12] [1] [i_12] = ((((arr_29 [i_12] [i_10 - 1] [i_12]) ? (arr_29 [i_12] [i_10 + 3] [i_12]) : (arr_29 [i_12] [i_10 - 2] [i_12]))));
                            }
                        }
                    }
                    arr_44 [i_10] [i_12] [i_11] [i_12] = ((arr_38 [i_10 - 1] [i_10] [i_10] [i_12]) ^ (arr_39 [i_12 - 1] [i_12] [i_12] [9] [i_10 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
