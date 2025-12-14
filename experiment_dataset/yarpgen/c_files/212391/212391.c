/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 ^= (min((((arr_7 [1] [i_1 + 1] [i_1 - 1] [i_2 + 1]) ? (arr_7 [8] [10] [12] [i_2 + 1]) : (arr_7 [2] [8] [12] [i_0]))), 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [8] [2] [5] [3] [0] [i_1] [4] = 1;
                                var_15 = -1;
                                var_16 = var_12;
                                var_17 = -11;
                                var_18 = max(((max(((-5 ? 23662 : 120)), ((65450 ? var_0 : (arr_6 [5] [9] [1])))))), ((((((arr_3 [4] [i_1] [1]) ? var_0 : -15))) ? -2764863135952104954 : (arr_0 [6] [8]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = (14336 ? (((arr_8 [3] [7] [i_5 + 1] [4] [8] [4]) ? 249 : (arr_8 [5] [1] [i_5 + 2] [9] [7] [3]))) : (arr_8 [6] [1] [i_5 - 1] [4] [1] [11]));
                                arr_21 [1] [7] [12] [7] [i_1] [9] = (((arr_6 [9] [2] [12]) / (((arr_0 [11] [4]) ? var_5 : 57064))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [4] [12] |= -8980810865200849727;
                        var_20 = -1;
                        var_21 = (max((arr_10 [8] [6] [i_1] [1] [i_1] [2] [0]), ((-8980810865200849727 ? (arr_11 [6] [2] [3] [1] [8] [2] [i_1]) : (arr_10 [8] [1] [i_1] [2] [i_1 + 1] [4] [4])))));
                        var_22 = ((((((-8 ? ((~(arr_2 [0] [2]))) : 15393)) + 2147483647)) >> (((arr_9 [9] [1]) / (arr_11 [10] [6] [11] [i_1 - 1] [1] [7] [i_1])))));
                        var_23 |= 8;
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((var_4 ? 144 : ((12988708361391086856 ? var_7 : var_12)))))));
    #pragma endscop
}
