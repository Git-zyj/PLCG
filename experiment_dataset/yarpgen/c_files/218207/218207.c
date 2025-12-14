/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? var_10 : ((((!var_9) ? (!var_12) : var_10)))));
    var_17 = (((((var_12 ? (!-85) : var_4))) ? (((-74 ? 255 : var_9))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = 104;
                                var_18 = var_0;
                            }
                        }
                    }
                }
                var_19 = ((-(~1)));
            }
        }
    }
    var_20 |= var_2;
    #pragma endscop
}
