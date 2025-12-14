/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 ^= arr_10 [i_4] [18] [10] [i_2] [18] [22];
                                arr_15 [i_1] = (((var_9 >> (((arr_4 [i_3] [17] [i_0]) - 15387253386692780858)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] = ((((((arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2])))) ? (((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]) ? (arr_10 [i_2] [i_1] [i_1] [i_0] [i_1] [i_0]) : 45519)) : ((~(arr_10 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_17 &= ((var_11 ? (min((((var_10 ? var_6 : var_13))), var_0)) : ((((((0 ? 25 : 56139)) < var_15))))));
    #pragma endscop
}
