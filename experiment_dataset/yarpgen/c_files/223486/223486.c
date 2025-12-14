/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((var_4 + ((-(var_12 + var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] [9] = (((((var_1 > (((var_6 << (var_7 - 831))))))) | (!var_2)));
                                var_18 = (arr_8 [7] [i_4] [i_4 + 1]);
                                arr_12 [i_0] [i_4] [i_2] [i_2] [i_3] [i_4] = (((((((var_9 & var_13) > (2 > var_8))))) != (((((var_12 ? var_0 : var_3))) ? var_15 : (((var_0 ? var_2 : (arr_6 [i_0] [9] [9] [12] [1] [1]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_2] [i_2] = 22;
                                arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] = ((arr_18 [4] [i_5] [i_2] [i_2] [1] [i_0]) > (arr_18 [i_0] [i_0] [i_1] [i_2] [i_5 - 2] [i_6]));
                                var_19 = ((!((((arr_1 [i_5 + 2] [i_5 - 1]) ? var_15 : (arr_1 [i_5 - 2] [i_5 + 2]))))));
                                var_20 = (1748986820 && (((min(var_11, var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
