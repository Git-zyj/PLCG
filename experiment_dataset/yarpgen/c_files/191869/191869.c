/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_3;
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [5] [9] [5] [i_0] [i_1] = (max(((-18395 * ((max((arr_10 [i_0] [i_1] [3] [i_1] [1] [1] [1]), 60147))))), 0));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = (max((arr_0 [i_2 - 1] [i_2 - 1]), (arr_6 [i_0] [i_1])));
                                var_15 = 1747948205185535184;
                                var_16 = (((min(var_1, (arr_7 [i_2 - 1] [i_2] [i_2 - 1]))) > (((arr_1 [i_0]) ? ((var_10 ? (arr_7 [i_0] [11] [i_4]) : (arr_10 [1] [i_3] [i_2 + 1] [i_4] [i_4] [i_4] [i_3]))) : (arr_10 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2])))));
                                var_17 = (max(((((((arr_8 [i_1] [i_1] [i_1] [i_4]) ? var_2 : (arr_4 [i_0] [i_0]))) <= (arr_3 [i_1])))), (max(((min((arr_1 [i_0]), 120))), ((~(arr_3 [i_1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] = (((var_7 ^ (arr_18 [i_5 + 2] [i_6 - 2] [i_1]))));
                            var_18 -= (max((arr_1 [i_5]), (((arr_14 [i_6] [12] [12] [6]) ? (arr_15 [i_5 + 2] [i_5 + 2] [i_1] [i_0]) : var_3))));
                            arr_20 [i_0] [5] [i_0] [i_0] [i_1] [i_0] = (arr_18 [1] [4] [i_1]);
                            var_19 = (max(var_19, (arr_5 [6] [6])));
                            arr_21 [i_1] = 15181;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
