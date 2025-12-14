/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (100 < 127);
                var_13 = (arr_0 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 = var_6;
                    var_15 = ((((min((min((arr_2 [i_0]), (arr_3 [i_1] [i_2]))), (arr_3 [i_1] [i_2])))) ? ((((((arr_1 [i_0]) ? var_6 : var_3))) ? (((arr_4 [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0]))) : (max(var_4, (arr_3 [i_0] [i_2]))))) : (((min(-105, 2836544170))))));
                    arr_7 [i_1] = (((-105 + 2147483647) << (100 - 100)));
                }
                arr_8 [i_1] = ((((max(-2008946902088734455, 0))) ? -104 : -49));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_16 = (arr_2 [i_4]);
                            var_17 = (arr_6 [i_1]);
                            arr_15 [i_0] [i_1] [i_3] [i_1] = ((arr_9 [i_0] [i_1] [i_3] [i_1]) | (min((arr_14 [i_0] [i_4] [i_3] [i_4] [i_3 - 1]), var_4)));
                        }
                    }
                }
            }
        }
    }
    var_18 &= (max(-49, ((49 ? 1 : 6970282406361117456))));
    #pragma endscop
}
