/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] = 16383;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] [i_3] [i_3] [i_2] [i_1] [i_1] = arr_6 [i_2];
                                var_11 = ((((((min(4294967295, var_2))))) + (((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1]) ? (arr_0 [i_2 + 1]) : -0))));
                                var_12 = (min((max(((min((arr_3 [i_4] [i_1]), 48))), ((-(arr_1 [i_2]))))), (((!((min(var_5, 32947))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((arr_15 [i_5]) / (arr_1 [i_0]))))));
                            var_14 = (((((arr_2 [i_1]) & (((var_4 ? var_9 : (arr_11 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1])))))) * (arr_16 [i_1])));
                        }
                    }
                }
                arr_17 [i_1] = ((~(arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])));
            }
        }
    }
    var_15 = ((((((!40304) & (min(var_2, var_5))))) ? var_9 : var_6));
    #pragma endscop
}
