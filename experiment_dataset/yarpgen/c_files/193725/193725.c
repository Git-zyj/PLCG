/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = ((!((((var_3 / var_0) / (~19229))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = ((!((((1 - var_11) - var_2)))));
                                var_21 = var_17;
                            }
                        }
                    }
                }
                var_22 &= ((-(((var_3 | var_16) | var_11))));
            }
        }
    }
    var_23 = var_14;
    var_24 = ((max((max(12568396198026671659, var_5)), (((19275 ? 3767309550 : 24112))))));
    #pragma endscop
}
