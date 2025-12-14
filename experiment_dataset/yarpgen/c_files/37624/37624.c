/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 233;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 22;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [0] [i_3] [i_0] [i_0] [i_0] = (!227);
                                var_18 = (((((!(arr_6 [i_4 - 1] [i_1 + 1] [i_1 + 1]))))) / (max((arr_9 [i_1 - 1]), ((max(243, 1))))));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, (((-(!6))))));
                arr_12 [i_0] [i_0] [i_1] = ((((((arr_10 [i_0] [i_1 + 1] [i_0] [i_0] [i_0]) << (209446279 - 209446254)))) ? 10613 : 20));
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
