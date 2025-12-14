/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1 + 1] [i_0] = ((max(var_7, (arr_4 [i_1 + 2] [i_1 + 2] [i_0]))));
                var_11 *= ((min(var_2, (arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 2]))));
            }
        }
    }
    var_12 -= var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_13 = (max((((-(~0)))), (min((arr_15 [i_2] [i_2] [i_3 - 1] [i_4 + 2]), (arr_15 [i_2] [i_3 - 1] [i_3 - 1] [i_4 + 2])))));
                                var_14 = (max(var_14, 11640541942485160189));
                            }
                        }
                    }
                }
                var_15 |= (((var_7 * var_10) ? ((max((arr_9 [i_3 + 1] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 + 1])))) : (((((arr_17 [i_2] [i_3] [i_2] [i_3 + 1]) ? var_4 : var_0)) + (1 + 1)))));
            }
        }
    }
    #pragma endscop
}
