/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [5] = 94;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (arr_9 [i_3] [i_2] [i_3]);
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = 1;
                            }
                        }
                    }
                    var_18 = (~1);
                }
            }
        }
    }
    var_19 = 14289;
    var_20 = var_1;
    var_21 = (var_4 ? var_13 : -53);
    #pragma endscop
}
