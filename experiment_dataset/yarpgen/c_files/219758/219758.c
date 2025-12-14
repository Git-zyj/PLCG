/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 << (-825795491 + 825795501)));
    var_19 = (((825795490 ? (~3139366759) : 7367996412194982586)));
    var_20 = max(var_14, (((~904507302) | (max(53, 2115232425)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 *= (arr_5 [12] [1] [i_0]);
                            arr_11 [i_0] [i_2] [i_0] = ((-6461 ? (var_0 && var_8) : (((arr_3 [i_3 + 2] [i_1 - 4] [i_1 - 4]) ^ (arr_8 [i_1] [i_2] [i_1])))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = ((((7367996412194982589 ? 0 : 76)) != var_0));
            }
        }
    }
    #pragma endscop
}
