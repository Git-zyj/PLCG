/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(6193479790861292236, 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] = (18446744073709551615 || 4294967295);
                    var_15 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = ((+(((!(((var_8 ? (arr_14 [i_0] [i_0]) : (arr_7 [i_0])))))))));
                                arr_15 [i_0] [9] [i_0] [i_0] |= 0;
                                var_17 = 127;
                                var_18 = (((min(var_10, (((arr_7 [i_4]) ? 0 : 13)))) ^ (((arr_3 [i_0] [i_1] [i_3]) ? (arr_2 [i_0] [i_2] [i_4]) : var_7))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((((arr_18 [i_0] [i_6 - 3] [i_6 - 3] [i_2] [i_6 - 3] [i_0]) * 0))) ? var_6 : (((((17542011643145828015 ? var_13 : (arr_19 [i_1] [i_1] [i_1])))))))))));
                                arr_22 [i_0] = (arr_16 [i_0] [8] [8] [i_5] [i_6 + 1]);
                                arr_23 [i_0] [i_1] [i_2] [3] [i_6 - 1] = var_3;
                                var_20 = (max(var_20, (((((((((-127 - 1) ? var_7 : var_5))) ? var_10 : 1)) != (min((min(var_0, (arr_21 [i_0] [i_1 - 1] [i_2] [i_6] [9] [5]))), var_6)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
