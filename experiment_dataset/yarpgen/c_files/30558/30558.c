/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1359017463;

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_12 = min((min(65508, var_1)), (-9223372036854775807 >= 32761));
                    var_13 = (min(var_13, (~var_7)));
                }
                arr_10 [i_0] [i_0] = ((((((((var_7 / (arr_6 [i_1])))) ? (min(var_4, var_6)) : var_8))) ? (arr_8 [i_0]) : (((((arr_8 [i_0]) && var_10))))));
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_14 = var_5;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_17 [i_5] [i_5] [i_5] [i_4 - 1] [i_4] [i_4 - 1] [i_1 + 1]), 0))) ? (((125 | 0) ? 11 : (arr_7 [i_0] [i_1 - 1]))) : (!-126)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 += (min(var_9, ((var_1 + (var_6 ^ var_7)))));
    #pragma endscop
}
