/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [22] [10] [19] = ((min(65324, (max(-2934590728397244788, (arr_3 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = var_8;
                                arr_15 [i_0] [i_1 + 1] [i_1] [i_2] [i_3] [i_3] = var_0;
                                var_16 = (7347927262651355610 ? 10458272729881173868 : 884083393);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = max((((var_6 ? var_7 : var_5))), var_13);
    var_18 = (max(var_18, (var_8 & var_3)));
    #pragma endscop
}
