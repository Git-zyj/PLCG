/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2 - 1] = ((2726622376674265054 < ((((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (((arr_1 [i_2]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_5)) : ((-16176 ? (arr_6 [i_0] [i_1] [i_2] [1]) : var_7)))))));
                        var_14 = arr_4 [i_1] [i_1];
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_15 = (((((min((arr_12 [i_2 - 1] [i_0] [i_1] [i_0]), -19)))) == (((arr_0 [i_1] [i_0]) - var_7))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 1;
                        var_16 |= var_11;
                        arr_15 [i_4] = (((((max((25510 != 0), (arr_9 [i_1]))))) == ((((max(133162031, var_0))) ? (((var_3 ? var_1 : var_8))) : (max((arr_0 [i_0] [i_0]), var_3))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        var_17 = (((arr_16 [i_0] [i_0] [i_2] [i_0] [i_5]) ? ((-(arr_5 [i_0] [i_2]))) : ((((arr_17 [i_0] [3] [i_1] [3] [i_5]) ? 44 : -4602)))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((var_3 >> (((arr_2 [i_2 - 1]) - 3246932099))));
                        arr_19 [i_0] = 1789442482;
                        var_18 = (max(var_18, (arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        arr_22 [1] [i_2] [1] [i_2] [i_2] [i_2] = (((arr_0 [i_2] [i_6]) ? -22292 : (arr_10 [i_2])));
                        var_19 = ((+(((arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6]) ? (arr_8 [i_6 - 1] [i_6 - 1] [i_6] [13] [i_6 + 4]) : var_5))));
                        var_20 = ((((-18711 ? var_2 : (arr_20 [i_0] [4] [i_2] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 = 3939;
                                var_22 = (max(var_22, ((min((arr_17 [i_0] [i_1] [i_2 - 1] [i_7] [i_8]), (arr_17 [i_8] [i_8] [i_2 - 1] [i_2 - 1] [i_1]))))));
                            }
                        }
                    }
                    arr_27 [i_2 - 1] = (((((arr_21 [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2]) >= 7268942914795444930)) ? var_11 : (((120 >> (((min(28833, var_11)) - 28815)))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_23 = ((127 + (arr_24 [i_2] [i_2] [i_2])));
                        arr_31 [i_9] [i_2 - 1] [i_1] [i_0] = (((arr_8 [i_9] [i_9] [i_2] [i_0] [i_0]) ? ((var_4 ? -53 : var_0)) : (arr_20 [i_1] [i_2 - 1] [i_9] [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
