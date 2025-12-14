/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (29 + 4294967295);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (max((~2587260996), (min(2186725910, (~65513)))));
        var_16 = ((~((max(47387, -13384)))));
        arr_4 [i_0] [i_0] = (min(((~((var_1 ? 2587260996 : (arr_1 [i_0] [i_0]))))), 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 -= (arr_7 [3] [3]);
                    var_18 = var_5;
                }
            }
        }
        var_19 = (((arr_0 [i_1] [i_1]) * ((((arr_6 [i_1]) > var_6)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_1] = (arr_19 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                        var_20 = ((((~(arr_19 [i_1] [i_4] [i_5] [i_6]))) | 65530));
                        var_21 = (max(var_21, (((4601789533034491989 ? (arr_2 [i_1] [i_6]) : (((((arr_2 [i_1] [i_1]) || (arr_10 [i_5]))))))))));
                        arr_21 [i_1] [i_1] [0] [i_1] [i_1] = (arr_19 [i_5] [i_6 + 1] [i_5] [i_6 - 1]);
                        var_22 = ((-6768775236433210977 ? (((~(arr_9 [i_1] [i_1] [i_1])))) : ((~(arr_6 [i_5])))));
                    }
                }
            }
        }
        var_23 = (((~-13384) ? (((arr_9 [i_1] [i_1] [i_1]) & (arr_6 [i_1]))) : 18840));
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_7] [i_8] [i_7] = ((((max(((var_7 & (arr_30 [i_8] [i_8] [i_8]))), (arr_22 [i_7 - 1])))) ? (arr_25 [i_7 - 1] [i_7] [7]) : (((arr_1 [i_7 - 1] [i_7 - 1]) ? ((~(arr_30 [i_7 - 1] [i_7] [3]))) : (arr_2 [i_8] [i_8])))));
                    arr_32 [i_7] [i_7] [i_8] [i_9] = (min((~-6237315387024095801), ((((~0) ? (((arr_28 [i_7] [i_8] [i_8] [i_9]) ? (arr_30 [i_7] [i_8] [i_9]) : (arr_26 [i_7]))) : ((-1954027795 ? (arr_29 [i_7] [i_7] [i_7] [i_7]) : 1341649682)))))));
                    var_24 = (~(((arr_25 [i_7] [i_7 - 1] [i_7]) ? 25983 : 1610)));
                }
            }
        }
        var_25 -= (max((arr_29 [i_7 + 1] [5] [i_7] [i_7 - 1]), 2108241385));
    }
    var_26 = var_3;
    var_27 = var_6;
    #pragma endscop
}
