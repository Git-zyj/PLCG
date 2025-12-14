/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, 7));
                                var_15 = ((-((max((arr_12 [i_4 - 2] [i_0 - 1]), (arr_12 [i_4 - 2] [i_0 - 1]))))));
                                arr_14 [i_0] [i_0 - 2] [i_1] [i_0 - 2] [9] [i_4] = 32767;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = (max(7187601343368758535, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                            var_17 = (max(var_17, -var_10));
                        }
                    }
                }
                var_18 = ((!((max((~var_6), 10)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_24 [i_0 - 2] [i_1] [9] [i_8] [i_7] [i_8] = -var_4;
                            var_19 |= (((~(min(3099963852896484578, 1)))));
                            var_20 = (var_11 ? var_1 : ((~(min((arr_23 [12] [i_1] [i_7] [i_7] [i_8] [6]), (arr_20 [i_0] [i_0] [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_8 ? (var_2 ^ var_0) : var_8));
    var_22 = var_0;
    #pragma endscop
}
