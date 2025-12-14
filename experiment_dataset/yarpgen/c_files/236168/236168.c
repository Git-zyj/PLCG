/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_0] = 43889;
                                var_14 *= (min((max(247, 49)), 16));
                                arr_14 [i_0] [13] [i_4] [i_0] [i_0] = var_4;
                            }
                        }
                    }
                }
                var_15 = (max(var_15, (arr_4 [i_0] [19] [16])));
                arr_15 [7] [14] = 29;
                arr_16 [i_0] [i_0] [i_1] = ((((max((arr_8 [i_0] [14]), var_6))) ? (((arr_12 [6] [0] [i_0] [i_1] [i_1]) ? (arr_12 [20] [i_1] [i_0] [i_1] [i_0]) : 162)) : 96));
                var_16 = ((((105 ? (((var_4 ? 15 : (arr_2 [i_1] [i_1] [i_0])))) : (((arr_8 [i_0] [i_0]) ? 1049117797 : var_0)))) & ((max((((-1 ? var_6 : (arr_8 [i_0] [23])))), (max(var_10, (arr_7 [4] [4] [8] [8]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_17 = var_0;
                    arr_24 [i_6] [i_7] = (((arr_9 [11] [i_6] [i_7]) ? (((min(43862, var_6)))) : (min((arr_18 [5] [i_7]), (4080 - var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
