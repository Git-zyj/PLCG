/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_9 <= ((var_12 << (var_3 - 106))))) ? var_1 : (((var_9 > (~2846)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = var_5;
                var_17 = (1 - 54410);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((max((arr_5 [i_1 - 2] [i_1] [i_1 - 2] [i_2 - 1]), (arr_5 [i_1 - 2] [4] [i_1 + 1] [i_2 + 1]))))));
                            arr_8 [i_0] [i_1] [i_2] &= ((max((arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_2 - 2]), var_7)));
                            var_19 = (min(var_19, 1));
                        }
                    }
                }
                var_20 = (arr_1 [i_1 - 2]);
            }
        }
    }
    var_21 |= var_7;
    var_22 = var_2;
    #pragma endscop
}
