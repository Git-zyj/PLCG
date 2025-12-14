/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(var_10, 8791798054912)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_4] [i_4] = (((((((124 ? 129 : 141)) * (arr_2 [i_4 + 1])))) ? (((((((arr_2 [i_1]) ? 7438748356519681160 : var_10))) ? (93 + -8791798054903) : (-94 - var_4)))) : (((arr_4 [i_0] [i_2] [i_3]) ? (max(48950, 16358393929579135160)) : ((((arr_1 [i_1]) + 131)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((-(((((-(arr_9 [i_4])))) ? ((1501963301 / (arr_2 [i_0]))) : (var_10 <= var_9)))));
                            }
                        }
                    }
                }
                var_14 = (min(var_14, (~1)));
                var_15 = (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]) % ((5 ? 134 : -8791798054925))));
            }
        }
    }
    var_16 = 90;
    #pragma endscop
}
