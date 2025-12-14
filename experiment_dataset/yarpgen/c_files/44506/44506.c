/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((((arr_1 [i_0] [i_0]) ? var_7 : var_10))) ^ (min(var_7, var_4)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (min(var_13, ((!((((arr_5 [i_1]) << (var_7 - 181))))))));
            var_14 = ((((min(var_10, var_10)))));
            var_15 = ((((((~var_5) ^ (~191)))) ? ((191 | (min(var_10, (arr_3 [i_0] [i_1] [i_1]))))) : (((255 & (arr_0 [i_0] [i_0]))))));
        }
        var_16 = (max(var_16, var_2));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((arr_12 [i_2] [i_4]) >= (((((arr_8 [i_2] [i_3]) && var_9)))))) ? (((var_2 ^ var_2) ? var_10 : (var_7 | 64))) : (!var_2))))));
                    arr_13 [i_2] [i_3] [i_4] = ((((((((1 & (arr_8 [14] [i_3])))) ? (var_10 | var_6) : (((arr_5 [i_3]) ? (arr_4 [i_2] [i_3]) : var_3))))) ? (((((var_6 & (arr_4 [i_2] [i_3])))) ? ((200 ? var_7 : 0)) : (((max(57, (arr_10 [i_2] [i_2]))))))) : (min(66846720, var_3))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_18 = var_5;
                            var_19 = ((var_9 ? ((((arr_16 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2]) >= var_10))) : var_6));
                            var_20 = (max(var_20, (((-((var_9 ? var_7 : var_0)))))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_21 [i_2] [i_3] [11] [i_5] [i_7] [i_5] [i_7] = (var_8 == var_4);
                            var_21 = (((var_6 ? var_0 : var_8)));
                            var_22 = (min(var_22, ((((var_4 ? (arr_11 [i_3] [i_3] [i_7]) : 88))))));
                            arr_22 [i_2] [i_5] [i_4] [i_5] [i_7] [i_2] [i_5] = (((~var_1) ? var_10 : (var_3 >> 0)));
                            arr_23 [i_2] [i_2] [i_2] [1] [i_5] = ((-(arr_9 [i_3])));
                        }
                        arr_24 [i_2] [i_3] [i_5] = ((var_5 >= var_3) ? (((arr_9 [i_5]) ? 12021901638198247135 : (arr_3 [i_5] [2] [i_4]))) : 188);
                        var_23 = (((var_8 ? var_3 : var_10)));
                        var_24 = (min(var_24, (((var_4 < (var_4 + var_6))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = ((!((((arr_4 [i_2] [i_8]) | var_5)))));
                        arr_27 [8] [i_3] [i_3] [i_3] [i_3] [i_3] = (max((max((((var_6 / (arr_10 [i_2] [i_4])))), 12734167695431043188)), ((max(((min(var_6, var_6))), (max(1, var_5)))))));
                        var_26 = (((var_10 - (min(188, var_5)))));
                        var_27 = (((5279236537764672385 ? ((49079 ? var_0 : var_9)) : (arr_25 [i_2] [18] [18]))));
                        var_28 = (((min((arr_16 [i_2] [i_2] [i_3] [i_4] [i_8] [i_2]), (var_2 + 15)))) ? (-var_4 - var_9) : (((arr_26 [i_2] [i_2] [i_4] [i_8]) ? (arr_26 [i_3] [i_3] [i_3] [i_3]) : (arr_26 [i_2] [i_3] [i_4] [i_8]))));
                    }
                }
            }
        }
        var_29 = (min((~var_10), (((~var_9) ? var_4 : var_5))));
    }
    #pragma endscop
}
