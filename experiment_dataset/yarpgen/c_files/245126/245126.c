/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~var_4) ? var_11 : var_2)) << (((((min(-4774086707690354755, 9172106847407182910)) / var_9)) - 309262487268409))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((~((~(var_7 - var_1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = (((~4774086707690354749) ? 1152921504606846720 : (arr_4 [1] [1])));
                                arr_17 [i_0] [i_0] [7] = ((var_7 | ((~(~var_9)))));
                            }
                        }
                    }
                    var_13 = ((-(((((var_7 ? -4774086707690354762 : (arr_1 [i_0] [i_0]))) > 82)))));
                    var_14 += (14 % 17892051815006779179);
                }
            }
        }
    }
    #pragma endscop
}
