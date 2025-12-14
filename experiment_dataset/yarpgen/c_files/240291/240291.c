/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [11] [i_0] [i_0] = ((((arr_9 [i_0] [i_4] [i_4] [i_3] [i_4]) - (arr_10 [i_0] [i_3]))) - (((arr_8 [0]) + 48)));
                                arr_14 [i_2] [i_2] [i_3] [i_4] [i_4] [i_2] = 62;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= var_5;
                            }
                        }
                    }
                    var_14 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [i_1] [i_2] = 150;
                    var_15 = (min((arr_1 [i_0]), (arr_5 [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [2] [2] [i_0] = var_2;
                                var_16 = (((((-(((arr_19 [i_0] [i_1] [i_2] [i_2] [7]) * var_12))))) ? ((-(arr_0 [i_5 + 1]))) : ((min((arr_22 [i_6] [10] [1] [i_2] [0] [i_0]), var_13)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_1;
    var_18 = (53 >= -var_1);
    #pragma endscop
}
