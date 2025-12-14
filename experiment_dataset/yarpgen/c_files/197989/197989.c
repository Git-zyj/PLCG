/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (min(((((max(var_9, 3740))) << (var_4 - 13))), ((4694924732769118882 ? -126 : (-127 - 1)))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_11 = ((-((0 * (((arr_8 [i_2]) / (arr_3 [i_1] [i_3])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [6] = ((((((arr_6 [i_0 - 1] [i_0] [i_2 - 2]) ? (((min((arr_4 [i_0 - 3] [i_1]), -91)))) : (min(144044819331678208, 11289039965928523381))))) ? (min(1, (108 ^ 3402135669))) : (((1 * 3402135675) ^ 1))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_2] = (max((arr_7 [i_0] [5] [1] [i_2]), 12339170698824296071));
                        var_12 = (min(((var_1 ? (arr_6 [i_0 - 1] [i_0 - 2] [i_2 + 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 2]))), (!var_7)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_13 *= ((-127 ? var_7 : (arr_14 [i_2 + 1])));
                        var_14 = (((((var_1 ? var_6 : (arr_13 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] [1])))) ? ((~(arr_3 [i_0] [i_0 + 1]))) : 1));
                        arr_19 [i_0] [i_1] |= -3402135696;

                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            var_15 = (((((var_6 ? 77 : 1))) ? (((((arr_3 [i_1] [i_6 + 3]) >= -81)))) : (arr_18 [i_6 - 2] [i_6] [i_2 - 3] [i_2 - 1] [i_1])));
                            var_16 = (((arr_10 [i_2] [i_0 - 1] [i_6 - 3]) ? var_9 : (arr_6 [i_0] [i_2] [1])));
                            var_17 = 62025;
                            var_18 = (arr_3 [i_0 - 1] [i_2 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
