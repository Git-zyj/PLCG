/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 % var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (max((((30893 ? (((-(arr_4 [i_1] [i_1] [i_3])))) : (min(var_9, -30879))))), (((arr_0 [i_3]) >> (((arr_0 [8]) - 5610972589816888250))))));
                                var_12 = (min(3887322017, 30876));
                            }
                        }
                    }
                }
                var_13 = ((((var_4 ? var_7 : (arr_7 [i_0] [i_1] [i_0] [i_1]))) >= (((arr_3 [i_0] [2] [i_1]) ? ((var_9 - (arr_9 [i_1 - 1] [i_0] [i_0] [i_0] [i_0]))) : (240 % var_3)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1] = (((((max(var_5, var_8))) ? -26489 : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                            var_14 = (max(30858, (arr_6 [i_0] [i_1] [i_0] [9])));
                            var_15 = ((((arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) / var_6)));
                            var_16 = var_5;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_17 = var_4;
                                arr_24 [i_0] [i_1 - 1] [i_7 + 1] [i_8] [i_9] [i_1] = (arr_19 [i_1] [i_8]);
                                var_18 = (arr_19 [i_1] [10]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((-9223372036854775807 - 1) ? ((((arr_14 [i_0] [i_1] [1] [i_1] [i_10] [i_11]) - (arr_14 [1] [i_1] [i_10] [i_10] [10] [i_0])))) : ((-1 ? 30882 : 7735077451662558373)))))));
                            arr_29 [i_1] = (arr_13 [i_0] [i_1] [i_10] [i_11]);
                            arr_30 [i_0] [i_0] [i_1] [i_10] [i_1] [i_11] = (max((min((arr_12 [i_1 - 1] [i_1 - 1]), (arr_14 [i_0] [i_1] [i_1] [i_1 - 1] [i_11] [i_11]))), 32748));
                            arr_31 [i_0] [i_1] [i_1 + 1] [i_10] [i_10] [i_11] = ((((-(2131120900445700187 - 2131120900445700172))) - ((((arr_4 [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1] [i_1 - 1] [i_1 + 1]))))));
                            arr_32 [i_1] = (var_1 >= -30872);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
