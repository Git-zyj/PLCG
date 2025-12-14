/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_7 ? var_7 : var_9))) ? ((max(0, 2420))) : ((0 ? 56473 : var_2))))) ^ (((((2660500107 ? var_5 : var_3))) ? ((var_0 ? var_5 : var_4)) : 63115))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((!(arr_10 [i_3] [i_3 + 3] [i_3] [i_3] [i_3])));
                            arr_12 [i_0] = 63115;
                            arr_13 [i_0] [i_1] [3] [i_3] = (((28 ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 2] [9]) : var_1)) < (max((arr_10 [i_3] [i_3 + 2] [i_3] [i_3 - 2] [i_0]), (arr_10 [i_3] [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3]))));
                        }
                    }
                }
                var_11 = (((arr_10 [1] [i_1] [i_0] [i_1] [i_1]) ? ((0 / (arr_10 [i_1] [6] [i_1] [i_1] [i_1]))) : (!0)));
            }
        }
    }
    #pragma endscop
}
