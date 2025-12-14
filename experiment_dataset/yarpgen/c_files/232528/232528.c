/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-var_5 ? ((var_9 ? (((max(var_0, var_10)))) : -var_1)) : (var_3 - var_5));
    var_13 = (max(var_13, (((63962 << ((((1573 ? ((1 ? 63962 : 30492)) : var_11)) - 63949)))))));
    var_14 = (min(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (var_7 && var_8);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((var_6 && var_9) ? ((((!(arr_0 [i_0 - 1] [i_1]))))) : (arr_0 [i_0 + 2] [i_3]));
                                var_17 ^= (((max((!var_3), (var_5 || var_3))) && ((!(arr_5 [i_2 - 2] [i_0 - 1] [i_0 + 2])))));
                            }
                        }
                    }
                    var_18 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
