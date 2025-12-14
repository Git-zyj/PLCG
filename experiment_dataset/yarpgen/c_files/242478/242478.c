/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = ((~(~var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (arr_6 [i_0] [i_1] [i_2 + 1] [i_3]);
                                var_14 = (min(var_14, (arr_5 [i_0])));
                                var_15 = (max(var_15, (((-(arr_10 [i_0] [i_1] [1] [i_2 - 1] [9] [i_3] [6]))))));
                                var_16 = ((-12038891131695023462 | (((arr_0 [i_0 + 1]) ? var_1 : ((33554431 ? 6407852942014528154 : 1272916542458784944))))));
                            }
                        }
                    }
                }
                var_17 |= (((((max(var_2, (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))))) ? var_6 : (arr_3 [i_0])));
                var_18 = (((((((max(var_9, (arr_6 [i_0] [i_1] [16] [i_0])))) ? (~4733) : (arr_4 [i_0 - 1] [i_0 + 1] [i_0])))) ? ((max((((arr_5 [i_0]) ? var_4 : var_10)), -var_1))) : (arr_5 [i_1])));
                var_19 = (max((arr_5 [i_0]), (max(((2147483647 ? var_0 : (arr_1 [1] [i_1]))), (arr_1 [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
