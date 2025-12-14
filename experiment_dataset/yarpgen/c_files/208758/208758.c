/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((arr_0 [1]) / (arr_1 [i_0] [i_1]))) << (((((arr_1 [i_0] [i_1]) ? var_8 : -17181)) - 10472))));
                var_20 = (max((arr_2 [i_0] [i_1] [i_1]), (arr_3 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [8] [i_2] [i_2] [i_3] [i_2] = ((~-7551) ? ((min((arr_2 [i_2 - 2] [i_2 - 1] [i_2 - 2]), (arr_2 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) : var_13);
                            var_21 *= (arr_2 [i_1] [i_2 - 1] [11]);
                            var_22 = (min(var_22, (arr_6 [14] [14])));
                        }
                    }
                }
                var_23 = (max(var_23, (arr_7 [10] [i_1] [1] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_17 [3] [i_5 + 1] [3] = 9007199254740991;
                    arr_18 [6] [6] = (!237);
                }
            }
        }
    }
    #pragma endscop
}
