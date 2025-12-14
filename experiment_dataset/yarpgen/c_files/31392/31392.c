/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_10 |= (arr_1 [2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (arr_3 [i_0] [i_0]);
                            arr_12 [i_0] [i_0] [i_2] [i_0] = (arr_4 [i_0]);
                            var_11 = (max(var_11, var_7));
                            var_12 = arr_3 [i_2] [i_0];
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = var_9;
            }
        }
    }
    var_13 = ((var_8 || (((var_4 ? ((min(0, var_1))) : (var_1 ^ var_9))))));
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_24 [2] [2] [i_6] [2] [i_4] = (((arr_19 [i_5] [i_5] [19] [i_7]) ? (arr_18 [i_6] [i_4] [i_4]) : var_4));
                            arr_25 [7] [i_6] [20] [20] |= (min((arr_16 [i_5]), (arr_21 [i_4] [i_6] [i_7])));
                            arr_26 [i_7] = (arr_14 [18] [4]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_35 [i_9] [17] [6] [i_8] [i_9] [6] [i_10] = (arr_15 [i_9]);
                                var_14 = (min((((arr_16 [i_4]) % (((arr_20 [i_8] [i_4] [i_4]) ? (arr_16 [i_5]) : var_1)))), var_3));
                                arr_36 [i_9] [i_9] [i_8] [i_9] [i_8] = (max((((((((arr_22 [i_4] [i_10] [i_10] [i_9]) ? var_4 : var_7))) < ((517282815 ? 1587144862 : 200))))), (max(var_3, (arr_34 [4] [i_5] [i_5] [i_5] [4])))));
                                var_15 = (max(var_5, (((var_8 > (arr_14 [i_4] [i_4 - 1]))))));
                                arr_37 [i_4] [i_5] [i_9] [i_4] [i_5] [i_8] = (min(((((min(var_9, var_0))) ? (var_2 - var_4) : ((var_4 ? (arr_20 [i_8] [i_8] [i_8]) : var_2)))), ((min(((min((arr_32 [i_4] [i_9] [i_4] [i_4]), (arr_22 [i_4] [i_5] [i_5] [7])))), (((arr_31 [i_4] [i_4] [i_4] [i_4 - 4] [i_4 - 2]) ? (arr_20 [i_9] [5] [i_4]) : var_8)))))));
                            }
                        }
                    }
                }
                var_16 ^= var_7;
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
