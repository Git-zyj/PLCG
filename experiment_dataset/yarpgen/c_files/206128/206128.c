/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_13 = -255;
                            var_14 = ((49 ? 0 : 255));
                            var_15 |= 252;
                        }

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_16 = (max(var_16, ((min(255, ((15 ? ((min(253, 15))) : 1)))))));
                            var_17 = ((((min(7, 0))) ? ((32 ? 31 : 0)) : ((90 ? 165 : 255))));
                        }
                        var_18 = (min(var_18, (((110 << (164 - 154))))));
                        var_19 = ((255 ? ((12 ? 127 : 174)) : ((236 ? 71 : 255))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_20 = ((7 ? 255 : 164));
                        var_21 = 192;
                    }
                    var_22 = (min(((min(202, 0))), (min(((11 ? 90 : 31)), 56))));
                }
            }
        }
    }
    var_23 = var_9;
    var_24 = ((~(min(((255 ? 0 : 255)), var_0))));
    #pragma endscop
}
