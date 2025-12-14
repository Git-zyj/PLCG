/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((~(~var_13))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (((var_14 || var_1) || (!var_14)));
                                var_23 = 51983;
                                var_24 = ((!(((((var_6 ? 1 : var_19))) || 1))));
                            }
                        }
                    }
                }
                var_25 = (1 - 22);
            }
        }
    }
    var_26 = ((((((255 * var_6) <= (!var_11)))) <= 255));
    #pragma endscop
}
