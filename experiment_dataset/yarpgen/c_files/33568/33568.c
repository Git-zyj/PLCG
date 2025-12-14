/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_3] = (-1 == 18287599503697206529);
                            var_10 += (((((arr_7 [i_1 + 1] [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1]) | 0)) >= (-127 - 1)));

                            for (int i_4 = 3; i_4 < 22;i_4 += 1)
                            {
                                var_11 = (min(var_11, (((((arr_1 [0]) ? 125829120 : (8116667551273077915 && -31136)))))));
                                var_12 = (max(var_12, ((((arr_4 [i_0] [i_1 + 1] [20] [i_3]) ? (arr_5 [8]) : var_9)))));
                                var_13 = (arr_8 [i_0] [9] [i_2] [i_3] [1]);
                                var_14 = ((max((arr_1 [i_0]), ((1 ? -1853102247 : -31136)))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [9] [i_0] = ((var_5 ? var_6 : ((var_0 ? (max(var_2, -19607)) : 1073741822))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((((~((var_9 & (arr_3 [9] [i_0]))))) / ((((-9223372036854775807 - 1) ? (arr_4 [i_1 - 1] [i_0] [i_0] [i_1 - 2]) : 32764)))));
            }
        }
    }

    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_15 = ((!((((arr_6 [4] [i_5 - 2] [i_5] [i_5 - 3]) ? (arr_6 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2]) : (arr_6 [i_5 - 1] [i_5 + 1] [13] [i_5 + 1]))))));
        var_16 = (-19589 | 19606);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_17 -= 128;
        arr_20 [7] [i_6] = var_9;
    }
    var_18 = max(var_7, -488930188);
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
