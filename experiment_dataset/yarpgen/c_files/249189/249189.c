/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = var_12;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((~(((((arr_1 [8]) ? 2147483647 : var_13)) << (8188 - 8188)))));
                                var_19 -= (255 - 26);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = 4294967295;
                                arr_21 [5] [i_6] [i_2] [i_5] [i_6] [11] = (arr_7 [3] [i_6] [i_6] [i_6] [i_6] [12]);
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [6] [i_2] = ((((var_6 ? (arr_7 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_2] [i_2] [1] [i_0] [i_0] [i_0]))) < (((!((var_11 > (arr_16 [0] [0] [i_2]))))))));
                    arr_23 [i_2] [i_0] = min((arr_1 [i_1]), (((arr_11 [i_0] [8] [8]) ? (arr_6 [i_1] [i_1] [10] [i_0]) : var_9)));
                    var_21 = (((((arr_5 [i_2] [5] [10]) ? (arr_5 [i_2] [i_2] [i_2]) : (arr_5 [8] [i_1] [i_0]))) + ((-31061 ? 892321599 : -27))));
                }
            }
        }
    }
    var_22 = ((((max(127, (var_16 * -3764)))) ? var_18 : var_1));
    var_23 = ((~(var_4 || var_16)));
    var_24 = (max(var_24, (((-(var_2 + var_6))))));

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_34 [i_7] [i_9] [i_8] [i_7] = var_10;
                        arr_35 [i_7] [i_7] [i_7] [i_9] [i_9] [6] = (arr_24 [i_7]);
                        arr_36 [i_10] [i_9] [i_7] [5] [i_7] = (max((arr_33 [i_10] [i_9] [i_8] [i_7]), (min(229681142, (((arr_32 [i_7] [i_8] [i_9] [i_10]) ? (arr_33 [6] [3] [i_7] [i_7]) : var_5))))));
                    }
                }
            }
        }
        arr_37 [16] &= var_17;
        arr_38 [i_7] = ((159 ? (((534385510 || (0 <= 1)))) : ((max((arr_26 [i_7] [i_7]), (arr_26 [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_41 [i_11] [i_11] = (((arr_26 [i_11] [i_11]) != ((((arr_39 [i_11]) && var_3)))));
        arr_42 [i_11] = (((arr_33 [i_11] [i_11] [i_11] [i_11]) ? (arr_33 [i_11] [i_11] [i_11] [i_11]) : (arr_33 [i_11] [i_11] [i_11] [14])));
        var_25 -= ((1567756670 ? (-9223372036854775807 - 1) : (((((arr_40 [i_11]) < 1125899906842623))))));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_26 &= min((max(1504636025, (arr_43 [i_12] [i_12]))), ((max((arr_45 [i_12]), (arr_43 [i_12] [i_12])))));
        var_27 &= (~84);
    }
    #pragma endscop
}
