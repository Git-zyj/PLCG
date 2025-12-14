/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 |= ((!(((((max(16, 16))) ? ((16 ? var_9 : var_4)) : var_13)))));
    var_17 = (max(var_17, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [11] [i_4] = var_7;
                                var_18 ^= (max((((max(var_0, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) != (5 % var_3))), ((!((max(-6, (arr_13 [5] [i_1] [i_2] [i_3] [i_2] [i_2]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] |= ((((max(-402952154, 0))) | (max(((((arr_1 [i_0]) != (arr_5 [i_3] [i_1 - 1] [i_3])))), ((var_2 ? var_9 : (arr_12 [i_0] [10])))))));
                            }
                        }
                    }
                    var_19 += (((arr_13 [i_2] [i_1] [1] [1] [1] [i_0]) != (min(51839, (arr_5 [i_2] [4] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((-(arr_18 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                                var_21 = (max(var_12, ((((arr_17 [i_1] [9]) / (max(var_13, var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
