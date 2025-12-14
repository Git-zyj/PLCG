/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_15 ? var_14 : ((var_8 ? var_4 : var_0)))), (((min(var_8, var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [9] [9] [i_1] = (min(var_3, (0 % 41)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (arr_13 [1] [i_1] [2] [2] [8]);
                                var_21 = (max(var_21, (((!(((~(arr_14 [i_0] [i_0] [16])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
