/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 ? var_3 : (!var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = ((var_4 - var_14) || var_19);
                                var_22 = (var_1 * var_15);
                            }
                        }
                    }
                    var_23 = ((!((((!var_1) & ((var_15 ? var_2 : var_15)))))));
                    var_24 = (var_6 <= var_15);
                }
            }
        }
    }
    #pragma endscop
}
