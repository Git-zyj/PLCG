/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_4 ? (((var_3 ? 19347 : 18177))) : var_12)))));
    var_15 -= var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (((var_0 ? var_2 : var_8)));
                                arr_14 [i_0] [i_0] [i_0] [i_2 + 1] [1] [i_3 - 2] [i_0] = ((1 ? ((0 ? var_9 : var_12)) : (((((var_2 ? (arr_6 [i_2]) : 1))) ? var_2 : ((1 ? 0 : 1))))));
                                var_17 = var_11;
                                var_18 = ((40996 ? var_4 : 1));
                            }
                        }
                    }
                    arr_15 [i_0 + 1] [i_0] [i_0 + 1] = (arr_8 [i_0 - 1] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
