/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_11 = (min(var_11, -50936));
                        var_12 = (min((((18072262724106464877 ? (arr_1 [i_1 - 1]) : 0))), (((arr_5 [i_0 + 2] [i_1 + 1] [i_2]) ? ((-(arr_3 [i_0 - 1] [i_0 - 1] [2]))) : (!var_9)))));
                    }
                    var_13 -= (((18 ? var_0 : (arr_3 [i_0 + 2] [i_1 + 1] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] = (var_2 < ((-(arr_2 [i_5] [i_2 + 1]))));
                                arr_17 [i_2] [i_5] = (arr_2 [13] [13]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
