/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (((arr_1 [i_3]) ? ((min((arr_9 [i_2] [i_1]), (arr_9 [i_2] [i_3])))) : (!524287)));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = (min((~-45954), (min((arr_4 [i_1] [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((-(max(((((arr_5 [i_0] [i_0] [i_0]) / var_18))), (-6418274423632816620 / 156)))));
        var_19 = (max((((((var_1 | (arr_3 [i_0] [i_0] [14])))) ? (arr_2 [i_0] [i_0] [i_0]) : 91141678)), ((9145680722666720571 ? 0 : 3285848243))));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((((min((arr_2 [2] [i_4] [i_4]), -10260))) < ((((((-31820 ^ (arr_4 [11] [i_4] [11] [i_4 + 1]))) == ((((arr_6 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) & (arr_13 [i_4] [i_4]))))))))));
        arr_18 [i_4] = var_7;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_4] = (~(((arr_5 [i_4] [i_4 - 1] [i_4 + 1]) + 24238)));
                        arr_29 [0] [i_4] [i_6] [0] [i_6] = (arr_7 [i_4] [i_4]);
                        var_20 = (min(var_20, ((-(~4754269542842936949)))));
                        var_21 *= ((~(max(var_2, (arr_21 [i_6] [i_6] [i_4 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    arr_36 [i_4] = (arr_16 [i_4]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_42 [i_4] [i_4] [i_9] [i_4] [i_11] = var_9;
                                arr_43 [i_4] [i_4] = var_8;
                            }
                        }
                    }
                    arr_44 [i_4] [1] = (arr_2 [i_4] [i_8] [i_4]);
                    var_22 = (min(((max(-8648, 90))), (((((arr_19 [i_4] [i_9]) || -3921383526121034888)) ? (arr_24 [i_4] [i_4] [1]) : ((var_11 ? 1 : (arr_37 [i_9] [i_4] [i_9] [i_9])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
    {
        var_23 |= (arr_46 [4]);
        arr_49 [i_12 - 1] [i_12] = ((~((-(arr_2 [14] [14] [14])))));
    }
    var_24 = (min(var_24, ((max((max(var_3, (~var_13))), var_6)))));
    #pragma endscop
}
