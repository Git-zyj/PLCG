/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= 9223372036854775807;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 ^= ((~((~(~231)))));
                    var_16 = ((-((-((0 ? var_2 : 61256))))));
                    var_17 &= -231;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((169 ? 58 : 231)))));
                                var_19 += ((-((2701584014 ? 2408 : 16595))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
