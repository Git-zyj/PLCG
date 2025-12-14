/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = 224;
                    var_13 = max((((arr_4 [i_1 - 1]) ^ (arr_0 [i_1 + 3]))), (!var_9));
                    var_14 ^= ((var_10 ? ((var_3 ? var_5 : 1861370545)) : (224 && 13525278358727822525)));
                }
            }
        }
    }
    var_15 = (((min(28, 2476915087))));
    var_16 = (((~var_8) ? ((((min(-13, var_4))) ? var_5 : var_6)) : (((var_4 ? var_6 : var_2)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_17 = (-18 / 1812519274);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 |= ((-(var_9 | -13)));
                            var_19 = (((-725554797 ^ var_2) % ((((arr_17 [i_3 + 1] [3] [i_5] [i_3]) ? var_8 : var_10)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
