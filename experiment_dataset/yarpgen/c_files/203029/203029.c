/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_9;
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((((max((arr_1 [i_2] [i_1]), 2581159138))) ? (((!(((arr_6 [i_1] [i_1] [i_1]) && (arr_4 [i_1] [i_1] [i_2])))))) : (((arr_6 [i_1] [i_0 - 1] [i_2]) + 68))));
                    arr_8 [i_1 + 2] [19] [i_1] = (((arr_1 [i_1 + 2] [i_0 + 1]) - (arr_1 [i_1 + 1] [i_0 - 1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1 + 2] [i_2] [i_1] [i_1] = var_4;
                        arr_13 [i_1] = (arr_6 [i_1] [i_1] [i_1]);
                    }
                    var_13 = (max(-7356170151284336503, (arr_6 [i_1] [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_5] [i_1] = (max(var_6, (arr_16 [i_5] [i_1] [i_2] [i_5] [i_5])));
                                var_14 = (((((max((arr_4 [i_1] [i_1] [i_1]), (arr_1 [i_0 + 3] [i_0 + 3]))))) ? (((arr_15 [i_0 + 2] [i_1] [i_2] [i_0] [i_5] [i_1]) + (max((arr_16 [i_0 + 1] [i_1] [i_2] [i_1] [i_5]), 37937)))) : ((min(-6, (~196))))));
                                arr_20 [i_0] [i_2] [i_2] [12] [i_5] [i_2] [i_1] = (((((+(((arr_10 [i_1] [i_5] [i_2] [i_0] [i_5] [i_0]) ? (arr_2 [i_0 + 1] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1])))))) ? -var_1 : 21));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
