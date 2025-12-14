/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((((-(max(var_10, 3318460007))))), (min(((var_4 ? var_3 : var_9)), 10851)))))));
    var_15 = ((var_7 ? ((((var_2 < (var_4 * var_12))))) : 4142976382));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = ((((var_5 ? var_9 : (arr_0 [i_0 + 1])))) / ((((((arr_2 [i_1]) << (46495 - 46482)))) ? (arr_4 [i_0] [i_1 + 1]) : (~5483284927644232993))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((((((237 ? (arr_13 [i_0 + 1] [4] [i_2] [i_2 - 2] [i_1] [6]) : -353703474)) + 2147483647)) << ((((46480 & (arr_11 [i_0] [i_1] [0] [i_2 + 1] [i_4]))) - 37888))));
                                var_18 = (max(var_1, ((((arr_8 [i_2 + 1] [i_1 + 1] [i_2] [i_0 + 1]) || (arr_8 [i_2 + 1] [i_1 - 1] [i_4] [i_0 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
