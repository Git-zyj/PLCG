/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_0, ((max(1494452439, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 9;i_4 += 1)
                            {
                                var_11 = var_9;
                                var_12 = var_6;
                            }
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = ((!(((arr_3 [i_1 + 1] [i_1]) || (arr_8 [i_1 + 1] [0] [i_1 - 1] [i_1 - 1])))));
                            var_13 = ((-(arr_0 [i_1 + 1])));
                        }
                    }
                }
                arr_14 [i_1] = (min(10010915250974048474, (((1 ? 3227 : -20675)))));
                var_14 = (max((((arr_4 [i_1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_7 [i_1 + 1]))), (arr_7 [i_1 - 1])));
                var_15 = max((!1), ((~(~1))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 7;i_7 += 1)
                        {
                            {
                                var_16 -= (min((arr_21 [2] [2] [i_1 - 1] [i_5 + 1] [i_6 + 2] [i_7 + 2] [i_7]), (max((arr_21 [i_0] [i_0] [i_1 - 1] [i_5 - 1] [i_6 - 2] [i_7 + 2] [i_7]), (arr_21 [i_1] [i_1] [i_1 + 1] [i_5 - 1] [i_6 - 3] [i_7 - 1] [i_7])))));
                                var_17 = (min(2118886196, (arr_5 [i_5 + 1] [i_5 - 1] [i_5 - 1])));
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_6] [i_7] [i_7] = ((~(((arr_4 [i_1]) ? (arr_20 [i_0] [i_0] [i_1] [i_1]) : (max((arr_17 [i_7]), (arr_4 [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
