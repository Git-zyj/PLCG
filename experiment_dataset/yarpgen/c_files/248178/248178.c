/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [14] [14] [i_2] [i_3] [i_2] = (min(((5113244126870442255 ? 2049035528 : -2049035499)), ((min((arr_7 [i_0] [i_1] [i_0]), var_9)))));
                                arr_15 [i_4] [i_2] [8] [i_2] [i_0] = (max(-65, 1));
                                var_13 = (max((max(((max(-25, -2049035496))), (max((arr_0 [i_0]), var_12)))), ((((arr_6 [1] [i_1] [1] [i_3]) ? (arr_3 [i_0] [i_3] [i_3]) : (min(2049035520, 1)))))));
                            }
                        }
                    }
                    var_14 = var_4;
                    var_15 = var_11;
                }
            }
        }
    }
    var_16 = ((var_8 ? 7608366777371046829 : (((var_6 ? var_5 : (var_12 >= var_3))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_6] [i_6] [i_7] = (((arr_6 [i_6] [i_6] [i_6] [i_6]) || var_7));
                    arr_25 [i_7] [i_6] = ((((((arr_4 [i_7]) ? (arr_4 [i_5]) : (arr_4 [i_5])))) ? (max((arr_4 [i_7]), (arr_4 [i_5]))) : (arr_4 [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [11] [i_5] [i_5] = (arr_20 [i_5] [i_6]);
                                var_17 = (arr_28 [i_5] [i_5] [i_5] [i_5] [8] [i_5] [i_5]);
                                var_18 = (max(var_18, (((((var_0 ? var_4 : (arr_19 [i_7] [i_7] [i_7]))) * ((min(var_1, (arr_19 [i_5] [i_7] [i_7])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((min(4679394337192253811, (-2049035492 & var_8)))) ? 1 : 32271));
    #pragma endscop
}
