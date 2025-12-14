/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_5 [i_3 - 3] [i_2 - 1] [i_1 + 1]) ? (arr_2 [i_3]) : (min(((((arr_9 [i_0] [8] [i_0] [8]) / var_13))), (min(var_12, var_15))))));
                                arr_12 [i_0] [i_2] = 31192;
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_2 - 1] = (max((((arr_11 [i_2] [i_2]) ? (~-1) : (arr_5 [i_2] [5] [5]))), (min((((arr_2 [i_1 - 1]) ^ 1839539553873742270)), var_6))));
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = ((((min((~var_8), 1660890208))) ? (((var_5 | var_7) ? 7421 : var_10)) : var_13));
    var_20 = (~58);
    #pragma endscop
}
