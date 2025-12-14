/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [2] [i_1] [i_1] |= ((((min(96, 0))) | -255));
                            var_11 *= var_0;
                            var_12 = 14067;
                        }
                    }
                }
                arr_11 [i_0] = (var_7 / -var_10);
            }
        }
    }
    var_13 = (((((((((((-99 ? (-2147483647 - 1) : 232)) + 2147483647)) + 2147483647)) >> (((max(-99, 1996832922019337393)) - 18446744073709551516))))) ? var_5 : ((((!6008112466579765901) < var_9)))));
    #pragma endscop
}
