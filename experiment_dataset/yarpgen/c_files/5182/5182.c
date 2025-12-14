/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [0] [i_3 + 1] [7] = max((max(var_4, var_2)), ((max(var_0, var_3))));
                            arr_11 [i_3] = (max(var_11, var_9));
                            var_16 = var_12;
                        }
                    }
                }
                arr_12 [i_0] = (max((max(var_10, var_4)), (max((max(var_8, var_5)), ((max(var_1, var_12)))))));
                var_17 = (max((max(var_6, var_3)), (max(var_11, var_13))));
                var_18 -= var_0;
            }
        }
    }
    #pragma endscop
}
