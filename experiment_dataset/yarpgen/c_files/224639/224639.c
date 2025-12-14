/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (var_0 - var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = min((arr_0 [i_0] [i_1]), (arr_3 [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 22;i_4 += 1)
                            {
                                var_16 |= (arr_6 [i_3] [i_1] [i_1] [5]);
                                var_17 = (arr_14 [13] [4] [i_2] [17] [i_4 + 1] [i_2]);
                                arr_15 [i_2] [16] [i_2] [i_2] [i_3] = (((+(min((arr_10 [i_0] [0] [i_4]), (arr_9 [i_2] [i_3] [i_2] [i_0]))))));
                                var_18 = (arr_14 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [18] [i_4]);
                            }
                            var_19 = (arr_12 [i_1] [i_0 + 3]);
                            var_20 = (min(var_20, (arr_0 [i_2] [i_2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_21 [i_5] = (arr_11 [i_6] [i_6] [i_5] [i_5] [i_5]);

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            {
                                var_21 ^= (arr_9 [i_8] [i_8] [i_5] [i_5]);
                                var_22 += ((min((arr_26 [8]), (arr_7 [i_7] [i_8] [i_9]))));
                            }
                        }
                    }
                    var_23 = ((!((((arr_7 [i_5 - 1] [i_6] [i_7]) * (arr_10 [i_5] [i_5] [5]))))));
                }
                var_24 = (((-(arr_24 [i_5] [i_5] [i_5] [i_5] [7] [i_5]))));
                var_25 = ((((((max((arr_2 [i_5] [i_5] [i_6]), (arr_12 [i_5] [i_5])))))) >= (arr_17 [i_5 + 1])));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
