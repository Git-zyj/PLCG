/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 ^= ((!((max((arr_13 [i_1] [i_2 - 1] [i_1] [i_4 + 1] [i_4 - 2]), var_0)))));
                                var_14 *= (max((~-34), ((~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_1])))));
                                var_15 = (min(var_15, ((((-((7934042151824469416 ? -34 : 262143))))))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((~(~var_6))))));
                }
            }
        }
    }
    var_17 -= (142 && -262158);
    #pragma endscop
}
