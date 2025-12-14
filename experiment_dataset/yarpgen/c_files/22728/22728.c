/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_8 [1] [19] [i_2] [i_0] = (arr_6 [i_1 + 1] [i_1 + 1] [i_3] [i_0]);
                            arr_9 [i_0] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_14 : (arr_4 [i_0]))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
                            arr_10 [i_0] [i_1] [i_0] [10] = (arr_3 [i_1 + 1] [i_0]);
                        }
                    }
                }
                var_16 = ((max((max(var_13, var_6)), (((arr_5 [i_1] [i_0] [i_0]) ? (arr_3 [19] [i_0]) : var_4)))));
            }
        }
    }
    #pragma endscop
}
