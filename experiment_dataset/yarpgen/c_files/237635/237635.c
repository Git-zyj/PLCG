/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = var_15;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_1] [1] [7] = 7588156016208997509;
                            var_20 = (max(-191, 65));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [0] [i_4] |= (((arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] [1]) ? ((var_15 ? (((var_18 >> (var_6 - 3161913362)))) : var_8)) : (arr_9 [i_0] [i_0] [i_2] [i_4])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_4] = 135;
                            }
                            for (int i_5 = 1; i_5 < 7;i_5 += 1)
                            {
                                var_21 = (min((((((188 - (arr_16 [i_2])))) ^ (((arr_18 [i_0] [i_1] [i_2] [i_2] [0]) ? 15408697041018514871 : (arr_12 [i_0] [i_0] [6] [9] [i_3 + 1] [i_3 + 3] [1]))))), (((14181693239896028130 ? var_6 : var_14)))));
                                arr_19 [i_5] [i_5] = ((max((arr_17 [i_2] [i_3 - 2] [i_3 + 1] [i_3 - 3] [i_5 + 1] [i_5 - 1] [i_5]), (arr_17 [i_0] [i_1] [i_3 + 1] [i_3 - 3] [i_5 + 1] [i_5 - 1] [i_5 - 1]))));
                            }
                        }
                    }
                }
                arr_20 [6] [i_0] [i_1] = (((-(arr_6 [3] [4] [i_1] [i_1]))));
                arr_21 [i_0] [i_0] [0] = ((!((((arr_8 [i_0] [6] [i_1]) ? var_0 : (arr_8 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_22 = var_15;
    var_23 = ((12516 + (max(((var_9 ? var_0 : var_5)), (51738 && var_3)))));
    #pragma endscop
}
