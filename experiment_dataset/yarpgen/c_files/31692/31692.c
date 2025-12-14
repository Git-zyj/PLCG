/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-var_13 && var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((min((min(-var_6, (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [5]))), var_11)))));
                            var_21 = var_11;
                            var_22 = (max(((var_7 ? (arr_6 [i_2 - 1] [i_1 - 1] [i_2 - 1] [i_1 - 1]) : var_16)), ((min((arr_6 [7] [i_3] [i_2 - 1] [i_2]), (arr_6 [i_3] [i_3] [i_2 - 1] [i_2]))))));
                        }
                    }
                }
                var_23 -= (((~var_18) < ((max((arr_6 [i_1] [3] [i_1 + 3] [i_1]), (max(-13166, (arr_0 [1]))))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_24 = (((arr_11 [9] [9]) ? var_6 : (((max(43, var_4))))));
                                var_25 = (min(var_25, (((((max(-67, -119))) ? var_17 : (arr_13 [i_1 + 3] [i_4 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_0;
    var_27 = (max(((((13164 ? var_11 : var_5)))), (min(((max(-67, var_15))), ((var_4 ? var_1 : var_8))))));
    #pragma endscop
}
