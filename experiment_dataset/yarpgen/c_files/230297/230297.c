/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((-var_2 ? (min(0, var_4)) : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = var_15;
                var_19 = var_16;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 |= (min(((var_11 ? (arr_0 [i_1] [i_3]) : var_0)), (arr_1 [i_2 + 2])));
                            var_21 = ((((((((var_13 ? var_1 : var_14))) ? (var_0 + var_5) : 1))) ? var_5 : var_7));
                            arr_12 [i_1] [i_0] [i_1] = ((((((min(var_9, -18220))) ? (~var_8) : var_11)) ^ (min(16930774606050356605, var_1))));
                        }
                    }
                }
                var_22 = 16930774606050356605;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                arr_17 [i_5 + 1] [i_5] [i_5] = (((((((max(var_4, var_5))) ? -21508 : ((var_10 ? var_8 : (arr_16 [i_4] [8] [i_5 + 1])))))) ? 1 : (((var_4 + 2147483647) << (((var_2 + 765709123) - 6))))));
                arr_18 [4] [i_5 + 2] [i_5] = (max((((var_3 ? var_0 : var_9))), var_14));
            }
        }
    }
    #pragma endscop
}
