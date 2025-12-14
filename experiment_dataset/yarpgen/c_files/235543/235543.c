/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (var_17 + -1);
    var_21 = min((((!(var_0 == var_9)))), var_3);
    var_22 |= ((((max((max(-1849669860, var_13)), (!-1849669860)))) ? (min((203 < var_2), -1849669859)) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [11] = 816756580499354013;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [11] [9] [i_2] [i_3] [i_4] [i_4] = (var_0 ? ((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : ((max((~var_17), var_10))));
                                var_23 &= ((((((((var_3 ? -1849669860 : var_6))) ? ((1 ? -3602535968607808602 : (arr_7 [i_0] [i_0] [i_0]))) : (((var_0 ? var_8 : 45801)))))) ? (((~((var_9 & (arr_3 [i_0] [i_1])))))) : (min((min(-1768496464, var_15)), (((var_12 ? var_2 : var_17)))))));
                                arr_16 [i_0] [i_1] [0] [i_3] [i_4] = (~2415090344);
                                var_24 = (min(var_24, (((var_13 ? (((-(min(28, 2475576222))))) : ((var_6 ? (max(8699450855348474925, var_1)) : (min(var_12, var_6)))))))));
                                arr_17 [6] [i_1] = (min((max(var_1, -4222)), (max(var_5, 8215))));
                            }
                        }
                    }
                    var_25 = (((!var_17) ? (max(var_9, (arr_2 [i_1 + 1] [i_1 + 1]))) : (arr_9 [9] [i_1] [i_1 - 1])));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_26 = ((((((min(var_19, var_17)) | (var_4 && var_5)))) ? -4 : ((((min(1, var_2)) | (max(var_9, var_5)))))));
                    arr_20 [i_0] [i_5] [6] = ((((var_17 == (arr_9 [i_0] [i_0] [1]))) ? var_6 : (((((min(1557349196, var_16))) || (((~(arr_1 [7])))))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_27 = ((((min((arr_21 [i_0 - 2] [i_1] [i_6]), (arr_21 [i_0] [i_1 - 1] [i_6])))) || (arr_19 [i_0] [i_0] [i_0])));
                    arr_23 [5] [i_1] [i_6] = (-(((-810621912 != 4870531434202996609) ? (min(-67, var_19)) : (~1))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_28 = ((~((2699970308067060565 ? (25993 ^ 3430249832) : (var_4 / 1093113022)))));
                                var_29 = ((!(((~(2737618095 != -12104))))));
                                var_30 = (((((-2093 ? (min(1099724720, (arr_22 [i_6] [i_1] [0] [i_1]))) : (((~(arr_1 [1]))))))) ? (min((arr_7 [i_0] [i_1 - 1] [i_0 - 1]), ((17725216474138383348 ? var_14 : var_11)))) : ((((var_15 == var_5) ? var_17 : (7225 < 11321613523404422174))))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_30 [i_9] [i_9] [1] [i_9] = ((var_14 >> ((((((var_2 ? var_12 : 2415090344))) >= (min(16077717268762276093, 15010966266052089457)))))));
                    var_31 = (max(var_31, 15746773765642491051));
                }
                arr_31 [i_0] [i_0] = ((~(((var_2 ? var_15 : var_13)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            {
                var_32 = ((+((((arr_34 [i_10] [i_11] [i_11 - 2]) < 1784634639825720056)))));
                arr_38 [10] [i_11] = (min(((((max(var_5, var_1)) == (~var_2)))), (((~var_12) ? var_14 : (5673754911720546362 / var_16)))));
            }
        }
    }
    #pragma endscop
}
