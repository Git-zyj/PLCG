/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~127) >= ((-(0 * 86)))));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = ((238 | var_2) ? ((1094897561 ? var_7 : (0 >= 255))) : ((max((arr_4 [i_3 - 2] [i_1]), 74))));
                            var_22 = (max(var_22, var_17));
                        }
                    }
                }
                var_23 = (!var_11);
                var_24 ^= ((var_7 * ((var_17 ? var_7 : (arr_5 [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
