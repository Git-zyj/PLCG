/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 37220;
    var_14 &= 37206;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 |= ((((((arr_4 [i_0] [i_2] [i_1]) < var_5)) ? var_9 : -9223372036854775807)));
                            var_16 = (arr_2 [1]);
                            arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_3 - 4] = 50;
                        }
                    }
                }
                arr_10 [i_0] [i_0] = (var_10 ? (min(((7924107411710263064 ? var_12 : -91)), 1221488717)) : ((((!var_11) && var_10))));
                var_17 = var_3;
            }
        }
    }
    #pragma endscop
}
