/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 -= (-(~0));
                                var_21 = -var_14;
                            }
                        }
                    }
                    var_22 = (-((~(arr_6 [i_0] [i_0] [i_0] [i_0] [7]))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 = (((((arr_0 [i_0]) ? (2147482624 || -296130911) : (((arr_10 [i_0] [i_1 + 1] [i_2] [i_5] [i_5]) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0] [i_0] [11])))))) ? (((((arr_9 [i_0] [i_0] [5] [i_2] [i_5] [i_5] [i_5]) + 2147483647)) << ((((-666020003 & (arr_11 [i_0] [2] [0] [i_5]))) - 1208046853)))) : (min((max(1396379064, var_16)), (-5 >= 30914790))));
                        arr_12 [10] = min(((var_15 ? (arr_0 [i_5]) : var_8)), (((max(var_8, (-2147483647 - 1))) - ((var_16 / (arr_0 [i_2]))))));
                    }
                }
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
