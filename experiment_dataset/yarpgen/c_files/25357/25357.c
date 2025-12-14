/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min((~var_3), var_11)) / (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_13 = (((var_6 ? 0 : var_5)));
                            var_14 *= (((((~(-9223372036854775807 - 1)))) || (((~(~var_4))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = var_9;
                            var_16 = 9223372036854775807;
                            var_17 = ((((((var_4 || var_11) ? (var_1 ^ 2147483630) : (min(var_4, var_9))))) ? ((((max(var_4, var_0)) >> (var_8 - 1389105310)))) : (max((!-3), (var_2 / var_3)))));
                        }
                    }
                }
                var_18 = (min(var_18, ((((~41) ^ (((max(var_9, var_11)) << var_4)))))));
            }
        }
    }
    #pragma endscop
}
