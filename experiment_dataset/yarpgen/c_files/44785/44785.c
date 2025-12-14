/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = var_2;
                                var_15 ^= (((max((2815000895224316120 ^ 2815000895224316112), 11)) << (((~-63) - 31))));
                            }
                        }
                    }
                    var_16 = var_7;
                }
            }
        }
    }
    var_17 = (var_1 == var_7);
    #pragma endscop
}
