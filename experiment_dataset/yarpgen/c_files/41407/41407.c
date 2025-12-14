/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 = ((((-(arr_2 [i_0]))) << (var_10 - 528562587)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = var_16;
        var_19 = ((!((min((max(var_4, var_3)), -47)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_20 = (max(var_20, ((min((((~(arr_5 [i_2])))), ((~(arr_8 [i_2]))))))));
        var_21 += (arr_3 [i_2]);
        var_22 = ((-(min(((((arr_2 [i_2]) ? (arr_0 [i_2] [i_2]) : (arr_8 [i_2])))), var_15))));
        var_23 = (((((max(1048448, (arr_7 [i_2]))) / ((max((arr_8 [i_2]), (arr_5 [i_2]))))))) ? (((!(arr_0 [i_2] [i_2])))) : ((((!(arr_2 [i_2]))))));
    }

    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_24 |= (max(((((arr_10 [i_3 + 3] [i_3 + 3]) >= var_3))), ((~((min(1070, 1070)))))));
        var_25 = (min(var_25, (((((((arr_9 [i_3 + 1] [i_3]) << (((((arr_5 [i_3 + 2]) + 44)) - 27))))) ? ((((max((arr_9 [i_3] [i_3]), 64466))) ? (!64466) : (var_8 < var_16))) : ((min((arr_5 [i_3 + 1]), (arr_4 [i_3] [i_3 - 1])))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {
                var_26 = (~253);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_27 |= (max(253, (((((arr_9 [13] [1]) ? 51095 : 1069)) | (!2)))));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 22;i_8 += 1)
                            {
                                var_28 = (arr_1 [3]);
                                var_29 = (((arr_19 [4] [i_5] [i_5 + 2] [4] [i_5]) + 424996689));
                                arr_21 [i_4] [i_5] [i_6] [i_7] [i_5] = ((!(~var_11)));
                                arr_22 [i_4] [i_6] [i_4] [i_4] [i_4] [i_4] = (((((var_14 ? var_4 : (arr_18 [i_4] [i_4] [i_4] [i_4])))) ? var_0 : (((12370 << (var_1 + 22616))))));
                            }
                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                var_30 *= ((+((min((arr_11 [i_4]), (arr_11 [i_4]))))));
                                var_31 *= (min((arr_23 [i_4] [i_6 - 3] [i_6 + 2] [i_9] [i_9]), ((((var_4 - var_16) ? ((~(arr_18 [11] [i_6] [i_7] [i_7]))) : (241 && var_12))))));
                                var_32 ^= ((~(var_3 + 1058)));
                                var_33 = 6156;
                                var_34 = (((arr_26 [i_5 - 2] [i_5] [i_6] [i_6 - 2] [i_6 - 1]) + ((max((arr_11 [i_7]), 32758)))));
                            }
                            var_35 = (max(var_35, (((!(arr_18 [i_7] [i_6 + 3] [i_5 + 1] [i_7]))))));
                            arr_27 [i_7] [i_6] = ((((((1070 ? var_9 : (arr_15 [i_4] [i_5]))) < -25285)) ? 64451 : (max((!var_5), ((var_5 ? var_4 : (arr_20 [i_4] [i_4] [i_6])))))));
                        }
                    }
                }
                var_36 = (min(var_36, (((!((min((((!(arr_16 [i_4])))), (((arr_17 [i_4] [i_5 + 2] [i_5]) - var_12))))))))));
                arr_28 [i_4] = (arr_15 [i_4] [16]);
            }
        }
    }
    #pragma endscop
}
