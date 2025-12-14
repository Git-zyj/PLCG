/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2147483626;
    var_19 = 0;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, 242));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = var_9;
                                var_22 += 244;
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_23 ^= 235;
                        var_24 = (max(var_24, (((11 >> (34 - 3))))));
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, (252 || var_6)));
    #pragma endscop
}
