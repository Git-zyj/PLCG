/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_1));
                                var_20 ^= 1;
                                var_21 = (max(var_21, 1));
                            }
                        }
                    }
                    var_22 = -131450474;
                }
            }
        }
    }
    var_23 = (max(1, 1071295442));
    #pragma endscop
}
