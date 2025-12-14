/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((!(((17 / (var_7 + var_9))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [9] [i_2] [i_3] [i_4] = (arr_9 [i_0] [5]);
                                var_16 |= (((((-17 ? (arr_7 [i_2] [i_3] [i_2]) : -100))) - 2486996405));
                            }
                        }
                    }
                }
                var_17 = 113;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                {
                    arr_21 [i_7] = ((!((min(var_10, var_11)))));
                    var_18 = (max(var_18, ((((min((arr_14 [i_6 + 3] [i_6 + 3]), ((!(arr_14 [i_6 + 3] [8]))))) ? (arr_15 [9]) : (arr_16 [i_6 + 2] [i_6 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [4] [4] [i_8] [i_8] [8] &= (0 * -13);
                                arr_29 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5] [i_5] = var_5;
                            }
                        }
                    }
                    var_19 |= ((((1807970891 ? -17 : (111 || 13))) * var_12));
                }
            }
        }
    }
    var_20 = -var_8;
    var_21 = (max(var_21, -var_12));
    #pragma endscop
}
