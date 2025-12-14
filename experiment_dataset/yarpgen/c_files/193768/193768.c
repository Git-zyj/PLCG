/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-var_15 - (32752 + var_13))), 3769));
    var_18 = (~var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((((((arr_12 [i_0] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_0]) ? (arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) : (arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 3] [i_4])))) ? (((arr_12 [i_0] [17] [i_4 + 1] [i_4 + 2] [i_0]) - (arr_11 [7] [10] [i_4 + 3] [i_4 - 2] [14]))) : (((!(arr_12 [i_0] [i_4] [i_4 - 3] [i_4 + 2] [i_0]))))));
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = (max(0, (max(((max(-3001, (arr_9 [i_0])))), (max((arr_2 [i_0] [i_0]), 9627))))));
                            }
                        }
                    }
                    arr_16 [1] [i_0] = -20072;
                    arr_17 [i_0] [12] &= (-((var_5 * (arr_4 [1] [i_0]))));
                    arr_18 [i_0] [i_0] = (max(((((arr_4 [i_0] [i_1]) == var_2))), (max(((var_8 ? var_4 : (arr_11 [i_0] [0] [10] [i_0] [i_0]))), ((var_0 ? -12414 : 0))))));
                    arr_19 [i_1] [i_1] [i_0] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
