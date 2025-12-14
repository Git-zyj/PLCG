/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = ((var_15 ? (min(var_15, var_8)) : (((((var_5 + var_12) && var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 -= var_1;
                                var_19 = ((~(((var_8 || (arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [14]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (max(var_20, ((max(((((max(var_0, var_0))) - (arr_3 [i_1 + 2] [i_1 - 1] [16]))), ((min((arr_13 [i_0] [i_0] [i_0] [20]), var_9))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_1 + 1] [i_0]);
                                var_22 = ((~(((!(((~(arr_3 [i_0] [i_5] [i_0])))))))));
                                var_23 = (((min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) || -var_0);
                            }
                        }
                    }
                    var_24 = (min(((-var_0 * (arr_20 [i_0] [i_0] [i_0] [10] [i_0]))), (arr_19 [i_5] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_25 = (((arr_9 [i_0] [i_1] [i_0] [i_8] [i_8 + 1] [i_8 + 2]) ? ((min(-var_6, (((var_13 != (arr_13 [i_8] [i_8 - 1] [i_8] [i_0]))))))) : ((-(max(var_5, var_1))))));
                                var_26 = ((-(((arr_18 [i_0] [i_1 + 1] [i_8 + 1] [i_9]) - var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
